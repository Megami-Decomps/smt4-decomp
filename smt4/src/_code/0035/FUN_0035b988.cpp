#include "common.h"

struct Token0043463c {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    u8 sub;
};

struct Lexer0043463c {
    u8 unk00[0x10];
    s32 position;
};

/* Lexer action: emits a token of type 17, subtype 5 and advances the position. */
extern "C" s32 FUN_0035b988(Lexer0043463c *lexer, Token0043463c **token)
{
    (*token)->type = 17;
    (*token)->sub = 5;
    lexer->position++;
    return 0;
}
