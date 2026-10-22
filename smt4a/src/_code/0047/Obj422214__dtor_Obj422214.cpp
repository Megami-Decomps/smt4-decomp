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
