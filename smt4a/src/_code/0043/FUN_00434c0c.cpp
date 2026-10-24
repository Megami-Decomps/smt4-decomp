#include "common.h"

struct Token434c0c {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    union {
        u8 narrow;
        u16 wide;
    } sub;
};

struct Lexer434c0c {
    u8 unk00[0x10];
    s32 position;
    u8 unk14[4];
    s32 flag;
};

/* Lexer action: emits a type-0 token (subtype 41) when the flag is set, else a type-10 token; advances the position. */
extern "C" s32 FUN_00434c0c(Lexer434c0c *lexer, Token434c0c **token)
{
    if (lexer->flag > 0) {
        (*token)->type = 0;
        (*token)->sub.wide = 41;
    } else {
        (*token)->type = 10;
    }
    lexer->position++;
    return 0;
}
