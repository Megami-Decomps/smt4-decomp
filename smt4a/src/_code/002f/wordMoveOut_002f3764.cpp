#include "common.h"

extern "C" {

void FUN_002f39fa(u32 *source);

/* Moves the word out of `source` (FUN_002f39fa then resets it) into `dest`. */
void wordMoveOut_002f3764(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002f39fa(source);
    *dest = value;
}

} /* extern "C" */
