#include "shard/Shard0042.h"

extern "C" {

extern u32 DAT_005c0b4c;
extern void serviceCloseInitializedHandle(u32 *p);

void FUN_00426140(void)
{
    serviceCloseInitializedHandle(&DAT_005c0b4c);
}

} /* extern "C" */
