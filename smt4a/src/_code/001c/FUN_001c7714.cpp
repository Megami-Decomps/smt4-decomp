#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_001bd84c(NnSndMasterManager *manager, u32 value);

void FUN_001c7714(u32 value)
{
    FUN_001bd84c(&g_nnSndMasterManager, value);
}
}
