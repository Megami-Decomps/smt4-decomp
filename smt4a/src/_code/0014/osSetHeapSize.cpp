/* NON_MATCHING: block layout and sign tests match; retail sets up the svcControlMemory arguments in another order (the shared stack constant first, then addr0, size, the stack words, addr1 and the output pointer). */
#include "shard/GlobalBlocks.h"
#include "nn/Result.h"
extern "C" {
u32 svcControlMemory(u32*, u32, u32, u32, u32, u32);

u32 osSetHeapSize(u32 size)
{
    if ((size & 0xFFF) != 0) {
        return 0xE0E01BF2;
    }
    u32 address;
    u32 currentSize = g_nnosHeapState.unk08;
    u32 status;
    if (size > currentSize) {
        status = svcControlMemory(&address, 0x08000000 + currentSize, 0,
            size - currentSize, 3, 3);
        if ((s32)(status & 0x80000000) >= 0) {
            g_nnosHeapState.unk08 = size;
        }
    } else {
        status = svcControlMemory(&address, 0x08000000 + size, 0,
            currentSize - size, 1, 0);
        if ((s32)(status & 0x80000000) >= 0) {
            g_nnosHeapState.unk08 = size;
        }
    }
    return status;
}
}
