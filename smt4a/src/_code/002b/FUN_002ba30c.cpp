/* NON_MATCHING: first loop only: retail forms the slot index (i * 88) before loading the global, ours loads the global first (r0/r1 swapped). */
#include "common.h"

/* An engine record's handle object; slot 1 of its vtable releases it. */
class RecordHandle {
public:
    virtual void slot0();
    virtual void release();
};

typedef struct Slot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x2B];
    /* 0x2C */ u8 registered;
    /* 0x2D */ u8 unk2D[3];
    /* 0x30 */ RecordHandle *handle;
    /* 0x34 */ u8 unk34[0x24];
} Slot; /* 0x58 */

typedef struct Extra {
    /* 0x0 */ RecordHandle *handle;
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

extern "C" {

extern Owner *g_engineRecordList;

/* Releases the handles of every live special slot, regular slot and extra record. */
void FUN_002ba30c(void)
{
    s32 i;

    for (i = 0; i < 3; i++) {
        Owner *owner = g_engineRecordList;
        Slot *slot = &owner->u.table.slots[32 + i];

        if (slot->active != 0 && slot->handle != NULL) {
            slot->handle->release();
            slot->handle = NULL;
        }
    }
    for (i = 0; i < 32; i++) {
        Owner *owner = g_engineRecordList;
        Slot *slot = &owner->u.table.slots[i];

        if (slot->active != 0 && slot->registered != 0 && slot->handle != NULL) {
            slot->handle->release();
            slot->handle = NULL;
        }
    }
    for (i = 0; i < 17; i++) {
        if (g_engineRecordList->u.extras[i].handle != NULL) {
            g_engineRecordList->u.extras[i].handle->release();
            g_engineRecordList->u.extras[i].handle = NULL;
        }
    }
}

} /* extern "C" */
