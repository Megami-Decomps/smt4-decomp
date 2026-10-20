/* NON_MATCHING: retail loads the first field with a write-back (ldr r7, [r0, #48]!) and the second at [r0, #4]; here both use plain offsets from the owner. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} Entry;

typedef struct EntryBlock {
    /* 0x00 */ Entry *entries;
} EntryBlock;

typedef struct Info {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
} Info;

typedef struct Resources {
    /* 0x00 */ EntryBlock *block;
    /* 0x04 */ Info *info;
} Resources;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ Resources resources;
} Owner;

int FUN_002570a8(u32 id);
int asdMemFree(void *block);

/* Releases every entry of the owner's entry block (count from its info) and frees the block. */
void FUN_00327ed4(Owner *owner)
{
    Resources *resources = &owner->resources;
    EntryBlock *block = resources->block;
    Entry *entry = block->entries;
    u32 count = resources->info->count;
    u32 i;

    for (i = 0; i < count; i++) {
        FUN_002570a8(entry->id);
        entry++;
    }
    asdMemFree(block);
}

} /* extern "C" */
