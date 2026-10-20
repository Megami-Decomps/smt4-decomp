#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_004099b8[]; /* AsdGxCommandList.cpp: __FILE__ */
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates a 16-byte block from the main heap. */
void *FUN_0010df48(void)
{
    asdDebugTrace(DAT_004099b8, 295);
    return asdMemAlloc(0x100, 0x100, 0, 0x10, 1);
}

} /* extern "C" */
