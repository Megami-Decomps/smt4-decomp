/* NON_MATCHING: same statements; retail stores the vtable pointer before it loads the buffer pointer, the scheduler loads it first here. */
#include "classes/Obj422214.h"

extern "C" {
int bufferPairFree(void *buffers);
int asdMemFree(void *block);
}

/* Frees the buffer pair and the heap block holding it. */
Obj422214::~Obj422214()
{
    if (buffers != NULL) {
        bufferPairFree(buffers);
        asdMemFree(buffers);
        buffers = NULL;
    }
}
