#ifndef SMT4A_ASDSDK_ASDVRAMBLOCKLISTINSERT_H
#define SMT4A_ASDSDK_ASDVRAMBLOCKLISTINSERT_H

#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* Inserts a run into a list sorted by address. Apocalypse's lists use AsdVramBlockListA; IV's
 * function of the same name takes AsdVramBlockList, so the declaration is per game. */
extern "C" void asdVramBlockListInsert(AsdVramBlockListA *list, AsdVramBlockA *block);

/* Takes a free descriptor from the g_asdMemory.table pool: clears it, stores its 1-based slot and
 * counts it; NULL when the pool is missing or full (asdVramHeapAlloc, the heap initialiser). */
static __inline AsdVramBlockA *takeBlockDescriptor(AsdMemTable *table)
{
    if (table != NULL && table->entries != NULL) {
        AsdVramBlockA *entries = static_cast<AsdVramBlockA *>(table->entries);
        for (s32 i = 0; i < 512; ++i) {
            AsdVramBlockA *block = &entries[i];
            if (block->poolId == 0) {
                block->addr = 0;
                block->size = 0;
                block->poolId = i + 1;
                block->prev = NULL;
                block->next = NULL;
                ++table->count;
                return block;
            }
        }
    }
    return NULL;
}

#endif
