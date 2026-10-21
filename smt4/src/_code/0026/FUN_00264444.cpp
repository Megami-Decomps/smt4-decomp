/* NON_MATCHING: counter decrements reuse r0 rather than retail's separate r1 subtraction results; the remaining instructions match. */
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

extern "C" void FUN_00264444(LmapObj *object)
{
    LmapEntryPool *pool = reinterpret_cast<LmapEntryPool *>(object);
    for (s32 index = 0; index < 32; ++index) {
        LmapOwnedEntry *entry = pool->entries[index];
        if (entry != NULL) {
            s32 category = entry->category;
            delete entry;
            pool->entries[index] = NULL;
            if (category == 0)
                --pool->categoryZeroCount;
            --pool->count;
        }
    }
}
