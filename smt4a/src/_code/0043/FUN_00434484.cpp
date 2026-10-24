#include "common.h"

struct Token00434484 {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    u16 sub;
};

struct Lexer00434484 {
    u8 unk00[0x10];
    s32 position;
};

/* Lexer action: emits a token of type 0, subtype 10 and advances the position. */
extern "C" s32 FUN_00434484(Lexer00434484 *lexer, Token00434484 **token)
{
    (*token)->type = 0;
    (*token)->sub = 10;
    lexer->position++;
    return 0;
}
