/* NON_MATCHING: common camp background creation (allocate once, spawn the two particle sets); float constant materialisation and the random-to-float conversions are not compared with retail */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

#define COMMON_BG_DRIFT_COUNT 5
#define COMMON_BG_RISE_COUNT 5

/* A drifting particle: position, velocity and size. */
struct CommonBgDrift {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 velocityX;
    /* 0x0C */ f32 velocityY;
    /* 0x10 */ f32 size;
};

/* A rising particle: column, speed, size, extent and a wobble pair. */
struct CommonBgRise {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 speed;
    /* 0x08 */ f32 size;
    /* 0x0C */ f32 extent;
    /* 0x10 */ s16 wobbleA;
    /* 0x12 */ s16 wobbleB;
};

struct CommonBgWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 active;
    /* 0x0C */ u32 mode;
    /* 0x10 */ f32 phase;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ CommonBgDrift drift[COMMON_BG_DRIFT_COUNT];
    /* 0x7C */ CommonBgRise rise[COMMON_BG_RISE_COUNT];
    /* 0xE0 */ u8 end[1];
};

extern "C" {
extern s8 g_commonBg;
extern CommonBgWork *DAT_0043dc24;

void *asdMemAlloc(s32 heap, s32 align, s32 a, s32 size, s32 flag);
void memClear(void *block, s32 size);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, u32 parent);
void uiFadeOpen(void);
u32 randNextInRange(u32 maximum);
s32 gameFlagIsSet(u32 flag);
s32 FUN_001a0a1c(u32 handle);
void campNotifyNoop(u32 handle);
s32 FUN_001ecd68(u32 handle);
s32 FUN_001ed134(u32 handle);

#define COMMON_BG_SPEED_STEP 0.1f

/* Creates the common background on the first use: allocates its work, starts the calc process
 * and the two draw tasks and scatters the particles; later uses only re-arm it. */
void FUN_002898e4(void)
{
    if (g_commonBg <= 0) {
        if (DAT_0043dc24 == NULL) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CommonBg\\CommonBg.cpp", 570);
            DAT_0043dc24 = (CommonBgWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(CommonBgWork), 1);
        }
        CommonBgWork *work = DAT_0043dc24;
        memClear(work, sizeof(CommonBgWork));
        work->process = asdProcessCreateSimple((const s8 *)"COMBG CALC", 2, 0, 0, FUN_001a0a1c, campNotifyNoop, 0);
        taskCreateDraw((const s8 *)"COMBG DDRAW", 0xE5, 0, 0, FUN_001ecd68, NULL, 0, work->process);
        taskCreateDraw((const s8 *)"COMBG DDRAW FADE", 0x15F, 0, 0, FUN_001ed134, NULL, 0, work->process);
        uiFadeOpen();

        work = DAT_0043dc24;
        for (s32 i = 0; i < COMMON_BG_DRIFT_COUNT; i++) {
            CommonBgDrift *p = &work->drift[i];
            p->x = (f32)randNextInRange(0x131);
            p->y = (f32)randNextInRange(0xE1);
            p->velocityX = -COMMON_BG_SPEED_STEP + (f32)(randNextInRange(0x13) + 1) * COMMON_BG_SPEED_STEP;
            p->velocityY = -COMMON_BG_SPEED_STEP + (f32)(randNextInRange(0x13) + 1) * COMMON_BG_SPEED_STEP;
            p->size = (f32)(randNextInRange(0x14) + 0x14) * COMMON_BG_SPEED_STEP;
            if (p->velocityX == 0.0f)
                p->velocityX = 1.0f;
            if (p->velocityY == 0.0f)
                p->velocityY = 1.0f;
        }
        for (s32 i = 0; i < COMMON_BG_RISE_COUNT; i++) {
            CommonBgRise *p = &work->rise[i];
            p->x = (f32)randNextInRange(0xF0);
            p->speed = -COMMON_BG_SPEED_STEP + (f32)(randNextInRange(0x13) + 1) * COMMON_BG_SPEED_STEP;
            p->extent = 100.0f;
            p->wobbleA = 0;
            p->wobbleB = 0xF0;
            p->size = (f32)(randNextInRange(0x14) + 0x14) * COMMON_BG_SPEED_STEP;
            if (randNextInRange(2) == 0) {
                p->wobbleA -= (s16)randNextInRange(0x1E);
                p->wobbleB += (s16)randNextInRange(0x1E);
            }
            if (p->speed == 0.0f)
                p->speed = 1.0f;
            if (p->speed < COMMON_BG_SPEED_STEP && p->speed > -COMMON_BG_SPEED_STEP)
                p->speed *= 10.0f;
        }
        work->phase = 0.0f;
        work->active = 0;
        work->unk14 = 0;
    }

    CommonBgWork *work = DAT_0043dc24;
    if (work != NULL && work->active == 0) {
        work->mode = gameFlagIsSet(0x400) != 0 ? 0 : 1;
        work->active = 1;
        work->phase = 1.0f;
        work->unk14 = 0;
    }
    g_commonBg++;
}

} /* extern "C" */
