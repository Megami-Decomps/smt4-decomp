#include "shard/GameDataBlocks.h"
#include "event/2dEvent/Npc2d.h"

extern "C" {

void savedRecordSetDemonId(u16 value)
{
    GameSaveSelection *selection = &g_gameDataBlocks.saveBlock->body.config.selection;
    selection->state.selectedUnitId = value;
}

} /* extern "C" */
