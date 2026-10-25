#include "common.h"

extern "C" {
void objectFreeBuffer(void);

/* Wrapper: its tail call to the next function was NOPed by the linker. */
void soundFreeBufferStub(void)
{
    objectFreeBuffer();
}

} /* extern "C" */
