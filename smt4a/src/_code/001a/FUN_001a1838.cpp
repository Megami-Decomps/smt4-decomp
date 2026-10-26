#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_001a1664(NnSndMasterManager *manager, u32 first, u32 second, u32 third);

void FUN_001a1838(u32 first, u32 second, u32 third)
{
    FUN_001a1664(&g_nnSndMasterManager, first, second, third);
}
}
