#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_00146e28(NnSndMasterManager *manager, u32 first, u32 second, u32 third);

void FUN_002b4cbc(u32 first, u32 second, u32 third)
{
    FUN_00146e28(&g_nnSndMasterManager, first, second, third);
}
}
