#include "common.h"

extern "C" {

void FUN_001396d8(u32 reserve, u32 heapSize, u32 arg2);

/* Starts the memory system with the standard reservation: forwards to FUN_001396d8, the function
 * that follows it. */
void FUN_001396c8(void)
{
    FUN_001396d8(0x3000000, 0x100000, 0x100000);
}

} /* extern "C" */
