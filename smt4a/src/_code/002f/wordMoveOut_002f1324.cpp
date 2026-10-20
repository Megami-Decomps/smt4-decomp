#include "common.h"

extern "C" {

void mapIteratorNext2(u32 *source);

/* Moves the word out of `source` (mapIteratorNext2 then resets it) into `dest`. */
void wordMoveOut_002f1324(u32 *dest, u32 *source)
{
    u32 value = *source;

    mapIteratorNext2(source);
    *dest = value;
}

} /* extern "C" */
