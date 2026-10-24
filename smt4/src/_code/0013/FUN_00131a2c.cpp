#include "common.h"
#include <algorithm>
#include <vector>

struct SortObject;

/* Orders objects by the class order of their info record (_ZNK14SortObjectLessclEP10SortObjectS1_). */
struct SortObjectLess {
    bool operator()(SortObject *a, SortObject *b) const;
};

struct SortListener {
    virtual void vfn00();
    virtual void vfn04();
    virtual void vfn08();
    virtual void vfn0C();
    virtual void vfn10();
    virtual void onSorted(void *owner);
};

struct SortOwner {
    /* 0x00 */ u8 unk00[0xbc];
    /* 0xBC */ SortObject **begin;
    /* 0xC0 */ SortObject **end;
};

struct SortTask {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SortOwner *owner;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ SortListener *listener;
};

extern "C" {

/* Sorts the owner's object list, then notifies the listener. */
void FUN_00131a2c(SortTask *task)
{
    SortOwner *owner = task->owner;

    std::sort(owner->begin, owner->end, SortObjectLess());
    task->listener->onSorted(task->owner);
}

}
