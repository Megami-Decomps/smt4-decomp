#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_00153374(NnSndMasterManager *manager, u32 value);

void FUN_0014fd38(u32 value)
{
    FUN_00153374(&g_nnSndMasterManager, value);
}
}
