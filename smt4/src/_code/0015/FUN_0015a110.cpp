#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_0015d0f8(NnSndMasterManager *manager, u32 first, u32 second);

void FUN_0015a110(u32 first, u32 second)
{
    FUN_0015d0f8(&g_nnSndMasterManager, first, second);
}
}
