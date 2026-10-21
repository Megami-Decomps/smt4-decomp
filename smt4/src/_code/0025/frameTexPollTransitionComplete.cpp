/* NON_MATCHING: compiler reuses the animation base, omits retail's second address construction and uses ldrb rather than its signed busy-byte load. */
#include "shard/JobBlock43e278.h"

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

// Poll active frame animation, rejecting a busy or incomplete transition.
u32 frameTexPollTransitionComplete(void)
{
    JobBlock43e278 *texture = g_frameTex;
    FrameTextureActivity *activity = (FrameTextureActivity *)texture;
    if (texture->unkF2B != 0 && activity->active != 0) {
        FrameTextureAnimation *animation = &activity->animation;
        if (animation->busy != 0 || FUN_002bf818(&animation->work) == 0) {
            return 0;
        }
    }
    return 1;
}
}
