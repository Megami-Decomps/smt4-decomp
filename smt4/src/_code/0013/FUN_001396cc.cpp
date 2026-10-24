#include "shard/S2SharedMemoryBlock.h"
#include "nn/Result.h"
#include "nn/svc.h"

extern "C" {

extern u8 g_nnosAddressSpaceManagerHeap;
extern u32 nn_os_AddressSpaceManager_Allocate(u8 *heap, SharedMemoryBlock *block, u32 size, u32 alignment);

/* Reserves address space for the block and maps its handle there (size must be page aligned). */
u32 FUN_001396cc(SharedMemoryBlock *block, u32 size, u32 readOnly)
{
    u32 address;
    s32 result;

    if (block->attachedAddress != 0) {
        return 0x08a01bf9;
    }
    if ((size & 0xfff) != 0) {
        return 0xe0e01bf2;
    }
    address = nn_os_AddressSpaceManager_Allocate(&g_nnosAddressSpaceManagerHeap, block, size, 0x1000);
    if (address == 0) {
        return 0xd8601837;
    }
    block->readOnly = readOnly;
    result = nn::svc::MapMemoryBlock(block->handle, address, readOnly ? 1 : 3, 0x10000000);
    if (!nnResultIsFailure(result)) {
        block->isMapped = 1;
    }
    return result;
}

} /* extern "C" */
