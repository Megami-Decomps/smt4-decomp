#include "shard/Shard0043.h"

extern "C" {

extern u8 g_nnSndMasterManager;
extern void FUN_00439cc4(u8 *p);

void FUN_00439eb0(void)
{
    FUN_00439cc4(&g_nnSndMasterManager);
}

} /* extern "C" */
