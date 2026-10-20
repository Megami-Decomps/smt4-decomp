#include "common.h"

extern "C" {

void mapIteratorNext(u32 *source);

/* Moves the word out of `source` (mapIteratorNext then resets it) into `dest`. */
void wordMoveOut_002edb7c(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext(source);
    *dest = value;
}

} /* extern "C" */
