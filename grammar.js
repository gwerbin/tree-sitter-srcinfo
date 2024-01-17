// https://wiki.archlinux.org/title/.SRCINFO#Syntax

module.exports = grammar({
  name: "SRCINFO",

  rules: {
    source_file: $ => seq($.pkgbase, optional($.pkg)),

    pkgbase: $ => seq($.pkgbase_header, repeat1($.item)),
    pkg: $ => seq($.pkg_header, repeat($.item)),

    pkgbase_header: $ => seq("pkgbase", "=", field("name", $.name), optional("\n")),
    pkg_header:     $ => seq("pkgname", "=", field("name", $.name), optional("\n")),

    // https://wiki.archlinux.org/title/PKGBUILD#pkgname
    name: $ => /[A-Za-z@._+-]+/,

    item: $ => seq(/\s+/, field("key", $.item_key), "=", field("value", $.item_value), optional("\n")),
    // https://man.archlinux.org/man/PKGBUILD.5#OPTIONS_AND_DIRECTIVES
    item_key: $ => choice(
      "pkgver",
      "pkgrel",
      "epoch",
      "pkgdesc",
      "arch",
      "url",
      "license",
      "groups",
      "depends",
      "makedepends",
      "checkdepends",
      "optdepends",
      "provides",
      "conflicts",
      "replaces",
      "backup",
      "options",
      "install",
      "changelog",
      "source",
      "noextract",
      "validpgpkeys",
      "md5sums",
      "sha1sums",
      "sha224sums",
      "sha256sums",
      "sha384sums",
      "sha512sums",
    ),
    item_value: $ => /[^\n]+/,

    // item2: $ => choice(
    //   $.item_pkgver,
    //   seq(/[ \t]+/, field("key", "pkgrel"), "=", field("value", /\d+(\.\d+)?/)),
    // ),
    //
    // item_pkgver_key: $ => "pkgver",
    // item_pkgver_val: $ => /[A-Za-z0-9._-]+/,
    // item_pkgver: $ => seq(/[ \t]+/, field("key", $.item_pkgver_key), "=", field("value", $.item_pkgver_val)),
    //
    // item_pkgrel_key: $ => "pkgrel",
    // item_pkgrel_val: $ => /\d+(\.\d+)?/,
    // item_pkgrel: $ => seq(/[ \t]+/, field("key", $.item_pkgrel_key), "=", field("value", $.item_pkgrel_val)),

  }
});
