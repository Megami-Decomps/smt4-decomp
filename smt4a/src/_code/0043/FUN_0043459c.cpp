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

/* Lexer action: emits a token of kind 0, value 9 and advances the position. */
extern "C" s32 FUN_0043459c(Parser *parser, TokenOut *out)
{
    out->token->kind = 0;
    out->token->value16 = 9;
    parser->pos++;
    return 0;
}
