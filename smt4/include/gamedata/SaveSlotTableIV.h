/* IV: gameGetSlotTable(); the slot table is declared in gamedata/GameSaveData.h. */
#ifndef GAMEDATA_SAVESLOTTABLEIV_H
#define GAMEDATA_SAVESLOTTABLEIV_H

#include "gamedata/GameSaveData.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the slot table inside the saved game block (the block plus 0x8C). */
SaveSlotTableIV *gameGetSlotTable(void);
/* Resolves an active-party slot; empty slots return NULL. */
StatBlock *saveResolvePartySlot(u32 slot);
/* Finds a unit by identity or its saved slot number; returns -1 if absent. */
s32 gameSlotFindByCategory(const StatBlock *record);
#ifdef __cplusplus
}
#endif

/* The stock's unit record of devil `id`, or NULL when that devil is not in the stock (Apocalypse:
 * saveSlotTableFindPartyUnit, gamedata/SaveSlotTable.h). */
static __inline StatBlock *slotTableFindStockUnit(u32 id)
{
    SaveSlotTableIV *table = gameGetSlotTable();
    u16 i;

    for (i = 0; i < table->stockCount; i++) {
        s32 entry = table->stock[i];

        if (entry >= 0) {
            StatBlock *unit = &table->units[entry];

            if (unit->id == id) {
                return unit;
            }
        }
    }
    return NULL;
}

#endif
