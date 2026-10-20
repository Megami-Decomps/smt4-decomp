/* NON_MATCHING: `group` and `position` are in swapped callee-saved registers (r5/r6) */
#include "common.h"

extern "C" {

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} Owner;

typedef struct Slot {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} Slot;

typedef struct SlotEntry {
    /* 0x00 */ Slot *slot;
    /* 0x04 */ u8 unk04[0x58];
} SlotEntry; /* 0x5C */

typedef struct Group {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Owner *owner;
    /* 0x0C */ u32 position[3];
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ SlotEntry entries[3];
} Group;

extern void FUN_003fdb18(u32 handle, Vec3 vector);

/* Moves the group to `position`: tells the owner (with x as the first component) and every slot. */
void FUN_003e5c94(Group *group, Vec3 *position, f32 x)
{
    s32 i;

    if (group->owner->handle != 0) {
        Vec3 vector;

        vector.x = x;
        vector.y = position->y;
        vector.z = position->z;
        FUN_003fdb18(group->owner->handle, vector);
        group->position[0] = ((u32 *)position)[0];
        group->position[1] = ((u32 *)position)[1];
        group->position[2] = ((u32 *)position)[2];
    }
    for (i = 0; i < 3; i++) {
        Slot *slot = group->entries[i].slot;

        if (slot != NULL) {
            FUN_003fdb18(slot->handle, *position);
        }
    }
}

} /* extern "C" */
