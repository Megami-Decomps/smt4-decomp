#include "common.h"

/* The "crazing sumaho" fountain screen's per-frame state. */
struct CrazingSumahoWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 ownsBackground;   /* this screen created the shared background */
    /* 0x25 */ u8 active;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ s32 state;
    /* 0x2C */ s32 touchRegion;
    /* 0x30 */ f32 fade;
    /* 0x34 */ s32 timer;
};

extern "C" {
s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height);
void ifTouchRegionRemove(void);
u8 ifTouchGetSelectionMode(void);
u32 ref208HasObj(void);
void campCommonBgInitializeCrazingSumaho(void);
void commonBgReleaseOwnedJob(void);
void ref208SetPair1C(u8 a, u8 b);
u32 bgmGetStateById(s32 trackId);
s32 soundChannelRequestIfEnabled(s32 a, s32 b, s32 c);
void soundChannelStopAll(u32 value);
u8 FUN_0013def0(s32 index);
void FUN_003d54f8(u32 index, u32 value);
void slotSetRequest(u32 index, u32 value, u32 extra);
u32 padButtonIsPressed(u32 button);

// Update the screen: fade in, wait for a tap or timeout, then tear down once the slots finish.
s32 fountainCrazingSumahoUpdate(CrazingSumahoWork *work)
{
    if (work->state == 0) {
        work->active = 1;
        work->fade = 0.0f;
        work->timer = 300;
        work->touchRegion = 0;
        work->touchRegion = ifTouchRegionAdd(0, 0, 320, 240);
        work->ownsBackground = 0;
        if (ref208HasObj() == 0) {
            campCommonBgInitializeCrazingSumaho();
            work->ownsBackground = 1;
        }
        ref208SetPair1C(1, 1);
        if (bgmGetStateById(0x0100003C) != 1) {
            soundChannelRequestIfEnabled(0x0100003C, 0, 60);
        }
        work->state++;
    }
    if (FUN_0013def0(0) == 0 && (ifTouchGetSelectionMode() == 6 || padButtonIsPressed(0) != 0)) {
        work->state = 2;
        work->timer = 0;
    }
    if (work->state == 1) {
        if (FUN_0013def0(0) == 3) {
            FUN_003d54f8(0, 30);
        }
        if (FUN_0013def0(1) == 3) {
            FUN_003d54f8(1, 30);
        }
        if (FUN_0013def0(0) != 2) {
            union {
                f32 value;
                s32 bits;
            } fade;
            fade.value = work->fade;
            if (fade.bits >= 0x3F800000) {
                work->timer = 300;
            } else {
                work->fade = fade.value + 0.033333335f;
            }
        }
    } else if (work->state == 2) {
        work->timer--;
        if (work->timer < 0) {
            work->state = 3;
            work->timer = 300;
            slotSetRequest(0, 45, 255);
            slotSetRequest(1, 45, 255);
        }
    } else if (work->state == 3) {
        if (FUN_0013def0(0) == 3) {
            work->active = 0;
            ref208SetPair1C(0, 0);
            if (work->ownsBackground != 0) {
                commonBgReleaseOwnedJob();
            }
            ifTouchRegionRemove();
            soundChannelStopAll(15);
            return 0;
        }
    }
    return 1;
}

}
