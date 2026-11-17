/* Apocalypse: gameGetSlotRecord(), the unit records of the save block's slot table (SlotRecordA in
 * gamedata/GameSaveDataA.h). */
#ifndef GAMEDATA_SAVESLOTRECORD_H
#define GAMEDATA_SAVESLOTRECORD_H

#include "gamedata/GameSaveDataA.h"

extern "C" {
/* The unit record of slot table entry `slotIndex` (save block + 0x8C + 0x68 + slotIndex * 0x12C). */
SlotRecordA *gameGetSlotRecord(s32 slotIndex);
}

#endif
