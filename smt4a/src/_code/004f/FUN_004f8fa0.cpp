/* NON_MATCHING: register allocation/addressing only: retail forms the slot address as owner + i*16 and uses the +0x960.. displacements in each access (saving r9/sl); the build folds +0x960 into a slot pointer. */
#include "common.h"

/* An object released through slot 1 of its vtable. */
class ReleasableObject {
public:
    virtual void slot0();
    virtual void release();
    /* 0x04 */ u32 handle;
};

/* One 0x10-byte slot: a registered object (removed from the handle registry before release), a second object and a counter. */
struct ObjectSlot {
    /* 0x0 */ ReleasableObject *registered;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ ReleasableObject *owned;
    /* 0xC */ u32 unkC;
};

/* An owner with 109 slots from +0x960. */
struct SlotOwner {
    /* 0x000 */ u8 unk000[0x960];
    /* 0x960 */ ObjectSlot slots[109];
};

extern "C" {

extern u32 g_handleRegistry; /* 0x56fcc0 */
void ptrListRemoveClearOwner(u32 registry, u32 handle);

/* Releases the objects of all 109 slots and clears them. */
void FUN_004f8fa0(SlotOwner *owner)
{
    for (u32 i = 0; i < 109; i++) {
        ObjectSlot *slot = &owner->slots[i];

        if (slot->owned != NULL) {
            slot->owned->release();
            slot->owned = NULL;
        }
        if (slot->registered != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, slot->registered->handle);
            if (slot->registered != NULL) {
                slot->registered->release();
                slot->registered = NULL;
            }
        }
        slot->unkC = 0;
    }
}

} /* extern "C" */
