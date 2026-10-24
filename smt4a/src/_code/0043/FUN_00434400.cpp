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
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ const u16 *text;
    /* 0x10 */ s32 pos;
    /* 0x14 */ s32 length;
    /* 0x18 */ s32 depth;
};

extern "C" s32 FUN_00434400(Parser *parser, TokenOut *out)
{
    out->token->kind = 7;
    out->token->value8 = 1;
    parser->pos++;
    return 0;
}
