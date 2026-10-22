#include "AsdSDK/AsdDebug.h"

/* The speed-line effect job's work. */
struct EffectLineWork {
    /* 0x00 */ u32 effect;
    /* 0x04 */ f32 frame;
    /* 0x08 */ f32 duration;
};

extern "C" {
extern const char DAT_00403754[];
extern const char DAT_00403748[];
extern const char DAT_00403738[];
s32 scrGetArg(s32 index);
s32 FUN_002c1d5c(void);
void *asdMemAlloc(u32 size, u32 alignment, u32 heap, u32 tag, u32 flags);
u32 FUN_00246644(u32 effect, u32 layer, u32 mode);
void effLineJobUpdate(void *work);
void jobWorkFreeWork(void *work);
void effectLineUpdateCallback(void *work);
u32 asdProcessCreateSimple(const char *name, s32 priority, u16 arg2, u16 arg3,
                           void (*update)(void *), void (*destroy)(void *), void *work);
void taskCreateDraw(const char *name, s32 priority, u32 arg2, u32 arg3, void (*draw)(void *),
                    u32 arg5, void *work, u32 job);
void bustupCutAnimSetJobParam(u32 job);

/* Script command: starts the speed-line effect for the given number of frames. */
s32 EVE_EffectLineStart(void)
{
    s32 duration = scrGetArg(0);
    if (FUN_002c1d5c() == 0) {
        asdDebugTrace(DAT_00403754, 199);
        EffectLineWork *work = (EffectLineWork *)asdMemAlloc(0x100, 0x100, 0, 12, 1);
        *work = EffectLineWork();
        work->effect = FUN_00246644(10, 7, 0);
        work->frame = 0.0f;
        work->duration = duration;
        u32 job = asdProcessCreateSimple(DAT_00403748, 2, 0, 0, effLineJobUpdate, jobWorkFreeWork,
                                         work);
        taskCreateDraw(DAT_00403738, 0x71, 0, 0, effectLineUpdateCallback, 0, work, job);
        bustupCutAnimSetJobParam(job);
    }
    return 1;
}
}
