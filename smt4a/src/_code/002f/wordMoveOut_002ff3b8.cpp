#include "common.h"

extern "C" {

void mapIteratorNext7(u32 *source);

/* Moves the word out of `source` (mapIteratorNext7 then resets it) into `dest`. */
void wordMoveOut_002ff3b8(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext7(source);
    *dest = value;
}

} /* extern "C" */
