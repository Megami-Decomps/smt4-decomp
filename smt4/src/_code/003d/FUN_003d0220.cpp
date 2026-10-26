/* NON_MATCHING: the zero-float argument of the second FUN_0023cb70 call is loaded before the integer arguments (retail loads it last). */
#include "battle/btlMain.h"

extern "C" {
extern BtlMain *g_btlMain;
void transitionConfigureAndReset(BtlMain *main, u32 duration, s32 enabled, f32 value);
void FUN_0023cb70(BtlMain *main, u32 duration, s32 enabled, s32 mode, f32 value);
void FUN_003d86a0(BtlMain *main, s32 first, s32 second);

static __inline void btlMainSetFlags(BtlMain *main, u32 mask)
{
    main->flags |= mask;
}

static __inline void cameraTransitionStart(BtlMain *main, u32 duration, f32 first, s32 mode, f32 second)
{
    transitionConfigureAndReset(main, duration, 1, first);
    FUN_0023cb70(g_btlMain, duration, 1, mode, second);
}

u32 FUN_003d0220(u32, void *owner, s32 alternate)
{
    struct ProgressView { u8 unk000[0x56c]; u32 frame; };
    // The transition's camera value lies beyond the shared BtlMain prefix.
    struct CameraView { u8 unk000[0x698]; f32 value; };
    typedef char TransitionViews[offsetof(ProgressView, frame) == 0x56c &&
        offsetof(CameraView, value) == 0x698 ? 1 : -1];
    ProgressView *progress = static_cast<ProgressView *>(owner);
    u32 frame = progress->frame;
    BtlMain *main = g_btlMain;
    if (alternate) {
        if (frame == 15) {
            btlMainSetFlags(main, 0x100000);
            cameraTransitionStart(main, 50, 6.0f, 0, 8.0f);
        }
        if (progress->frame <= 65) {
            return 0;
        }
    } else {
        f32 cameraValue = reinterpret_cast<CameraView *>(main)->value;
        switch (frame) {
        case 15:
            cameraTransitionStart(main, 50, 6.0f, 0, 8.0f);
            break;
        case 35:
            cameraTransitionStart(main, 6, -cameraValue - 0.5f, 1, 0.0f);
            break;
        case 41:
            FUN_003d86a0(main, 0, 2);
            break;
        }
        if (progress->frame <= 43) {
            return 0;
        }
    }
    return 1;
}
}
