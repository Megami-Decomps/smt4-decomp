#include "common.h"

struct TargetState {
    /* 0x000 */ u8 unk00[0x390];
    /* 0x390 */ u32 active;
    /* 0x394 */ f32 scale;
    /* 0x398 */ f32 x;
    /* 0x39c */ f32 y;
    /* 0x3a0 */ f32 z;
};
/* Resets the target's position and scale. */
extern "C" void FUN_0033c6d4(TargetState *target)
{
    target->active = 0;
    target->x = 0.0f;
    target->y = 0.0f;
    target->z = 0.0f;
    target->scale = 0.0f;
}
