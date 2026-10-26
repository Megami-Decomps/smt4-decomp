#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_001b5c60(NnSndMasterManager *manager, u32 value);

void FUN_001afd84(u32 value)
{
    FUN_001b5c60(&g_nnSndMasterManager, value);
}
}
