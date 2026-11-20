/* NON_MATCHING: retail places the shared return-1 block between the mode==1 and mode==2 checks and uses -O2 slot addressing (score 16 under -O2). */
#include "common.h"

struct Threshold {
    u8 unk00[4];
    u8 flags;  /* 0x04 */
    u8 unk05[3];
    f32 limit; /* 0x08 */
};

struct Slot {
    u8 unk00[4];
    f32 value;         /* 0x04 */
    u8 unk08[4];
    Threshold *target; /* 0x0c */
    u8 unk10[0x10];
    u8 mode;           /* 0x20 */
    u8 unk21[0xf];
};

struct SlotOwner {
    u8 unk00[4];
    u32 flags;   /* 0x04 */
    u8 unk08[0x14];
    s32 current; /* 0x1c */
    u8 unk20[4];
    Slot slots[1]; /* 0x24 */
};

extern "C" {

/* True when the current slot has no pending threshold, or its mode/flags already satisfy it. */
u32 FUN_004ffa14(SlotOwner *owner)
{
    if ((owner->flags & 2) != 0) {
        return 1;
    }
    Slot *slot = &owner->slots[owner->current];
    Threshold *target = owner->slots[owner->current].target;
    if (target == NULL) {
        return 1;
    }
    if (slot->mode != 2) {
        if (slot->mode == 1) {
            return 1;
        }
    } else if ((target->flags & 1) != 0) {
        return 1;
    }
    return slot->value >= target->limit ? 1 : 0;
}

} /* extern "C" */
