#include "common.h"

extern "C" {

void FUN_002f3734(u32 *source);

/* Moves the word out of `source` (FUN_002f3734 then resets it) into `dest`. */
void wordMoveOut_002f3724(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002f3734(source);
    *dest = value;
}

} /* extern "C" */
