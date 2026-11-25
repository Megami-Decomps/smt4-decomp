#include "event/2dEvent/2dEventTex.h"

struct MotionOffset {
    f32 x;
    f32 y;
};

struct ScreenShakeState {
    MotionOffset amplitude; // 0x00
    MotionOffset offset;    // 0x08
    s16 duration;           // 0x10
    s16 elapsed;            // 0x12
};

extern "C" {
extern EventTex *g_eventTex;
u32 eventCommandGetPendingCleanup(void);
void effShakeParticleAdvance(ScreenShakeState *shake);
const MotionOffset *FUN_0018f654(ScreenShakeState *shake);

/* Refreshes the current event-texture shake offset when the updated motion is nonzero. */
s32 eventTexUpdateScreenShake(u32 /* job */)
{
    ScreenShakeState *shake =
        reinterpret_cast<ScreenShakeState *>(eventCommandGetPendingCleanup());
    if (shake != NULL) {
        effShakeParticleAdvance(shake);
        const MotionOffset *offset = FUN_0018f654(shake);
        if (offset->x != 0.0f || offset->y != 0.0f) {
            EventTex *texture = g_eventTex;
            texture->drawOrigin.x = offset->x * 30.0f;
            texture->drawOrigin.y = offset->y * 30.0f;
        }
    }
    return 0;
}
}
