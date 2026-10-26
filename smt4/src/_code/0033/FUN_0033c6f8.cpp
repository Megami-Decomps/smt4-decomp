/* NON_MATCHING: the point pair is stored with one vstmia as in retail; retail schedules the value/scale constants differently (4.0f first, 8.0f after the mode store). */
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
/* Sets the target's default mode and three parameters. */
extern "C" void FUN_0033c6f8(TargetState *target)
{
    target->value = 4.0f;
    target->scale = 8.0f;
    target->mode = 3;
    TargetPoint point;
    point.x = 4.0f;
    point.y = 0.0f;
    target->point = point;
}
