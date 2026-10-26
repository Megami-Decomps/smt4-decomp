/* NON_MATCHING: only the loop index scratch register differs (retail scales the index in r1, build in r0); progress now loads with vldr/vmov like retail. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

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

/* Non-negative IEEE-754 values keep their numeric order when compared as signed words. */
static __inline s32 floatBits(f32 value)
{
    union { f32 value; s32 bits; } representation;
    representation.value = value;
    return representation.bits;
}

// Step both fade channels and finish the transition once its endpoint and overlay gate are ready.
u32 FUN_0036ce70(OverlayFadeWork *work)
{
    u32 result = 0;
    bool complete = false;
    s8 entering = work->entering;
    if (entering) {
        for (s32 i = 0; i < 2; ++i) {
            FUN_002e1c94(&work->channels[i].progress.value, 4, work->channels[i].frame, 0.0f, 1.0f);
            ++work->channels[i].frame;
        }
    } else {
        for (s32 i = 0; i < 2; ++i) {
            FUN_002e1c94(&work->channels[i].progress.value, 3, work->channels[i].frame, 1.0f, 0.0f);
            ++work->channels[i].frame;
        }
    }
    f32 progress = work->channels[1].progress.value;
    // The upper-end test uses the stored IEEE-754 progress representation.
    if (floatBits(progress) >= 0x3f800000 && entering)
        complete = true;
    if (progress <= 0.0f && !entering)
        complete = true;
    if (overlayIsNotBusy() && complete) {
        if (!entering)
            work->active = 0;
        work->state = work->nextState;
        result = 3;
    }
    return result;
}
}
