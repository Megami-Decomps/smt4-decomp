#include "shard/W6_W6Match6_EffectRender.h"

extern "C" {
extern EffectParameterBlock g_defaultEffectParameterBlock;
void FUN_001b4120(const EffectParameterBlock *parameters, u32 size);
}

// Submit a copy of the default six-float effect parameter block.
extern "C" void effectSubmitDefaultParameters()
{
    EffectParameterBlock parameters = g_defaultEffectParameterBlock;
    FUN_001b4120(&parameters, sizeof(parameters));
}
