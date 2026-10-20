#include "common.h"

extern "C" {

void mapIteratorNext8(u32 *source);

/* Moves the word out of `source` (mapIteratorNext8 then resets it) into `dest`. */
void wordMoveOut_00300376(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext8(source);
    *dest = value;
}

} /* extern "C" */
