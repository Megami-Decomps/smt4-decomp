#include "common.h"

extern "C" {

extern u8 g_nnosAddressSpaceManager;
extern void nn_os_AddressSpaceManager_Free(u8 *manager, void *address);

typedef struct Block {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ int unk8;
} Block;

void FUN_00357488(Block *block)
{
    if (block->unk8 != 0) {
        nn_os_AddressSpaceManager_Free(&g_nnosAddressSpaceManager, block);
        return;
    }
}

} /* extern "C" */
