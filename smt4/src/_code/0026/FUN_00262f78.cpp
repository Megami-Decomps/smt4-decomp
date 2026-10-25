#include "shard/GameDataBlocks.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

int FUN_00262f78(void)
{
    GameSaveSelection *selection = &g_gameDataBlocks.saveBlock->selection;
    return selection->unk24;
}

} /* extern "C" */
