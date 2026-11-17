#include "gamedata/MapSaveBlock.h"

extern "C" {


void gameSetActorAlpha(int index, u8 value)
{
    MapSaveBlock *work = gameGetMapBlock();

    if (index < 0x40) {
        work->timedFlags[index] = value;
    }
}

} /* extern "C" */
