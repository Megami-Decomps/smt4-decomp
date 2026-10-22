#include "common.h"

namespace {
struct ResourceAllocationEntry {
    /* 0x00 */ void *data;
    /* 0x04 */ u8 unk04[0xC];
};
struct ResourceAllocationOwner {
    /* 0x000 */ u8 unk000[0x454];
    /* 0x454 */ ResourceAllocationEntry *entries;
    /* 0x458 */ void *allocation;
    /* 0x45C */ u32 unk45C;
};
}
extern "C" {
void asdOperatorDeleteB(void *memory);
void asdMemFree(void *memory);
s32 aocCountPackageItemsOfType(ResourceAllocationOwner *owner, u32 kind);

/* Releases the auxiliary allocation and every populated entry, then clears the table owner. */
void FUN_00471748(ResourceAllocationOwner *owner)
{
    if (owner->allocation != NULL) {
        asdOperatorDeleteB(owner->allocation);
        owner->allocation = NULL;
    }
    if (owner->entries != NULL) {
        s32 count = aocCountPackageItemsOfType(owner, 0x37);
        for (s32 i = 0; i < count; ++i) {
            if (owner->entries[i].data != NULL) {
                asdMemFree(owner->entries[i].data);
                owner->entries[i].data = NULL;
            }
        }
        if (owner->entries != NULL) {
            asdOperatorDeleteB(owner->entries);
            owner->entries = NULL;
        }
    }
    owner->unk45C = 0;
}
}
