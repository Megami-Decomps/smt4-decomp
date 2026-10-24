#include "common.h"

struct Token00434a30 {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    union {
        u8 narrow;
        u16 wide;
    } sub;
};

struct Lexer00434a30 {
    u8 unk00[0x10];
    s32 position;
    u8 unk14[4];
    s32 flag;
};

/* Lexer action: emits a type-0 token (subtype 94) when the flag is set, else a type-17 token; advances the position. */
extern "C" s32 FUN_00434a30(Lexer00434a30 *lexer, Token00434a30 **token)
{
    if (lexer->flag > 0) {
        (*token)->type = 0;
        (*token)->sub.wide = 94;
    } else {
        (*token)->type = 17;
        (*token)->sub.narrow = 0;
    }
    lexer->position++;
    return 0;
}
