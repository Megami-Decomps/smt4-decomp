#include "ui/FrameTex.h"
extern "C" FrameWork *g_frameTex;

struct FrameTextureAnimationWork {
    u8 data[0x88];
};
struct FrameTextureAnimation {
    u8 unk00[0x85];
    s8 busy; // 0x85
    u8 unk86[6];
    FrameTextureAnimationWork work; // 0x8c
};
struct FrameTextureActivity {
    u8 unk000[0x1c];
    u8 active; // 0x1c
    u8 unk01d[0xccb];
    FrameTextureAnimation animation; // 0xce8
};

extern "C" {
s32 FUN_002bf818(FrameTextureAnimationWork *work);
s8 frameAnimationGetBusy(const FrameTextureAnimation *animation);

// Poll active frame animation, rejecting a busy or incomplete transition.
u32 frameTexPollTransitionComplete(void)
{
    FrameWork *texture = g_frameTex;
    FrameTextureActivity *activity = (FrameTextureActivity *)texture;
    if (texture->unkF2B != 0 && activity->active != 0) {
        if (frameAnimationGetBusy(&activity->animation) != 0 || FUN_002bf818(&activity->animation.work) == 0) {
            return 0;
        }
    }
    return 1;
}
}
