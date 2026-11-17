#include "ui/PartyPanelStateA.h"

extern "C" {

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x1C9F];
    /* 0x1C9F */ s8 slots[1];
} SlotTable;

typedef struct SlotRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 value;
} SlotRecord;

extern SlotTable *gameGetSlotTable(void);
extern SlotRecord *gameGetSlotRecord(...);
extern void scrSetResult(s32 value);

/* Script command: pushes the value of the slot record selected by the owner (its slot, else its entry); returns 1. */
u32 FUN_003a76c0(void)
{
    PartyPanelStateA *owner = g_partyPanel;
    SlotRecord *record;

    if (owner != NULL) {
        if (owner->partySlot > 0) {
            if (gameGetSlotTable()->slots[owner->partySlot] < 0) {
                return 1;
            }
            record = gameGetSlotRecord(gameGetSlotTable()->slots[owner->partySlot]);
        } else {
            if (owner->listSelection < 0) {
                return 1;
            }
            if ((s16)owner->entries[owner->listSelection].packedIndex < 0) {
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
