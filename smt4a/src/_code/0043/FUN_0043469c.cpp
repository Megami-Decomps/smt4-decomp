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
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 pos;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 depth;
};

/* Lexer action: emits kind 12 while the depth is not positive, otherwise a kind-0 token with value 42 and advances. */
extern "C" s32 FUN_0043469c(Parser *parser, TokenOut *out)
{
    Token *token = out->token;
    if (parser->depth > 0) {
        token->kind = 0;
        out->token->value = 42;
        parser->pos++;
    } else {
        token->kind = 12;
    }
    return 0;
}
