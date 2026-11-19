#include "gamedata/SaveSlotTable.h"

static __inline PartySlotA *partySlotRecordAt(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

/* True when `record` matches the in-use slot record holding the table's selected key. */
extern "C" bool partySlotMatchesSelected(const PartySlotA *record)
{
    SaveSlotTableA *table = gameGetSlotTable();

    if (table->preferredId != 0) {
        for (s32 index = 0; index < 12; index++) {
            PartySlotA *selected = partySlotRecordAt(static_cast<u16>(index));
            if (selected->id == table->preferredId) {
                return selected != NULL && (selected->flags & 1) != 0 && record != NULL &&
                    (record->flags & 1) != 0 && selected->id == record->id;
            }
        }
    }
    return false;
}
