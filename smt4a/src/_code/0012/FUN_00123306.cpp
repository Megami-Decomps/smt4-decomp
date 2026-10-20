#include "common.h"

extern "C" {

void FUN_002f32f8(u32 object, u32 value);
u32 FUN_002fbb86(u32 value);

/* Converts `value` with FUN_002fbb86 and passes it to FUN_002f32f8. */
void FUN_00123306(u32 object, u32 value)
{
    FUN_002f32f8(object, FUN_002fbb86(value));
}

} /* extern "C" */
