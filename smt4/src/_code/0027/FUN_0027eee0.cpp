/* NON_MATCHING: compiler preserves r4 with lr while retail preserves only lr. */
#include "common.h"


extern "C" {
/* Updates or returns the requested state. */
f32 mathGetShortestAngleDelta(void);
f32 FUN_0027eee0(void)
{
    f32 value = mathGetShortestAngleDelta();
    return value < 0.0f ? -value : value;
}
}
