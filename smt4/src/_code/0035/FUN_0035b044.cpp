#include "common.h"

struct Token00433cf8 {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    union {
        u8 narrow;
        u16 wide;
    } sub;
};

struct Lexer00433cf8 {
    u8 unk00[0x10];
    s32 position;
    u8 unk14[4];
    s32 flag;
};

/* Lexer action: emits a type-0 token (subtype 46) when the flag is set, else a type-7 token; advances the position. */
extern "C" s32 FUN_0035b044(Lexer00433cf8 *lexer, Token00433cf8 **token)
{
    if (lexer->flag > 0) {
        (*token)->type = 0;
        (*token)->sub.wide = 46;
    } else {
        (*token)->type = 7;
        (*token)->sub.narrow = 0;
    }
    lexer->position++;
    return 0;
}
