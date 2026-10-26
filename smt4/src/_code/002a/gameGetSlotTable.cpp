#include "shard/GameDataBlocks.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {

SaveSlotTableIV *gameGetSlotTable(void)
{
    return (SaveSlotTableIV *)((u8 *)g_gameDataBlocks.saveBlock + 0x8c);
}

} /* extern "C" */
