#include "common.h"
#include "gamedata/GameDataAccess_Smt4a.h"
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

/* Returns the slot with the given id, or NULL. */
PartySlotA *saveSlotFindById(u32 id)
{
    PartySlotA *slot;
    s32 i;

    for (i = 0; i < 12; i++) {
        slot = getSlot(i);
        if (slot->id == id) {
            return slot;
        }
    }
    return NULL;
}

} /* extern "C" */
