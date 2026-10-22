#include "common.h"

extern "C" {

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x1C9F];
    /* 0x1C9F */ s8 slots[1];
} SlotTable;

typedef struct SlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 value;
} SlotRecord;

typedef struct Entry {
    /* 0x0 */ s32 value;
    /* 0x4 */ u8 unk4[4];
} Entry;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x9B8];
    /* 0x9B8 */ s32 slot;
    /* 0x9BC */ s32 entry;
    /* 0x9C0 */ u8 unk9c0[0xC0];
    /* 0xA80 */ Entry entries[1];
} Owner;

extern SlotTable *gameGetSlotTable(void);
extern SlotRecord *gameGetSlotRecord(...);
extern void scrSetResult(s32 value);
extern Owner *g_partyPanel;

/* Script command: pushes the value of the slot record selected by the owner (its slot, else its entry); returns 1. */
u32 FUN_003a76c0(void)
{
    Owner *owner = g_partyPanel;
    SlotRecord *record;

    if (owner != NULL) {
        if (owner->slot > 0) {
            if (gameGetSlotTable()->slots[owner->slot] < 0) {
                return 1;
            }
            record = gameGetSlotRecord(gameGetSlotTable()->slots[owner->slot]);
        } else {
            if (owner->entry < 0) {
                return 1;
            }
            if ((s16)owner->entries[owner->entry].value < 0) {
                return 1;
            }
            record = gameGetSlotRecord();
        }
        if (record != NULL) {
            scrSetResult(record->value);
        }
    }
    return 1;
}

} /* extern "C" */
