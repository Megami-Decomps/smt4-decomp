#include "common.h"

extern "C" {

void FUN_002ede22(u32 *source);

/* Moves the word out of `source` (FUN_002ede22 then resets it) into `dest`. */
void wordMoveOut_002edb7c(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002ede22(source);
    *dest = value;
}

} /* extern "C" */
