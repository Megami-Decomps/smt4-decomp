/* NON_MATCHING: only the selection of the found/free entry differs (retail materialises it with `mov r0,#0; movne r0,rX` on each exit path and keeps the free entry in ip) */
#include "common.h"

struct CacheEntry {
    u32 key;    // 0x00
    u32 value;  // 0x04
};

struct CacheRecord {
    u8 unk00[0x10];    // 0x00
    CacheEntry entry;  // 0x10
    u8 unk18[0x10];    // 0x18
};

struct SaveBlockView {
    u8 unk00[0x29500];    // 0x00000
    CacheRecord slots[16]; // 0x29500
};

struct DataBlocks {
    u8 unk00[4];
    SaveBlockView *save;
};

extern "C" {

extern DataBlocks g_gameDataBlocks;

/* Looks up the cached value for `key` in the 16-record table; an unused record is picked when the key is absent. */
u32 FUN_001f4da0(u32 key)
{
    CacheEntry *freeEntry = NULL;
    CacheEntry *found = NULL;
    CacheRecord *slots = g_gameDataBlocks.save->slots;

    for (s32 i = 0; i < 16; i++) {
        CacheEntry *entry = &slots[i].entry;

        if (entry->key == 0 && freeEntry == NULL) {
            freeEntry = entry;
        }
        if (entry->key == key) {
            found = entry;
            break;
        }
    }
    CacheEntry *selected = found != NULL ? found : freeEntry;

    return selected->key != 0 ? selected->value : 0;
}

} /* extern "C" */
