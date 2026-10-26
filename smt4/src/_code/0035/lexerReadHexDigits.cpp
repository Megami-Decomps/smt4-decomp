#include "common.h"

struct Token {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u16 value;
};

struct TokenOut {
    /* 0x00 */ Token *token;
};

struct Parser {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ const u16 *text;
    /* 0x10 */ s32 pos;
    /* 0x14 */ s32 length;
};

/* Lexer action: reads `count` hexadecimal digits into a kind-0 token; returns 6 when the text ends or a digit is invalid. */
extern "C" s32 lexerReadHexDigits(Parser *parser, TokenOut *out, s32 count)
{
    out->token->kind = 0;
    out->token->value = 0;
    for (s32 i = 0; i < count; i++) {
        out->token->value <<= 4;
        if (parser->pos == parser->length) {
            return 6;
        }
        u16 c = parser->text[parser->pos];
        if (c >= '0' && c <= '9') {
            out->token->value |= c - '0';
        } else if (c >= 'a' && c <= 'f') {
            out->token->value |= c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            out->token->value |= c - 'A' + 10;
        } else {
            return 6;
        }
        parser->pos++;
    }
    return 0;
}
