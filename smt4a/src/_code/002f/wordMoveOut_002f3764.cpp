#include "common.h"

extern "C" {

void mapIteratorNext4(u32 *source);

/* Moves the word out of `source` (mapIteratorNext4 then resets it) into `dest`. */
void wordMoveOut_002f3764(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext4(source);
    *dest = value;
}

} /* extern "C" */
