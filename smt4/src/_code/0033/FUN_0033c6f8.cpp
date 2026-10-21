/* NON_MATCHING: retail address formation or grouped state stores differ. */
#include "common.h"

struct TargetState {
    /* 0x000 */ u8 unk00[0x390];
    /* 0x390 */ u32 mode;
    /* 0x394 */ f32 scale;
    /* 0x398 */ f32 value;
    /* 0x39c */ f32 x;
    /* 0x3a0 */ f32 y;
    /* 0x3a4 */ f32 z;
};
/* Sets the target's default mode and three parameters. */
extern "C" void FUN_0033c6f8(TargetState *target)
{
    target->value = 4.0f;
    target->scale = 8.0f;
    target->mode = 3;
    target->x = 4.0f;
    target->y = 0.0f;
}
