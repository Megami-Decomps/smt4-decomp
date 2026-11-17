/* IV: gameGetSlotTable(); the slot table is declared in gamedata/GameSaveData.h. */
#ifndef GAMEDATA_SAVESLOTTABLEIV_H
#define GAMEDATA_SAVESLOTTABLEIV_H

#include "gamedata/GameSaveData.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the slot table inside the saved game block (the block plus 0x8C). */
SaveSlotTableIV *gameGetSlotTable(void);
#ifdef __cplusplus
}
#endif

#endif
