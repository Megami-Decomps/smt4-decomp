/* NON_MATCHING: steps the touch-to-continue splash (loads its textures, pulses the prompt, fades in, waits for a touch or a timeout, then tears down); float constants now land in the retail registers (s18/s16/s17 = 60/1/0) but retail stores the initial fields in a different order (offsets first, pulse last, timeout in r8), keeps the SetPair1C argument in r1, and the vstmia/vldmia pairs of the build do not appear in retail */
#include "common.h"
#include "code/Code0013.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantD.h"
extern "C" void asdTMTexTableFreeEntry(u32 table);

#define SPLASH_STATE_LOAD 0
#define SPLASH_STATE_FADE_IN 1
#define SPLASH_STATE_TIMEOUT 2
#define SPLASH_STATE_WAIT_TOUCH 3
#define SPLASH_TEXTURE_TABLE 0x22
#define SPLASH_TEXTURE_COUNT 7
#define SPLASH_TIMEOUT_FRAMES 300
#define SPLASH_BGM 0x100003C
#define SPLASH_PULSE_PERIOD 60.0f
#define SPLASH_PULSE_HALF 30.0f
#define SPLASH_FADE_STEP (1.0f / 30.0f)
#define SPLASH_DRIFT_STEP (1.0f / 60.0f)

struct SplashHalfByte {
    u32 value;
};

struct SplashWork {
    /* 0x00 */ u32 result;                /* set to 10 when the splash is done */
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ u32 state;
    /* 0x24 */ f32 alpha;
    /* 0x28 */ f32 pulse;
    /* 0x2C */ f32 offsetA;
    /* 0x30 */ f32 scaleA;
    /* 0x34 */ f32 offsetB;
    /* 0x38 */ f32 scaleB;
    /* 0x3C */ s32 timeout;
    /* 0x40 */ s32 touchRegion;
    /* 0x44 */ u8 flags[8];               /* flags[node]: texture node loaded here; 0x44..0x47 double as the cleared scratch word, flags[7] marks the table */
};

extern "C" {
void clearWordHalfByte(SplashHalfByte *word);
s32 textureGetIndexedResource(u32 table);
void asdTMTexTableLoadTmx(u32 table, s32 flag);
void asdTMTexTableReleaseNode(u32 table, s32 node);
void campCommonBgInitializeCrazingSumaho(void);
void ref208SetPair1C(u8 a, u8 b);
void commonBgReleaseOwnedJob(void);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 height, s32 width);
void ifTouchRegionRemove(void);
s32 ifTouchGetSelectionMode(void);
s32 padButtonIsPressed(u32 pad);
s32 bgmGetStateById(u32 id);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 b);
void soundChannelStopAll(u32 mask);
void slotSetRequest(s32 slot, s32 frames, s32 value);
void FUN_003d54f8(s32 a, s32 b);

u32 FUN_003e71a8(SplashWork *splash)
{
    if (splash->state == SPLASH_STATE_LOAD) {
        splash->pulse = SPLASH_PULSE_PERIOD;
        splash->scaleA = 1.0f;
        splash->offsetA = 0.0f;
        splash->offsetB = 1.0f;
        splash->scaleB = 1.5f;
        splash->timeout = SPLASH_TIMEOUT_FRAMES;
        clearWordHalfByte(reinterpret_cast<SplashHalfByte *>(splash->flags));
        splash->flags[7] = 0;
        if (textureGetIndexedResource(SPLASH_TEXTURE_TABLE) == 0) {
            asdTMTexTableLoadTmx(SPLASH_TEXTURE_TABLE, 0);
            splash->flags[7] = 1;
        }
        for (s32 node = 1; node < SPLASH_TEXTURE_COUNT; node++) {
            if (asdTMTexTableNodeIsLoaded(SPLASH_TEXTURE_TABLE, node) == 0) {
                asdTMTexLoadMainHeap(SPLASH_TEXTURE_TABLE, node);
                splash->flags[node] = 1;
            }
        }
        campCommonBgInitializeCrazingSumaho();
        ref208SetPair1C(1, 1);
        splash->touchRegion = 0;
        s32 region = ifTouchRegionAdd(0, 0, 0x140, 0xF0);
        splash->touchRegion = region;
        if (bgmGetStateById(SPLASH_BGM) != 1)
            soundChannelRequestIfEnabled(SPLASH_BGM, 0, 0x3C);
        splash->state++;
    }

    if (FUN_0013def0(0) == 0 && (ifTouchGetSelectionMode() == 6 || padButtonIsPressed(0) != 0)) {
        splash->state = SPLASH_STATE_TIMEOUT;
        splash->timeout = 0;
    } else if (splash->state == SPLASH_STATE_LOAD) {
        return 0;
    }

    splash->pulse -= 1.0f;
    if (splash->pulse <= 0.0f) {
        splash->pulse = SPLASH_PULSE_PERIOD;
        splash->scaleA = 1.0f;
        splash->offsetA = 0.0f;
    }
    f32 pulse = splash->pulse;
    if (pulse <= SPLASH_PULSE_HALF) {
        if (splash->offsetB <= 0.0f) {
            splash->offsetB = 0.0f;
            splash->scaleB = 1.0f;
        }
    }
    if (pulse > SPLASH_PULSE_HALF) {
        splash->offsetA += SPLASH_FADE_STEP;
        splash->scaleA += SPLASH_DRIFT_STEP;
        splash->offsetB -= SPLASH_FADE_STEP;
        splash->scaleB += SPLASH_DRIFT_STEP;
    }
    if (pulse < SPLASH_PULSE_HALF) {
        splash->offsetA -= SPLASH_FADE_STEP;
        splash->scaleA += SPLASH_DRIFT_STEP;
        splash->offsetB += SPLASH_FADE_STEP;
        splash->scaleB += SPLASH_DRIFT_STEP;
    }

    if (splash->state == SPLASH_STATE_FADE_IN) {
        if (asdTMTexTableNodeIsLoaded(SPLASH_TEXTURE_TABLE, 6) == 0)
            return 0;
        if (FUN_0013def0(0) == 3)
            FUN_003d54f8(0, 0x1E);
        if (FUN_0013def0(1) == 3)
            FUN_003d54f8(1, 0x1E);
        if (FUN_0013def0(0) == 2)
            return 0;
        if (splash->alpha < 1.0f)
            splash->alpha += SPLASH_FADE_STEP;
        else
            splash->timeout = SPLASH_TIMEOUT_FRAMES;
    }

    if (splash->state == SPLASH_STATE_TIMEOUT) {
        splash->timeout--;
        if (splash->timeout >= 0)
            return 0;
        splash->state = SPLASH_STATE_WAIT_TOUCH;
        splash->timeout = SPLASH_TIMEOUT_FRAMES;
        slotSetRequest(0, 0x2D, 0xFF);
        slotSetRequest(1, 0x2D, 0xFF);
    }

    if (splash->state == SPLASH_STATE_WAIT_TOUCH && FUN_0013def0(0) == 3) {
        ref208SetPair1C(0, 0);
        commonBgReleaseOwnedJob();
        for (s32 node = 1; node < SPLASH_TEXTURE_COUNT; node++) {
            if (splash->flags[node] != 0) {
                asdTMTexTableReleaseNode(SPLASH_TEXTURE_TABLE, node);
                splash->flags[node] = 0;
            }
        }
        if (splash->flags[7] != 0) {
            asdTMTexTableFreeEntry(SPLASH_TEXTURE_TABLE);
            splash->flags[7] = 0;
        }
        ifTouchRegionRemove();
        soundChannelStopAll(0xF);
        splash->result = 10;
    }
    return 0;
}

} /* extern "C" */
