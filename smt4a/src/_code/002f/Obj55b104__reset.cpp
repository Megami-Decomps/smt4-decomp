/* NON_MATCHING: native iterator results are integrated; cursor-address and frame allocation differ. */
#include "classes/Obj55b104.h"

/* Resets both cursors to the configured initial position. */
void Obj55b104::reset()
{
    if (offset != 0) {
        readCursor = writeCursor = begin + offset;
    } else {
        readCursor = writeCursor = begin;
    }
}
