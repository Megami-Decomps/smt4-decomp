/* NON_MATCHING: the load of `buffers` is scheduled before the vtable store (retail stores first, in r0, then loads through r4) */
#include "classes/Obj422214.h"

extern "C" {
void bufferPairFree(void *buffers);
void asdMemFree(void *block);
}

/* Frees the buffer pair and the block holding it. */
Obj422214::~Obj422214()
{
    if (buffers != NULL) {
        bufferPairFree(buffers);
        asdMemFree(buffers);
        buffers = NULL;
    }
}
