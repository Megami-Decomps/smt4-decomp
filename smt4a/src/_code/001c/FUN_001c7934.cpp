#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_001cd508(NnSndMasterManager *manager, u32 first, u32 second);

void FUN_001c7934(u32 first, u32 second)
{
    FUN_001cd508(&g_nnSndMasterManager, first, second);
}
}
