#include "common.h"

extern "C" {

void FUN_002fe35c(u32 *source);

/* Moves the word out of `source` (FUN_002fe35c then resets it) into `dest`. */
void wordMoveOut_0012d0b4(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002fe35c(source);
    *dest = value;
}

} /* extern "C" */
