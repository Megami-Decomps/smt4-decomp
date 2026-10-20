#include "shard/Shard0035.h"

extern "C" {

extern s32 FUN_001acf08(void);

void FUN_0035161c(Work2C *work)
{
    work->unk2C += FUN_001acf08();
}

} /* extern "C" */
