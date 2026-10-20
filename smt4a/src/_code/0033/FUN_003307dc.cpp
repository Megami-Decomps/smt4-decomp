#include "shard/Shard0033.h"

extern "C" {

extern u32 DAT_00570ab4;
extern void FUN_00285834(u32 handle);

void FUN_003307dc(void)
{
    FUN_00285834(DAT_00570ab4);
    DAT_00570ab4 = 0;
}

} /* extern "C" */
