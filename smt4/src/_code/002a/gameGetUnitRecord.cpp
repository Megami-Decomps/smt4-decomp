#include "gamedata/GameSaveBlocks.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
StatBlock *gameGetUnitRecord(u32 index)
{
    SaveSlotTableIV *slots = &g_gameDataBlocks.saveBlock->body.slots;
    return &slots->units[index];
}
}
