#include "common.h"

extern "C" {

void FUN_00431230(u8 *out);

/* Calls FUN_00431230 with a zeroed byte and returns what it stores there. */
u8 FUN_00431270(void)
{
    u8 value = 0;

    FUN_00431230(&value);
    return value;
}

} /* extern "C" */
