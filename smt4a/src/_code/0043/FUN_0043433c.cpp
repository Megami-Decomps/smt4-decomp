#include "common.h"

struct Token0043433c {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    u16 sub;
};

struct Lexer0043433c {
    u8 unk00[0x10];
    s32 position;
};

/* Lexer action: emits a token of type 0, subtype 7 and advances the position. */
extern "C" s32 FUN_0043433c(Lexer0043433c *lexer, Token0043433c **token)
{
    (*token)->type = 0;
    (*token)->sub = 7;
    lexer->position++;
    return 0;
}
