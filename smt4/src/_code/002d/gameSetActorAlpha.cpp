#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

void gameSetActorAlpha(int index, u8 value)
{
    SaveWork *work = gameGetMapBlock();

    if (index < 0x40) {
        work->unkBD8[index] = value;
    }
}

} /* extern "C" */
