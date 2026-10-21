#include "shard/W5_W5Match2_ScalarArguments.h"
extern "C" {
/* Convert signed coordinates to a floating-point position. */
void pointConvertToFloat(FloatPoint *point,s32 x,s32 y) { point->x=(f32)x; point->y=(f32)y; }
}
