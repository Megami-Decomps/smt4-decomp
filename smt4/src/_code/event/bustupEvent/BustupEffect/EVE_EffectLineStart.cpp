#include "AsdSDK/AsdDebug.h"

#include "shard/W6_W6Match5_EffectLineJob.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern const char DAT_00403754[];
extern const char DAT_00403748[];
extern const char DAT_00403738[];
s32 scrGetArg(s32 index);
s32 FUN_002c1d5c(void);
void *asdMemAlloc(u32 size, u32 alignment, u32 heap, u32 tag, u32 flags);
BustupEffectLineObject *FUN_00246644(u32 effect, u32 layer, u32 mode);
s32 effLineJobUpdate(u32 job);
void jobWorkFreeWork(u32 job);
s32 effectLineUpdateCallback(u32 job);
u32 asdProcessCreateSimple(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
                    AsdProcUpdateFunc draw, AsdProcFunc destroy, u32 work, u32 parent);
void bustupCutAnimSetJobParam(u32 job);

/* Script command: starts the speed-line effect for the given number of frames. */
s32 EVE_EffectLineStart(void)
{
    s32 duration = scrGetArg(0);
    if (FUN_002c1d5c() == 0) {
        asdDebugTrace(DAT_00403754, 199);
        EffectLineJobWork *work = (EffectLineJobWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(EffectLineJobWork), 1);
        *work = EffectLineJobWork();
        work->object = FUN_00246644(10, 7, 0);
        work->elapsed = 0.0f;
        work->duration = duration;
        u32 job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403748), 2, 0, 0,
                                         effLineJobUpdate, jobWorkFreeWork, reinterpret_cast<u32>(work));
        taskCreateDraw(reinterpret_cast<const s8 *>(DAT_00403738), 0x71, 0, 0,
                       effectLineUpdateCallback, NULL, reinterpret_cast<u32>(work), job);
        bustupCutAnimSetJobParam(job);
    }
    return 1;
}
}
