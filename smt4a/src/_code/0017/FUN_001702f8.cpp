#include "common.h"

extern "C" {

u32 FUN_001702fc(u32 value, u32 index);

/* Forwards to FUN_001702fc, the function that follows it. */
u32 FUN_001702f8(u32 value, u32 index)
{
    return FUN_001702fc(value, index);
}

} /* extern "C" */
