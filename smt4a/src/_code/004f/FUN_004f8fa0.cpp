#include "common.h"

/* An object the owner deletes (its deleting destructor is vtable slot 1). */
class ReleasableObject {
public:
    virtual ~ReleasableObject();
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

/* Deletes the objects of all 109 slots and clears them. */
void FUN_004f8fa0(SlotOwner *owner)
{
    for (u32 i = 0; i < 109; i++) {
        if (owner->slots[i].owned != NULL) {
            delete owner->slots[i].owned;
            owner->slots[i].owned = NULL;
        }
        if (owner->slots[i].registered != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, owner->slots[i].registered->handle);
            if (owner->slots[i].registered != NULL) {
                delete owner->slots[i].registered;
                owner->slots[i].registered = NULL;
            }
        }
        owner->slots[i].unkC = 0;
    }
}

} /* extern "C" */
