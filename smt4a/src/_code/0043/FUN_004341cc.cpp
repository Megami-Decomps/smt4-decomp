#include "common.h"

struct Token004341cc {
    u8 unk00[8];
    u8 type;
    u8 unk09;
    u8 sub;
};

struct Lexer004341cc {
    u8 unk00[0x10];
    s32 position;
};

/* Lexer action: emits a token of type 17, subtype 3 and advances the position. */
extern "C" s32 FUN_004341cc(Lexer004341cc *lexer, Token004341cc **token)
{
    (*token)->type = 17;
    (*token)->sub = 3;
    lexer->position++;
    return 0;
}
