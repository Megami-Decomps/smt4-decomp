/* NON_MATCHING: armcc here merges the identical "pos++; return 0" tails of the success paths and picks different registers (retail has 138 rows, 125 here). */
#include "common.h"

struct Token {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u16 value;
    /* 0x0C */ u16 value2;
};

struct TokenOut {
    /* 0x00 */ Token *token;
};

struct Parser {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ const u16 *text;
    /* 0x10 */ s32 pos;
    /* 0x14 */ s32 length;
    /* 0x18 */ s32 depth;
};

/* Reads a decimal number below 65536 at the parser position; -1 when there is none or it is too large. */
static s32 readNumber(Parser *parser)
{
    if (static_cast<u32>(parser->text[parser->pos] - '0') >= 10) {
        return -1;
    }
    s32 value = 0;
    while (parser->pos != parser->length) {
        u16 c = parser->text[parser->pos];
        if (c < '0') {
            break;
        }
        if (c > '9') {
            break;
        }
        value = value * 10 + (c - '0');
        if (value >= 65536) {
            return -1;
        }
        parser->pos++;
    }
    return value;
}

/* Lexer action for '{': a literal brace inside a group, otherwise a {min}, {min,} or {min,max} repeat. */
extern "C" s32 FUN_00434808(Parser *parser, TokenOut *out)
{
    if (parser->depth > 0) {
        out->token->kind = 0;
        out->token->value = 123;
        parser->pos++;
        return 0;
    }
    parser->pos++;
    if (parser->pos == parser->length) {
        return 3;
    }
    s32 min = readNumber(parser);
    if (min == -1 || parser->pos == parser->length) {
        return 3;
    }
    u16 c = parser->text[parser->pos];
    if (c == '}') {
        out->token->value = min;
        out->token->kind = 14;
        parser->pos++;
        return 0;
    }
    if (c != ',') {
        return 3;
    }
    parser->pos++;
    if (parser->pos == parser->length) {
        return 3;
    }
    s32 max = readNumber(parser);
    if (parser->pos == parser->length) {
        return 3;
    }
    if (max == -1) {
        if (parser->text[parser->pos] != '}') {
            return 3;
        }
        out->token->value = min;
        out->token->kind = 15;
        parser->pos++;
        return 0;
    }
    if (parser->text[parser->pos] != '}') {
        return 3;
    }
    if (min == max) {
        out->token->value = min;
        out->token->kind = 14;
    } else {
        if (min > max) {
            return 3;
        }
        out->token->value = min;
        out->token->value2 = max;
        out->token->kind = 16;
    }
    parser->pos++;
    return 0;
}
