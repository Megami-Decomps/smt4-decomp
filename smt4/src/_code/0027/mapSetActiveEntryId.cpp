#include "gamedata/MapSaveBlock.h"

extern "C" {

void mapSetActiveEntryId(u16 value)
{
    MapSaveBlock *block = gameGetMapBlock();

    block->unk020 = value;
}

} /* extern "C" */
