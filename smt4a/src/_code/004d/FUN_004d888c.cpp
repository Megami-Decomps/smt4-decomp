#include "shard/W6_W6Match7_BattleEffects.h"

extern "C" {
void motionPlayerStartBlended(void *model, u32 index, u8 enabled, f32 first, f32 second);

/* Starts the model operation at frame zero. */
static __inline void modelStart(void *model, u32 index, s32 enabled, f32 value)
{
    motionPlayerStartBlended(model, index, enabled, 0.0f, value);
}

/* Starts the referenced model operation at frame zero, if there is a model. */
void FUN_004d888c(BattleMotionHandle **holder, u32 index, f32 value, u32 enabled)
{
    if (*holder != NULL) {
        s32 on = 1;
        if (enabled == 0) {
            on = 0;
        }
        modelStart((*holder)->model, index, on, value);
    }
}
}
