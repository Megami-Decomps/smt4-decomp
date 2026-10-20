/* NON_MATCHING: retail loads the `shared` word with a predicated `ldrne` before the branch (no ldm) and forms the decremented counts in r1; the build merges the two loads into an ldm and decrements in r0. */
#include "common.h"

extern "C" {

struct SlotObject {
    virtual void vfunc0();
    virtual void destroy();
    /* 0x04 */ s32 shared;     /* non-zero when the object is not counted in the owner's unique count */
};

typedef struct SlotOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 total;
    /* 0x14 */ s32 unique;
    /* 0x18 */ SlotObject *slots[32];
} SlotOwner;

/* Destroys every object held in the owner's 32 slots and updates the owner's counts. */
void FUN_002aff0c(SlotOwner *owner)
{
    int i;

    for (i = 0; i < 32; i++) {
        SlotObject *object = owner->slots[i];

        if (object != NULL) {
            s32 shared = object->shared;

            object->destroy();
            owner->slots[i] = NULL;
            if (shared == 0) {
                owner->unique--;
            }
            owner->total--;
        }
    }
}

} /* extern "C" */
