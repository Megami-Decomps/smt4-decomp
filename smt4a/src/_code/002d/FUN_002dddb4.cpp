/* NON_MATCHING: register allocation only: in the two slot loops retail computes the slot index offset in r1 and loads the owner pointer into r0, built the other way round */
#include "common.h"

extern "C" {

typedef struct Handle {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 key;
} Handle;

typedef struct Slot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x2B];
    /* 0x2C */ u8 registeredB;
    /* 0x2D */ u8 unk2D[3];
    /* 0x30 */ Handle *handle;
    /* 0x34 */ u8 registeredA;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ u8 unk38[0x20];
} Slot; /* 0x58 */

typedef struct Extra {
    /* 0x0 */ Handle *handle;
    /* 0x4 */ u32 unk4;
} Extra;

/* 17 extra handles (8 bytes apart) are interleaved with the slot table, which starts at 0xA4: the
 * last extra's second word overlaps the first slot, so the two are separate views. */
typedef struct SlotTable {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ Slot slots[35];      /* 32 regular slots followed by 3 special ones */
} SlotTable;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x20];
    union {
        /* 0x20 */ Extra extras[17];
        /* 0x20 */ SlotTable table;
    } u;
} Owner;

extern Owner *DAT_00587f08;
extern u32 g_handleRegistry;

extern void ptrListRemoveClearOwner(u32 registry, u32 key);

/* Removes every live slot's and extra's handle from the handle registry. */
void FUN_002dddb4(void)
{
    s32 i;

    for (i = 0; i < 3; i++) {
        Slot *slot = &DAT_00587f08->u.table.slots[32 + i];

        if (slot->active != 0 && slot->registeredA != 0) {
            if (slot->handle != NULL && slot->handle->key != 0) {
                ptrListRemoveClearOwner(g_handleRegistry, slot->handle->key);
            }
        }
    }
    for (i = 0; i < 32; i++) {
        Slot *slot = &DAT_00587f08->u.table.slots[i];

        if (slot->active != 0 && slot->registeredB != 0 && slot->registeredA != 0) {
            if (slot->handle != NULL && slot->handle->key != 0) {
                ptrListRemoveClearOwner(g_handleRegistry, slot->handle->key);
            }
        }
    }
    for (i = 0; i < 17; i++) {
        Extra *extra = &DAT_00587f08->u.extras[i];

        if (extra->handle != NULL && extra->handle->key != 0) {
            ptrListRemoveClearOwner(g_handleRegistry, extra->handle->key);
        }
    }
}

} /* extern "C" */
