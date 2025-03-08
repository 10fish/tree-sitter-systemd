/* Automatically generated by tree-sitter v0.25.3 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 1
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_Unit = 3,
  anon_sym_Install = 4,
  sym_service_section = 5,
  sym_mount_section = 6,
  sym_automount_section = 7,
  sym_socket_section = 8,
  sym_timer_section = 9,
  sym_path_section = 10,
  sym_slice_section = 11,
  sym_swap_section = 12,
  sym_scope_section = 13,
  anon_sym_EQ = 14,
  sym_key = 15,
  aux_sym_value_token1 = 16,
  anon_sym_POUND = 17,
  sym_blank_line = 18,
  sym_source_file = 19,
  sym_section = 20,
  sym__definition = 21,
  sym_section_header = 22,
  sym_section_name = 23,
  sym_common_section = 24,
  sym_directive = 25,
  sym_value = 26,
  sym_comment = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_section_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_Unit] = "Unit",
  [anon_sym_Install] = "Install",
  [sym_service_section] = "service_section",
  [sym_mount_section] = "mount_section",
  [sym_automount_section] = "automount_section",
  [sym_socket_section] = "socket_section",
  [sym_timer_section] = "timer_section",
  [sym_path_section] = "path_section",
  [sym_slice_section] = "slice_section",
  [sym_swap_section] = "swap_section",
  [sym_scope_section] = "scope_section",
  [anon_sym_EQ] = "=",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_POUND] = "#",
  [sym_blank_line] = "blank_line",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym__definition] = "_definition",
  [sym_section_header] = "section_header",
  [sym_section_name] = "section_name",
  [sym_common_section] = "common_section",
  [sym_directive] = "directive",
  [sym_value] = "value",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_Unit] = anon_sym_Unit,
  [anon_sym_Install] = anon_sym_Install,
  [sym_service_section] = sym_service_section,
  [sym_mount_section] = sym_mount_section,
  [sym_automount_section] = sym_automount_section,
  [sym_socket_section] = sym_socket_section,
  [sym_timer_section] = sym_timer_section,
  [sym_path_section] = sym_path_section,
  [sym_slice_section] = sym_slice_section,
  [sym_swap_section] = sym_swap_section,
  [sym_scope_section] = sym_scope_section,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_key] = sym_key,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_blank_line] = sym_blank_line,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym__definition] = sym__definition,
  [sym_section_header] = sym_section_header,
  [sym_section_name] = sym_section_name,
  [sym_common_section] = sym_common_section,
  [sym_directive] = sym_directive,
  [sym_value] = sym_value,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Install] = {
    .visible = true,
    .named = false,
  },
  [sym_service_section] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_section] = {
    .visible = true,
    .named = true,
  },
  [sym_automount_section] = {
    .visible = true,
    .named = true,
  },
  [sym_socket_section] = {
    .visible = true,
    .named = true,
  },
  [sym_timer_section] = {
    .visible = true,
    .named = true,
  },
  [sym_path_section] = {
    .visible = true,
    .named = true,
  },
  [sym_slice_section] = {
    .visible = true,
    .named = true,
  },
  [sym_swap_section] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_section] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_common_section] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '#', 124,
        '=', 74,
        'A', 117,
        'I', 97,
        'M', 102,
        'P', 76,
        'S', 79,
        'T', 88,
        'U', 98,
        '[', 50,
        ']', 51,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(3);
      if (lookahead == 'S') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'w') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '[') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_Install);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Install);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_service_section);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_service_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_mount_section);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_mount_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_automount_section);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_automount_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_socket_section);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_socket_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_timer_section);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_timer_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_path_section);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_path_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_slice_section);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_slice_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_swap_section);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_swap_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_scope_section);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_scope_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'c') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'c') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'c') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'h') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'k') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'm') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'm') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'v') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_blank_line);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 122},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 122},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [anon_sym_Install] = ACTIONS(1),
    [sym_service_section] = ACTIONS(1),
    [sym_mount_section] = ACTIONS(1),
    [sym_automount_section] = ACTIONS(1),
    [sym_socket_section] = ACTIONS(1),
    [sym_timer_section] = ACTIONS(1),
    [sym_path_section] = ACTIONS(1),
    [sym_slice_section] = ACTIONS(1),
    [sym_swap_section] = ACTIONS(1),
    [sym_scope_section] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(13),
    [sym_section] = STATE(6),
    [sym_section_header] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(15), 1,
      sym_common_section,
    STATE(16), 1,
      sym_section_name,
    ACTIONS(7), 2,
      anon_sym_Unit,
      anon_sym_Install,
    ACTIONS(9), 9,
      sym_service_section,
      sym_mount_section,
      sym_automount_section,
      sym_socket_section,
      sym_timer_section,
      sym_path_section,
      sym_slice_section,
      sym_swap_section,
      sym_scope_section,
  [22] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_blank_line,
    STATE(4), 4,
      sym__definition,
      sym_directive,
      sym_comment,
      aux_sym_section_repeat1,
  [44] = 6,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_blank_line,
    STATE(5), 4,
      sym__definition,
      sym_directive,
      sym_comment,
      aux_sym_section_repeat1,
  [66] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_key,
    ACTIONS(34), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      sym_blank_line,
    STATE(5), 4,
      sym__definition,
      sym_directive,
      sym_comment,
      aux_sym_section_repeat1,
  [88] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_section_header,
    STATE(7), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [102] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_section_header,
    STATE(7), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [116] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_blank_line,
    ACTIONS(49), 3,
      anon_sym_LBRACK,
      sym_key,
      anon_sym_POUND,
  [126] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_blank_line,
    ACTIONS(53), 3,
      anon_sym_LBRACK,
      sym_key,
      anon_sym_POUND,
  [136] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_blank_line,
    ACTIONS(57), 3,
      anon_sym_LBRACK,
      sym_key,
      anon_sym_POUND,
  [146] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_blank_line,
    ACTIONS(61), 3,
      anon_sym_LBRACK,
      sym_key,
      anon_sym_POUND,
  [156] = 2,
    ACTIONS(63), 1,
      aux_sym_value_token1,
    STATE(11), 1,
      sym_value,
  [163] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [167] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [171] = 1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
  [175] = 1,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
  [179] = 1,
    ACTIONS(73), 1,
      anon_sym_EQ,
  [183] = 1,
    ACTIONS(75), 1,
      aux_sym_value_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 179,
  [SMALL_STATE(18)] = 183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_section, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_systemd(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
    .name = "systemd",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 0,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
