#include "common.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

PartySlotA *partyGetSlot(u32 index)
{
    return index < 12 ? &gameGetSlotTable()->slots[index] : NULL;
}

} /* extern "C" */
