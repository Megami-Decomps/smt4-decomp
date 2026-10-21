/* NON_MATCHING: compiler preserves r4 with lr while retail preserves only lr. */
#include "common.h"


extern "C" {
/* Updates or returns the requested state. */
f32 FUN_002b5cd4(void);
f32 FUN_0033abb4(void)
{
    f32 value = FUN_002b5cd4();
    return value < 0.0f ? -value : value;
}
}
