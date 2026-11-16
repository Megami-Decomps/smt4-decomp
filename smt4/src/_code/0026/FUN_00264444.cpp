#include "map/lmapMain.h"

class LmapOwnedEntry {
public:
    virtual ~LmapOwnedEntry();
    s32 category; // 0x04
};

struct LmapEntryPool {
    u8 unk00[0x10];
    u32 count;            // 0x10
    u32 categoryZeroCount; // 0x14
    LmapOwnedEntry *entries[32]; // 0x18
};

/* Removes one entry of the category from the pool's counts. */
static __inline void lmapEntryPoolUncount(LmapEntryPool *pool, s32 category)
{
    if (category == 0)
        --pool->categoryZeroCount;
    --pool->count;
}

/* Deletes every entry the pool owns and clears its slots. */
extern "C" void FUN_00264444(LmapObj *object)
{
    LmapEntryPool *pool = reinterpret_cast<LmapEntryPool *>(object);
    for (s32 index = 0; index < 32; ++index) {
        LmapOwnedEntry *entry = pool->entries[index];
        if (entry != NULL) {
            s32 category = entry->category;
            delete entry;
            pool->entries[index] = NULL;
            lmapEntryPoolUncount(pool, category);
        }
    }
}
