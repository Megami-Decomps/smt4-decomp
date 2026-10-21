/* NON_MATCHING: owner/index use r5/r4 instead of retail r4/r5, and SUBS folds the initial compare/copy; fdiff also classifies retail's final POP as data. */
#include "common.h"

struct IndexedValues {
    u32 unk00;
    void **begin; // 0x04
    void **end;   // 0x08
    void **limit;
    u32 count;  // 0x10

    u32 size() const
    {
        return end - begin;
    }
};

extern "C" void FUN_002e32a4(s32 kind, ...);

extern "C" void *FUN_0040619c(const IndexedValues *owner, u32 index)
{
    if ((s32)index < 0 || index >= owner->count)
        return NULL;
    if (index >= owner->size())
        FUN_002e32a4(9, "", "", index, owner->size());
    return owner->begin[index];
}
