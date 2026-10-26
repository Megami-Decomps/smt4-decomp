#include "common.h"

struct Token {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    union {
        /* 0x0A */ u8 value8;
        /* 0x0A */ u16 value16;
    };
};

struct TokenOut {
    /* 0x00 */ Token *token;
};

struct Parser {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 pos;
};

/* Lexer action: emits a token of kind 8, value 3 and advances the position. */
extern "C" s32 FUN_0035b630(Parser *parser, TokenOut *out)
{
    out->token->kind = 8;
    out->token->value8 = 3;
    parser->pos++;
    return 0;
}
