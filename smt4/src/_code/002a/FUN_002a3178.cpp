#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndMasterManager g_nnSndMasterManager;
void FUN_001560a0(NnSndMasterManager *manager, u32 value);

void FUN_002a3178(u32 value)
{
    FUN_001560a0(&g_nnSndMasterManager, value);
}
}
