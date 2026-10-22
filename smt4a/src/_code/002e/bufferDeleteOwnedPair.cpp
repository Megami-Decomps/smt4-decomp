#include "common.h"

extern "C" {
void bufferReleaseOwnedPair(void *buffer);
void *bufferDestroyOwnedPair(void *buffer);
void asdOperatorDelete(void *buffer);
}

/* Release both owned buffers before deleting their enclosing allocation. */
extern "C" void bufferDeleteOwnedPair(void *buffer)
{
    if (buffer != NULL) {
        bufferReleaseOwnedPair(buffer);
        asdOperatorDelete(bufferDestroyOwnedPair(buffer));
    }
}
