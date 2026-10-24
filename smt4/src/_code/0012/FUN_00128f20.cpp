#include "common.h"

extern "C" {
extern u8 g_nnSndMasterManagerImpl;
void FUN_0013ac30(void *manager);
}

extern "C" void FUN_00128f20(void)
{
    FUN_0013ac30(&g_nnSndMasterManagerImpl);
}
