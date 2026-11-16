#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

void mapSetDepartureIndex(u8 value)
{
    SaveWork *work = gameGetMapBlock();

    work->unk03 = value;
}

} /* extern "C" */
