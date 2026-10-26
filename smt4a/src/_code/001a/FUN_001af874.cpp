#include "nn/snd/Initialization.h"

extern "C" {
extern NnSndVoiceManager g_nnSndVoiceManager;
void FUN_001bd604(NnSndVoiceManager *manager, u32 first, u32 second, u32 third);

void FUN_001af874(u32 first, u32 second, u32 third)
{
    FUN_001bd604(&g_nnSndVoiceManager, first, second, third);
}
}
