/* NON_MATCHING: scheduling/register allocation only: retail predicates the load of `shared` (ldrne, before the branch) and decrements the two counts through r1; built loads it after the branch and decrements in r0. */
#include "common.h"

extern "C" {

typedef struct Slot Slot;

typedef struct SlotVtable {
    /* 0x00 */ void (*unk00)(Slot *slot);
    /* 0x04 */ void (*release)(Slot *slot);
} SlotVtable;

struct Slot {
    /* 0x00 */ SlotVtable *vtable;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 shared;
    /* 0x0C */ u8 flags;  /* bit 3: releasable */
};

typedef struct SlotPool {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 usedCount;
    /* 0x14 */ s32 ownedCount;  /* slots that are not shared */
    /* 0x18 */ Slot *slots[32];
} SlotPool;

/* Releases every releasable slot in the pool and updates the counts. */
void FUN_00483294(SlotPool *pool)
{
    s32 i = 0;

    do {
        Slot *slot = pool->slots[i];

        if (slot != NULL && (slot->flags & 8) != 0) {
            s32 shared = slot->shared;

            slot->vtable->release(slot);
            pool->slots[i] = NULL;
            if (shared == 0) {
                pool->ownedCount--;
            }
            pool->usedCount--;
        }
        i++;
    } while (i < 32);
}

} /* extern "C" */
