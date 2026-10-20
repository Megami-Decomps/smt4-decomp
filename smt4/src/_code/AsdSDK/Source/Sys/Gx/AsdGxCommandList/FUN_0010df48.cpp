/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the allocation. */
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates a 16-byte block from the main heap. */
void *FUN_0010df48(void)
{
    return asdMemAlloc(0x100, 0x100, 0, 0x10, 1);
}

} /* extern "C" */
