#include "common.h"

extern "C" {
void asdMemFree(void *memory);

/* Releases the allocation passed as the callback's final argument. */
void asdMemoryFreeCallback(void *context, u32 event, u32 value, void *memory)
{
    asdMemFree(memory);
}
}
