/* NON_MATCHING: fade completion/result flags share fewer saved registers and the integer/float tests are scheduled differently. */
#include "common.h"

struct OverlayFadeChannel {
    union { f32 value; s32 bits; } progress;
    u8 unk04[8];
    s32 frame;
    u32 unk10;
};
struct OverlayFadeWork {
    u8 unk000[0x10];
    OverlayFadeChannel channels[2];
    u8 unk038[0xc0];
    u32 state, nextState;
    u8 unk100[0x12];
    u8 active;
    u8 unk113[0x41];
    s8 entering;
};
extern "C" {
u32 FUN_002e1c94(f32 *value, s32 duration, s32 frame, f32 start, f32 target);
s32 overlayIsNotBusy();

// Step both fade channels and finish the transition once its endpoint and overlay gate are ready.
u32 FUN_0036ce70(OverlayFadeWork *work)
{
    s8 entering = work->entering;
    if (entering) {
        for (s32 i = 0; i < 2; ++i) {
            OverlayFadeChannel *channel = &work->channels[i];
            FUN_002e1c94(&channel->progress.value, 4, channel->frame, 0.0f, 1.0f);
            ++channel->frame;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            OverlayFadeChannel *channel = &work->channels[i];
            FUN_002e1c94(&channel->progress.value, 3, channel->frame, 1.0f, 0.0f);
            ++channel->frame;
        }
    }
    bool complete = false;
    // The upper-end test uses the stored IEEE-754 progress representation.
    if (work->channels[1].progress.bits >= 0x3f800000 && entering)
        complete = true;
    if (work->channels[1].progress.value <= 0.0f && !entering)
        complete = true;
    if (overlayIsNotBusy() && complete) {
        if (!entering)
            work->active = 0;
        work->state = work->nextState;
        return 3;
    }
    return 0;
}
}
