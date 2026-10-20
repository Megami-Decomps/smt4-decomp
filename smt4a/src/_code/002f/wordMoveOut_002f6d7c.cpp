#include "common.h"

extern "C" {

void mapIteratorNext5(u32 *source);

/* Moves the word out of `source` (mapIteratorNext5 then resets it) into `dest`. */
void wordMoveOut_002f6d7c(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext5(source);
    *dest = value;
}

} /* extern "C" */
