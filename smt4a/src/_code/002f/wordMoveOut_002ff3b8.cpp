#include "common.h"

extern "C" {

void FUN_002ff3c8(u32 *source);

/* Moves the word out of `source` (FUN_002ff3c8 then resets it) into `dest`. */
void wordMoveOut_002ff3b8(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002ff3c8(source);
    *dest = value;
}

} /* extern "C" */
