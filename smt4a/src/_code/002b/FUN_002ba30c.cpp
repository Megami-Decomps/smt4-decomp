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
    for (s32 index = 0; index < 3; ++index) {
        Slot *slot = &g_engineRecordList->u.table.slots[32 + index];
        if (slot->active != 0 && slot->handle != NULL) {
            slot->handle->release();
            slot->handle = NULL;
        }
    }
    for (s32 index = 0; index < 32; ++index) {
        Slot *slot = &g_engineRecordList->u.table.slots[index];
        if (slot->active != 0 && slot->registered != 0 && slot->handle != NULL) {
            slot->handle->release();
            slot->handle = NULL;
        }
    }
    for (s32 index = 0; index < 17; ++index) {
        if (g_engineRecordList->u.extras[index].handle != NULL) {
            g_engineRecordList->u.extras[index].handle->release();
            g_engineRecordList->u.extras[index].handle = NULL;
        }
    }
}

} /* extern "C" */
