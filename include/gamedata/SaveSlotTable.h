/* Apocalypse: gameGetSlotTable() and saveSlotFindSelected() (gameGetSlotRecord(): gamedata/SaveSlotRecord.h);
 * the slot table (SaveSlotTable) is declared in gamedata/GameSaveDataA.h. */
#ifndef GAMEDATA_SAVESLOTTABLE_H
#define GAMEDATA_SAVESLOTTABLE_H

#include "gamedata/GameSaveDataA.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the slot table inside the game-data table (the table plus 0x8C). */
SaveSlotTable *gameGetSlotTable(void);
/* The slot whose id is the table's preferred id, or NULL when none is selected or none matches. */
PartySlotA *saveSlotFindSelected(void);
#ifdef __cplusplus
}
#endif

#endif
