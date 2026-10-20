/* NON_MATCHING: retail issues svc 0x1f (MapMemoryBlock) inline; built calls the placeholder nn_svc_MapMemoryBlock instead (and tests the sign bit with tst, retail lsrs). */
#include "shard/S2SharedMemoryBlock.h"

extern "C" {

extern u8 g_nnosAddressSpaceManagerHeap;
extern u32 FUN_001a0af4(u8 *heap, SharedMemoryBlock *block, u32 size, u32 alignment);
extern u32 nn_svc_MapMemoryBlock(s32 handle, u32 address, u32 myPermission, u32 otherPermission);

/* Reserves address space for the block and maps its handle there (size must be page aligned). */
u32 FUN_00188ba4(SharedMemoryBlock *block, u32 size, u32 readOnly)
{
    u32 address;
    u32 result;

    if (block->attachedAddress != 0) {
        return 0x08a01bf9;
    }
    if ((size & 0xfff) != 0) {
        return 0xe0e01bf2;
    }
    address = FUN_001a0af4(&g_nnosAddressSpaceManagerHeap, block, size, 0x1000);
    if (address == 0) {
        return 0xd8601837;
    }
    block->readOnly = readOnly;
    result = nn_svc_MapMemoryBlock(block->handle, address, readOnly ? 1 : 3, 0x10000000);
    if ((result & 0x80000000) == 0) {
        block->isMapped = 1;
    }
    return result;
}

} /* extern "C" */
