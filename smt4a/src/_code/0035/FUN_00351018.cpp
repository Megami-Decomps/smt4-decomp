#include "common.h"

namespace { struct Effect { u8 padding[0x4c]; void *behavior; }; }

extern "C" {
void effBehaviorRun(void *behavior);
void FUN_0032246c(Effect *effect, float delta);
void FUN_00322984(Effect *effect, float delta);
void FUN_00351018(Effect *effect)
{
    if (effect->behavior != NULL) {
        effBehaviorRun(effect->behavior);
        FUN_0032246c(effect, 1.0f);
    }
    FUN_00322984(effect, 1.0f);
}
}
