/* NON_MATCHING: the constant 0 for the allocator's last argument is loaded before the block pointer instead of after the size. */
#include "common.h"

extern "C" {

typedef struct AddressBlock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 mapped;
} AddressBlock;

extern s8 g_nnosAddressSpaceInitialized;
extern u8 g_nnosAddressSpaceManager;

void FUN_002c526c(u32 error);
u32 nn_os_AddressSpaceManager_Allocate(void *manager, AddressBlock *block, u32 size, u32 align);

/* Clears an address-space block and, when address-space management is on, allocates `size` bytes (page-aligned) for it. */
void addressBlockInit(AddressBlock *block, u32 size)
{
    if (block == NULL) {
        return;
    }
    block->unk00 = 0;
    block->unk04 = 0;
    block->unk08 = 0;
    block->unk0C = 0;
    block->mapped = 0;
    if (g_nnosAddressSpaceInitialized != 0) {
        if (nn_os_AddressSpaceManager_Allocate(&g_nnosAddressSpaceManager, block, (size + 0xfff) & 0xfffff000, 0) == 0) {
            FUN_002c526c(0xd8601837);
        }
        block->mapped = 0;
    }
}

} /* extern "C" */
