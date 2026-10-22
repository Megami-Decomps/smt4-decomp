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

struct EventTexMotionView {
    EventTex base;
    MotionOffset shake; // 0x60; keep the shared EventTex prefix unchanged.
};

extern "C" {
extern EventTex *g_eventTex;
u32 eventCommandGetPendingCleanup(void);
void FUN_00257e74(ScreenShakeState *shake);
const MotionOffset *FUN_0018f654(ScreenShakeState *shake);

// Refresh the current event-texture shake offset when the updated motion is nonzero.
u32 eventTexUpdateScreenShake(void)
{
    ScreenShakeState *shake =
        reinterpret_cast<ScreenShakeState *>(eventCommandGetPendingCleanup());
    if (shake != NULL) {
        FUN_00257e74(shake);
        const MotionOffset *offset = FUN_0018f654(shake);
        if (offset->x != 0.0f || offset->y != 0.0f) {
            EventTexMotionView *texture = reinterpret_cast<EventTexMotionView *>(g_eventTex);
            texture->shake.x = offset->x * 30.0f;
            texture->shake.y = offset->y * 30.0f;
        }
    }
    return 0;
}
}
