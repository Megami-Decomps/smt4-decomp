#include "common.h"

struct PartySlotRecord {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 key;
    /* 0x12E */ u8 unk12E[2];
    /* 0x130 */ u32 flags;     /* bit 0: in use */
};
struct PartySlotTable {
    /* 0x0000 */ u8 unk0000[0x1DDC];
    /* 0x1DDC */ PartySlotRecord records[12];
    /* 0x2C4C */ u16 selectedKey;
};

extern "C" PartySlotTable *gameGetSlotTable(void);

static __inline PartySlotRecord *partySlotRecordAt(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->records[index];
}

/* Both records are in use and carry the same key. */
static __inline bool partySlotRecordsMatch(const PartySlotRecord *a, const PartySlotRecord *b)
{
    return a != NULL && (a->flags & 1) != 0 && b != NULL && (b->flags & 1) != 0 && a->key == b->key;
}

/* True when `record` matches the in-use slot record holding the table's selected key. */
extern "C" bool partySlotMatchesSelected(const PartySlotRecord *record)
{
    PartySlotTable *table = gameGetSlotTable();

    if (table->selectedKey != 0) {
        for (s32 index = 0; index < 12; index++) {
            PartySlotRecord *selected = partySlotRecordAt(static_cast<u16>(index));
            if (selected->key == table->selectedKey) {
                return partySlotRecordsMatch(selected, record);
            }
        }
    }
    return false;
}
