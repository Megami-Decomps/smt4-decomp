#include "common.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

/* Returns the slot with the given index, or NULL when the index is out of range. */
static __inline PartySlotA *getSlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

/* Returns the slot whose id is the selected id, or NULL when nothing is selected or nothing matches. */
PartySlotA *saveSlotFindSelected(void)
{
    SaveSlotTable *state;
    PartySlotA *slot;
    s32 i;

    state = gameGetSlotTable();
    if (state->preferredId == 0) {
        return NULL;
    }
    for (i = 0; i < 12; i++) {
        slot = getSlot(i);
        if (slot->id == state->preferredId) {
            return slot;
        }
    }
    return NULL;
}

} /* extern "C" */
