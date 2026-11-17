#include "gamedata/GameSaveBlocks.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
void *gameGetUnitRecord(u32 index)
{
    SaveSlotTableIV *slots = &g_gameDataBlocks.saveBlock->body.slots;
    return &slots->units[index];
}
}
