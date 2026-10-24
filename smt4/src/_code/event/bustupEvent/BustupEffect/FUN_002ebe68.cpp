/* NON_MATCHING: same instruction sequence and calls; only register allocation of the zero/constants differs (retail keeps the zero in r3 and loads the two callbacks into r1/r2; the build uses r1 for the zero and r3/r2 for the callbacks). */
#include "AsdSDK/AsdDebug.h"

/* The bust-up shake job's work (0x24 bytes). */
struct BustupShakeWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 center;
    /* 0x08 */ f32 low;
    /* 0x0C */ f32 amplitudeX;
    /* 0x10 */ f32 amplitudeY;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 first;
    /* 0x20 */ u32 second;
};

extern "C" {

s32 FUN_002c1d5c(void);
void *asdMemAlloc(u32 size, u32 alignment, u32 heap, u32 tag, u32 flags);
void randomOffsetJobUpdate(void *work);
void jobWorkFreeWork(void *work);
u32 asdProcessCreateSimple(const char *name, s32 priority, u16 arg2, u16 arg3,
                           void (*update)(void *), void (*destroy)(void *), void *work);

// Starts the shaking job for the bust-up display unless the effect is disabled; returns the job.
u32 FUN_002ebe68(f32 amplitude, f32 center, u32 first, u32 second)
{
    if (FUN_002c1d5c() == 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\bustupEvent\\BustupEffect.cpp", 137);
        BustupShakeWork *work = (BustupShakeWork *)asdMemAlloc(0x100, 0x100, 0, 0x24, 1);
        *work = BustupShakeWork();
        work->low = center - 10.0f;
        work->first = first;
        work->second = second;
        work->center = center;
        work->amplitudeX = amplitude;
        work->amplitudeY = amplitude;
        return asdProcessCreateSimple("EVE_BustupShake", 2, 0, 0, randomOffsetJobUpdate, jobWorkFreeWork, work);
    }
    return 0;
}

}
