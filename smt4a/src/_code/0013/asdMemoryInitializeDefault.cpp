#include "common.h"

extern "C" {

void asdMemoryInitializeHeaps(u32 reserve, u32 heapSize, u32 arg2);

/* Starts the memory system with the standard reservation: forwards to asdMemoryInitializeHeaps, the function
 * that follows it. */
void asdMemoryInitializeDefault(void)
{
    asdMemoryInitializeHeaps(0x3000000, 0x100000, 0x100000);
}

} /* extern "C" */
