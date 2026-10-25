#include "common.h"
extern "C" void _ZN4__rw10__rw_throwEiz(s32 kind, ...);

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

    void checkIndex(const u32 &index) const
    {
        if (index >= size())
            _ZN4__rw10__rw_throwEiz(9, "", "", index, size());
    }

    void *at(u32 index) const
    {
        checkIndex(index);
        return begin[index];
    }
};


extern "C" void *FUN_0040619c(const IndexedValues *owner, u32 index)
{
    if ((s32)index < 0)
        return NULL;
    if (index >= owner->count)
        return NULL;
    return owner->at(index);
}
