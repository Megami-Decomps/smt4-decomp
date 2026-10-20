#include "common.h"

extern "C" {

void FUN_0030c558(u32 *source);

/* Moves the word out of `source` (FUN_0030c558 then resets it) into `dest`. */
void wordMoveOut_00300376(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_0030c558(source);
    *dest = value;
}

} /* extern "C" */
