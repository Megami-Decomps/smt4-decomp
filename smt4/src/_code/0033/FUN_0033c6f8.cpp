#include "common.h"

struct TargetPoint {
    f32 x;
    f32 y;
};
struct TargetState {
    /* 0x000 */ u8 unk00[0x390];
    /* 0x390 */ u32 mode;
    /* 0x394 */ f32 scale;
    /* 0x398 */ f32 value;
    /* 0x39c */ TargetPoint point;
    /* 0x3a4 */ f32 z;
};
/* Sets the target's default mode (3), a zero scale and the offsets 4, (4, 8). */
extern "C" void FUN_0033c6f8(TargetState *target)
{
    f32 offset = 4.0f;
    f32 depth = 8.0f;
    f32 scale = 0.0f;
    target->mode = 3;
    target->value = offset;
    target->scale = scale;
    TargetPoint point;
    point.x = offset;
    point.y = depth;
    target->point = point;
}
