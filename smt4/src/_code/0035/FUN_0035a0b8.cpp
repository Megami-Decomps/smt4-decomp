#include "common.h"

extern "C" {

void FUN_0035a078(u8 *out);

/* Calls FUN_0035a078 with a zeroed byte and returns what it stores there. */
u8 FUN_0035a0b8(void)
{
    u8 value = 0;

    FUN_0035a078(&value);
    return value;
}

} /* extern "C" */
