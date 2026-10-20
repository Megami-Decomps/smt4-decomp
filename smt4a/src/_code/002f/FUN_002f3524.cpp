#include "common.h"

extern "C" {

void FUN_00123860(u32 value, u8 *buffer);

/* Calls FUN_00123860 with a 260-byte scratch buffer. */
void FUN_002f3524(u32 value)
{
    u8 buffer[260];

    FUN_00123860(value, buffer);
}

} /* extern "C" */
