#include "shard/SaveWork.h"

extern "C" {

extern SaveWork *gameGetMapBlock(void);

void FUN_0026fa30(u32 value)
{
    SaveWork *work = gameGetMapBlock();

    work->unk18 = value;
}

} /* extern "C" */
