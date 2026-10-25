#include "shard/W6_W6Match5_ArmySummon.h"

extern "C" {
void nodeGroupSetScale(void *commands, f32 x, f32 y, f32 z);
void FUN_002adde8(AsdMdlNode *node, const char *name, f32 *position);
void nodeOwnerSetTranslations(void *commands, const f32 *position);
void FUN_003351e0(void *commands, f32 x, f32 y, f32 z);
void FUN_002a5704(void *commands, s32 animation, f32 value);

/* Sets the summon command scale and position from its model locator or the default. */
void armySummonSetCommandTransform(ArmySummonState *state)
{
    if (state->commands != NULL) {
        nodeGroupSetScale(state->commands, 0.1f, 0.1f, 0.1f);
        f32 position[3];
        if (state->model != NULL) {
            FUN_002adde8(state->model->node, "Dummy_pl", position);
        } else {
            position[0] = 6.0f;
            position[1] = 0.0f;
            position[2] = 0.0f;
        }
        nodeOwnerSetTranslations(state->commands, position);
        FUN_003351e0(state->commands, 0.0f, 0.0f, 0.0f);
        FUN_002a5704(state->commands, 25, 0.0f);
    }
}
}
