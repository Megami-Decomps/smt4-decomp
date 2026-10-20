#include "common.h"

extern "C" {

void FUN_002f6eda(u32 value);

/* Calls FUN_002f6eda with the value `*valueRef` (the first argument is unused). */
void FUN_0010cff8(u32 unused, u32 *valueRef)
{
    FUN_002f6eda(*valueRef);
}

} /* extern "C" */
