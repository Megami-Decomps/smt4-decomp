#include "common.h"

extern "C" {

void FUN_002f6d1c(u32 *source);

/* Moves the word out of `source` (FUN_002f6d1c then resets it) into `dest`. */
void wordMoveOut_002f6d7c(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002f6d1c(source);
    *dest = value;
}

} /* extern "C" */
