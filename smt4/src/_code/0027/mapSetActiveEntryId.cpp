#include "gamedata/MapSaveBlock.h"

extern "C" {

void mapSetActiveEntryId(s32 value)
{
    MapSaveBlock *block = gameGetMapBlock();

    block->unk020 = value;
}

} /* extern "C" */
