#include "common.h"

extern "C" {

int FUN_00146e20(u8 *manager);

extern u8 g_nnSndMasterManager;

void FUN_0013ac60(void)
{
    FUN_00146e20(&g_nnSndMasterManager);
}

} /* extern "C" */
