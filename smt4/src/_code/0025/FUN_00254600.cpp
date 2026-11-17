#include "shard/GameDataBlocks.h"
#include "event/2dEvent/Npc2d.h"

extern "C" {

void FUN_00254600(u16 value)
{
    GameSaveSelection *selection = &g_gameDataBlocks.saveBlock->body.config.selection;
    selection->selectedUnitId = value;
}

} /* extern "C" */
