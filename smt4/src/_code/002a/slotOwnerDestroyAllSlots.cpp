#include "common.h"

extern "C" {

struct SlotObject {
    virtual void vfunc0();
    virtual void destroy();
    /* 0x04 */ s32 shared;     /* non-zero when the object is not counted in the owner's unique count */
};

struct SlotOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 total;
    /* 0x14 */ s32 unique;
    /* 0x18 */ SlotObject *slots[32];

    /* Takes one destroyed object out of the counts (shared objects were never counted as unique). */
    void release(s32 shared)
    {
        if (shared == 0) {
            unique--;
        }
        total--;
    }
};

/* Destroys every object held in the owner's 32 slots and updates the owner's counts. */
void slotOwnerDestroyAllSlots(SlotOwner *owner)
{
    int i;

    for (i = 0; i < 32; i++) {
        SlotObject *object = owner->slots[i];
        s32 shared = object != NULL ? object->shared : 0;

        if (object != NULL) {
            object->destroy();
            owner->slots[i] = NULL;
            owner->release(shared);
        }
    }
}

} /* extern "C" */
