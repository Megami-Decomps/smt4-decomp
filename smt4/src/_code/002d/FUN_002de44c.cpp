#include "common.h"

namespace { struct Effect { u8 padding[0x4c]; void *behavior; }; }

extern "C" {
void effBehaviorRun(void *behavior);
void FUN_002c74ac(Effect *effect, float delta);
void FUN_00267d84(Effect *effect, float delta);
void FUN_002de44c(Effect *effect)
{
    if (effect->behavior != NULL) {
        effBehaviorRun(effect->behavior);
        FUN_002c74ac(effect, 1.0f);
    }
    FUN_00267d84(effect, 1.0f);
}
}
