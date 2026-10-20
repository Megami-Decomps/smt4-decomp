#include "common.h"

extern "C" {

void mapIteratorNext9(u32 *source);

/* Moves the word out of `source` (mapIteratorNext9 then resets it) into `dest`. */
void wordMoveOut_0030f836(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext9(source);
    *dest = value;
}

} /* extern "C" */
