#include "common.h"

extern "C" {

void mapIteratorNext3(u32 *source);

/* Moves the word out of `source` (mapIteratorNext3 then resets it) into `dest`. */
void wordMoveOut_002f3724(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext3(source);
    *dest = value;
}

} /* extern "C" */
