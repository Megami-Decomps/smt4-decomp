#include "common.h"

extern "C" {

void FUN_0030f66c(u32 *source);

/* Moves the word out of `source` (FUN_0030f66c then resets it) into `dest`. */
void wordMoveOut_0030f836(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_0030f66c(source);
    *dest = value;
}

} /* extern "C" */
