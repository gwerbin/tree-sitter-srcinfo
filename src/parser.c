#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_pkgbase = 1,
  anon_sym_EQ = 2,
  anon_sym_LF = 3,
  anon_sym_pkgname = 4,
  sym_name = 5,
  aux_sym_item_token1 = 6,
  anon_sym_pkgver = 7,
  anon_sym_pkgrel = 8,
  anon_sym_epoch = 9,
  anon_sym_pkgdesc = 10,
  anon_sym_arch = 11,
  anon_sym_url = 12,
  anon_sym_license = 13,
  anon_sym_groups = 14,
  anon_sym_depends = 15,
  anon_sym_makedepends = 16,
  anon_sym_checkdepends = 17,
  anon_sym_optdepends = 18,
  anon_sym_provides = 19,
  anon_sym_conflicts = 20,
  anon_sym_replaces = 21,
  anon_sym_backup = 22,
  anon_sym_options = 23,
  anon_sym_install = 24,
  anon_sym_changelog = 25,
  anon_sym_source = 26,
  anon_sym_noextract = 27,
  anon_sym_validpgpkeys = 28,
  anon_sym_md5sums = 29,
  anon_sym_sha1sums = 30,
  anon_sym_sha224sums = 31,
  anon_sym_sha256sums = 32,
  anon_sym_sha384sums = 33,
  anon_sym_sha512sums = 34,
  sym_item_value = 35,
  sym_source_file = 36,
  sym_pkgbase = 37,
  sym_pkg = 38,
  sym_pkgbase_header = 39,
  sym_pkg_header = 40,
  sym_item = 41,
  sym_item_key = 42,
  aux_sym_pkgbase_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_pkgbase] = "pkgbase",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_pkgname] = "pkgname",
  [sym_name] = "name",
  [aux_sym_item_token1] = "item_token1",
  [anon_sym_pkgver] = "pkgver",
  [anon_sym_pkgrel] = "pkgrel",
  [anon_sym_epoch] = "epoch",
  [anon_sym_pkgdesc] = "pkgdesc",
  [anon_sym_arch] = "arch",
  [anon_sym_url] = "url",
  [anon_sym_license] = "license",
  [anon_sym_groups] = "groups",
  [anon_sym_depends] = "depends",
  [anon_sym_makedepends] = "makedepends",
  [anon_sym_checkdepends] = "checkdepends",
  [anon_sym_optdepends] = "optdepends",
  [anon_sym_provides] = "provides",
  [anon_sym_conflicts] = "conflicts",
  [anon_sym_replaces] = "replaces",
  [anon_sym_backup] = "backup",
  [anon_sym_options] = "options",
  [anon_sym_install] = "install",
  [anon_sym_changelog] = "changelog",
  [anon_sym_source] = "source",
  [anon_sym_noextract] = "noextract",
  [anon_sym_validpgpkeys] = "validpgpkeys",
  [anon_sym_md5sums] = "md5sums",
  [anon_sym_sha1sums] = "sha1sums",
  [anon_sym_sha224sums] = "sha224sums",
  [anon_sym_sha256sums] = "sha256sums",
  [anon_sym_sha384sums] = "sha384sums",
  [anon_sym_sha512sums] = "sha512sums",
  [sym_item_value] = "item_value",
  [sym_source_file] = "source_file",
  [sym_pkgbase] = "pkgbase",
  [sym_pkg] = "pkg",
  [sym_pkgbase_header] = "pkgbase_header",
  [sym_pkg_header] = "pkg_header",
  [sym_item] = "item",
  [sym_item_key] = "item_key",
  [aux_sym_pkgbase_repeat1] = "pkgbase_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_pkgbase] = anon_sym_pkgbase,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_pkgname] = anon_sym_pkgname,
  [sym_name] = sym_name,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [anon_sym_pkgver] = anon_sym_pkgver,
  [anon_sym_pkgrel] = anon_sym_pkgrel,
  [anon_sym_epoch] = anon_sym_epoch,
  [anon_sym_pkgdesc] = anon_sym_pkgdesc,
  [anon_sym_arch] = anon_sym_arch,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_license] = anon_sym_license,
  [anon_sym_groups] = anon_sym_groups,
  [anon_sym_depends] = anon_sym_depends,
  [anon_sym_makedepends] = anon_sym_makedepends,
  [anon_sym_checkdepends] = anon_sym_checkdepends,
  [anon_sym_optdepends] = anon_sym_optdepends,
  [anon_sym_provides] = anon_sym_provides,
  [anon_sym_conflicts] = anon_sym_conflicts,
  [anon_sym_replaces] = anon_sym_replaces,
  [anon_sym_backup] = anon_sym_backup,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_install] = anon_sym_install,
  [anon_sym_changelog] = anon_sym_changelog,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_noextract] = anon_sym_noextract,
  [anon_sym_validpgpkeys] = anon_sym_validpgpkeys,
  [anon_sym_md5sums] = anon_sym_md5sums,
  [anon_sym_sha1sums] = anon_sym_sha1sums,
  [anon_sym_sha224sums] = anon_sym_sha224sums,
  [anon_sym_sha256sums] = anon_sym_sha256sums,
  [anon_sym_sha384sums] = anon_sym_sha384sums,
  [anon_sym_sha512sums] = anon_sym_sha512sums,
  [sym_item_value] = sym_item_value,
  [sym_source_file] = sym_source_file,
  [sym_pkgbase] = sym_pkgbase,
  [sym_pkg] = sym_pkg,
  [sym_pkgbase_header] = sym_pkgbase_header,
  [sym_pkg_header] = sym_pkg_header,
  [sym_item] = sym_item,
  [sym_item_key] = sym_item_key,
  [aux_sym_pkgbase_repeat1] = aux_sym_pkgbase_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_pkgbase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkgname] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_pkgver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkgrel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_epoch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkgdesc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_license] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_groups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_depends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makedepends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checkdepends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optdepends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conflicts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replaces] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_install] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_changelog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noextract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_validpgpkeys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md5sums] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1sums] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha224sums] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha256sums] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha384sums] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha512sums] = {
    .visible = true,
    .named = false,
  },
  [sym_item_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pkgbase] = {
    .visible = true,
    .named = true,
  },
  [sym_pkg] = {
    .visible = true,
    .named = true,
  },
  [sym_pkgbase_header] = {
    .visible = true,
    .named = true,
  },
  [sym_pkg_header] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_item_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pkgbase_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_key, 1},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(179);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '5') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(6);
      if (lookahead == '5') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == '5') ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(155);
      END_STATE();
    case 10:
      if (lookahead == '8') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 176:
      if (eof) ADVANCE(179);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 177:
      if (eof) ADVANCE(179);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      END_STATE();
    case 178:
      if (eof) ADVANCE(179);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_pkgbase);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_pkgbase);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_pkgname);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_pkgname);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '5') ADVANCE(2);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '5') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 'v') ADVANCE(229);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(315);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(306);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(365);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(232);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k') ADVANCE(217);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(286);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(253);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(316);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(309);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_pkgver);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_pkgver);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_pkgrel);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_pkgrel);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_epoch);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_epoch);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_pkgdesc);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_pkgdesc);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_arch);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_url);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_license);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_license);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_groups);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_groups);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_depends);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_depends);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_makedepends);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_makedepends);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_checkdepends);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_checkdepends);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_optdepends);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_optdepends);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_provides);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_conflicts);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_conflicts);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_replaces);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_replaces);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_backup);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_backup);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_install);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_install);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_changelog);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_changelog);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_noextract);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_noextract);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_validpgpkeys);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_validpgpkeys);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_md5sums);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_sha1sums);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_sha224sums);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_sha256sums);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_sha384sums);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_sha512sums);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_item_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_item_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(379);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 177},
  [2] = {.lex_state = 177},
  [3] = {.lex_state = 178},
  [4] = {.lex_state = 178},
  [5] = {.lex_state = 176},
  [6] = {.lex_state = 177},
  [7] = {.lex_state = 178},
  [8] = {.lex_state = 178},
  [9] = {.lex_state = 178},
  [10] = {.lex_state = 178},
  [11] = {.lex_state = 176},
  [12] = {.lex_state = 178},
  [13] = {.lex_state = 176},
  [14] = {.lex_state = 175},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 175},
  [18] = {.lex_state = 178},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_pkgbase] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_pkgname] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_pkgver] = ACTIONS(1),
    [anon_sym_pkgrel] = ACTIONS(1),
    [anon_sym_epoch] = ACTIONS(1),
    [anon_sym_pkgdesc] = ACTIONS(1),
    [anon_sym_arch] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_license] = ACTIONS(1),
    [anon_sym_groups] = ACTIONS(1),
    [anon_sym_depends] = ACTIONS(1),
    [anon_sym_makedepends] = ACTIONS(1),
    [anon_sym_checkdepends] = ACTIONS(1),
    [anon_sym_optdepends] = ACTIONS(1),
    [anon_sym_provides] = ACTIONS(1),
    [anon_sym_conflicts] = ACTIONS(1),
    [anon_sym_replaces] = ACTIONS(1),
    [anon_sym_backup] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_install] = ACTIONS(1),
    [anon_sym_changelog] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_noextract] = ACTIONS(1),
    [anon_sym_validpgpkeys] = ACTIONS(1),
    [anon_sym_md5sums] = ACTIONS(1),
    [anon_sym_sha1sums] = ACTIONS(1),
    [anon_sym_sha224sums] = ACTIONS(1),
    [anon_sym_sha256sums] = ACTIONS(1),
    [anon_sym_sha384sums] = ACTIONS(1),
    [anon_sym_sha512sums] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_pkgbase] = STATE(6),
    [sym_pkgbase_header] = STATE(10),
    [anon_sym_pkgbase] = ACTIONS(3),
  },
  [2] = {
    [sym_item_key] = STATE(16),
    [anon_sym_pkgver] = ACTIONS(5),
    [anon_sym_pkgrel] = ACTIONS(5),
    [anon_sym_epoch] = ACTIONS(5),
    [anon_sym_pkgdesc] = ACTIONS(5),
    [anon_sym_arch] = ACTIONS(5),
    [anon_sym_url] = ACTIONS(5),
    [anon_sym_license] = ACTIONS(5),
    [anon_sym_groups] = ACTIONS(5),
    [anon_sym_depends] = ACTIONS(5),
    [anon_sym_makedepends] = ACTIONS(5),
    [anon_sym_checkdepends] = ACTIONS(5),
    [anon_sym_optdepends] = ACTIONS(5),
    [anon_sym_provides] = ACTIONS(5),
    [anon_sym_conflicts] = ACTIONS(5),
    [anon_sym_replaces] = ACTIONS(5),
    [anon_sym_backup] = ACTIONS(5),
    [anon_sym_options] = ACTIONS(5),
    [anon_sym_install] = ACTIONS(5),
    [anon_sym_changelog] = ACTIONS(5),
    [anon_sym_source] = ACTIONS(5),
    [anon_sym_noextract] = ACTIONS(5),
    [anon_sym_validpgpkeys] = ACTIONS(5),
    [anon_sym_md5sums] = ACTIONS(5),
    [anon_sym_sha1sums] = ACTIONS(5),
    [anon_sym_sha224sums] = ACTIONS(5),
    [anon_sym_sha256sums] = ACTIONS(5),
    [anon_sym_sha384sums] = ACTIONS(5),
    [anon_sym_sha512sums] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_pkgname,
    ACTIONS(11), 1,
      aux_sym_item_token1,
    STATE(3), 2,
      sym_item,
      aux_sym_pkgbase_repeat1,
  [14] = 4,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      anon_sym_pkgname,
    ACTIONS(18), 1,
      aux_sym_item_token1,
    STATE(3), 2,
      sym_item,
      aux_sym_pkgbase_repeat1,
  [28] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      anon_sym_LF,
    ACTIONS(24), 2,
      anon_sym_pkgname,
      aux_sym_item_token1,
  [39] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_pkgname,
    STATE(7), 1,
      sym_pkg_header,
    STATE(21), 1,
      sym_pkg,
  [52] = 3,
    ACTIONS(18), 1,
      aux_sym_item_token1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_item,
      aux_sym_pkgbase_repeat1,
  [63] = 3,
    ACTIONS(18), 1,
      aux_sym_item_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_item,
      aux_sym_pkgbase_repeat1,
  [74] = 2,
    ACTIONS(36), 1,
      anon_sym_pkgname,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [82] = 2,
    ACTIONS(18), 1,
      aux_sym_item_token1,
    STATE(4), 2,
      sym_item,
      aux_sym_pkgbase_repeat1,
  [90] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_LF,
    ACTIONS(42), 1,
      aux_sym_item_token1,
  [100] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      aux_sym_item_token1,
  [105] = 2,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(48), 1,
      aux_sym_item_token1,
  [112] = 1,
    ACTIONS(50), 1,
      sym_name,
  [116] = 1,
    ACTIONS(52), 1,
      anon_sym_EQ,
  [120] = 1,
    ACTIONS(54), 1,
      anon_sym_EQ,
  [124] = 1,
    ACTIONS(56), 1,
      sym_name,
  [128] = 1,
    ACTIONS(58), 1,
      aux_sym_item_token1,
  [132] = 1,
    ACTIONS(60), 1,
      anon_sym_EQ,
  [136] = 1,
    ACTIONS(62), 1,
      sym_item_value,
  [140] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(66), 1,
      anon_sym_EQ,
  [148] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 120,
  [SMALL_STATE(17)] = 124,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
  [SMALL_STATE(21)] = 140,
  [SMALL_STATE(22)] = 144,
  [SMALL_STATE(23)] = 148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pkgbase_repeat1, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pkgbase_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pkgbase_repeat1, 2), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkgbase, 2),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pkgbase, 2),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 2),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkg, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkg, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkg_header, 3, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pkg_header, 3, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkg_header, 4, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pkgbase_header, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_key, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pkgbase_header, 4, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_SRCINFO(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
