#include "shard/Shard003B.h"

extern "C" {

extern s32 FUN_003958cc(void);

u8 FUN_003bb2e0(void)
{
    return FUN_003958cc() != 0;
}

} /* extern "C" */
