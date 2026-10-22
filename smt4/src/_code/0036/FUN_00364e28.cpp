/* NON_MATCHING: Zero and X use swapped s16/s17 registers, preventing retail's paired default/X stack store. */
#include "gfx/PositionTransform.h"

extern "C" {
void FUN_00364ebc(u32 target, PositionProvider *provider, const PositionTransform *transform);

/* Builds default transform parameters using the optional provider's current coordinates. */
void FUN_00364e28(u32 target, PositionProvider *provider)
{
    f32 x = 0.0f;
    f32 y = 0.0f;
    if (provider != NULL) {
        x = (f32)provider->getPosition()->x;
        y = (f32)provider->getPosition()->y;
    }
    PositionTransform transform;
    transform.unk00 = 0.0f;
    transform.unk04 = 0.0f;
    transform.x = x;
    transform.y = y;
    transform.unk10 = 0.0f;
    transform.unk14 = 1.0f;
    FUN_00364ebc(target, provider, &transform);
}
}
