#include "common.h"

extern "C" {

void mapIteratorNext6(u32 *source);

/* Moves the word out of `source` (mapIteratorNext6 then resets it) into `dest`. */
void wordMoveOut_0012d0b4(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext6(source);
    *dest = value;
}

} /* extern "C" */
