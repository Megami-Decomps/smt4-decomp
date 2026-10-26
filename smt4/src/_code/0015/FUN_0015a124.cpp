#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_0015d19c(NnSndMasterManager *manager, u32 first, u32 second);

void FUN_0015a124(u32 first, u32 second)
{
    FUN_0015d19c(&g_nnSndMasterManager, first, second);
}
}
