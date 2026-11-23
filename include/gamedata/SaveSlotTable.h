/* Apocalypse: gameGetSlotTable(), saveSlotFindSelected() and partyGetSlot() (gameGetSlotRecord(): gamedata/SaveSlotRecord.h);
 * the slot table (SaveSlotTableA) is declared in gamedata/GameSaveDataA.h. */
#ifndef GAMEDATA_SAVESLOTTABLE_H
#define GAMEDATA_SAVESLOTTABLE_H

#include "gamedata/GameSaveDataA.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the slot table inside the game-data table (the table plus 0x8C). */
SaveSlotTableA *gameGetSlotTable(void);
/* The slot whose id is the table's preferred id, or NULL when none is selected or none matches. */
PartySlotA *saveSlotFindSelected(void);
/* The stock slot with the given index (0-11), or NULL when the index is out of range. */
PartySlotA *partyGetSlot(u32 index);
/* The stock slot at this index with the preferred slot moved to the front. */
PartySlotA *partyGetSlotPreferredFirst(u32 index);
/* Both slots must be in use and have the preferred slot's ID. */
bool partySlotMatchesSelected(const PartySlotA *slot);
/* The stock slot at position `rank` of the twelve slots sorted by their devils' rank and id, or NULL. */
PartySlotA *FUN_00187068(u32 rank);
#ifdef __cplusplus
}
#endif

/* The party's unit record of devil `id`, or NULL when that devil is not in the party. */
static __inline SlotRecordA *saveSlotTableFindPartyUnit(u32 id)
{
    SaveSlotTableA *table = gameGetSlotTable();
    u16 i;

    for (i = 0; i < table->count; i++) {
        s32 entry = table->party[i];

        if (entry >= 0) {
            SlotRecordA *unit = &table->entries[entry];

            if (unit->id == id) {
                return unit;
            }
        }
    }
    return NULL;
}

#endif
