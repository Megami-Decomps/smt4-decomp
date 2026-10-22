#include "common.h"

/* Loader interface the owner calls through its vtable: slot 0 loads an entry, slot 1 releases one. */
class SlotEntryLoader {
public:
    virtual s32 load(u32 context, void *desc, u32 *handle) = 0;
    virtual void release(u32 context, u32 handle) = 0;
};

typedef struct SlotEntryDesc {
    /* 0x00 */ u8 data[0x28];
} SlotEntryDesc;

typedef struct SlotEntryOwner {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 context;
    /* 0x018 */ u8 unk018[0x1A0];
    /* 0x1B8 */ SlotEntryLoader *loader;
    /* 0x1BC */ u8 unk1BC[0x12C];
    /* 0x2E8 */ s32 entryCount;
    /* 0x2EC */ u32 handles[8];
    /* 0x30C */ SlotEntryDesc descs[8];
    /* 0x44C */ u8 unk44C[0x20];
    /* 0x46C */ s32 slotEntries[0x39];
    /* 0x550 */ u32 flags;
} SlotEntryOwner;

extern "C" {

/* Puts entry `entry` (-1: none) into `slot`: releases the slot's previous entry, then loads the new one. Returns 0 on a bad entry or a failed load (flag 0x800). */
u32 FUN_004251e8(SlotEntryOwner *owner, s32 slot, s32 entry)
{
    if (entry < -1 || entry >= owner->entryCount) {
        return 0;
    }
    if (owner->slotEntries[slot] != entry && owner->slotEntries[slot] >= 0) {
        owner->loader->release(owner->context, owner->handles[owner->slotEntries[slot]]);
        owner->handles[owner->slotEntries[slot]] = 0;
        owner->slotEntries[slot] = -1;
    }
    if (entry >= 0) {
        if (!owner->loader->load(owner->context, &owner->descs[entry], &owner->handles[entry])) {
            owner->flags |= 0x800;
            return 0;
        }
        owner->slotEntries[slot] = entry;
    }
    return 1;
}

} /* extern "C" */
