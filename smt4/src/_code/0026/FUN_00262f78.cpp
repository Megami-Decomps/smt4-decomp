#include "shard/GameDataBlocks.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

int FUN_00262f78(void)
{
    GameSaveSelection *selection = &g_gameDataBlocks.saveBlock->body.config.selection;
    return selection->selectedUnitId;
}

} /* extern "C" */
