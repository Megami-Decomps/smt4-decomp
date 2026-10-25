#include "shard/GameDataBlocks.h"
#include "event/2dEvent/Npc2d.h"

extern "C" {

void FUN_00254600(u16 value)
{
    GameSaveSelection *selection = &g_gameDataBlocks.saveBlock->selection;
    selection->unk24 = value;
}

} /* extern "C" */
