#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_001cd464(NnSndMasterManager *manager, u32 first, u32 second);

void FUN_001c7920(u32 first, u32 second)
{
    FUN_001cd464(&g_nnSndMasterManager, first, second);
}
}
