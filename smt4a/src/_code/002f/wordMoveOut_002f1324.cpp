#include "common.h"

extern "C" {

void FUN_002efd60(u32 *source);

/* Moves the word out of `source` (FUN_002efd60 then resets it) into `dest`. */
void wordMoveOut_002f1324(u32 *dest, u32 *source)
{
    u32 value = *source;

    FUN_002efd60(source);
    *dest = value;
}

} /* extern "C" */
