#include "event/bustupEvent/BustupShake.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
s32 FUN_00162ea4();
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
s32 FUN_002ac078(u32 job);
void jobFreeWork(u32 job);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);

// Start a uniform-amplitude shake, fading during its final ten frames when timed.
u32 FUN_0036c580(f32 *outputX, f32 *outputY, f32 amplitude, f32 duration)
{
    if (FUN_00162ea4())
        return 0;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\bustupEvent\\BustupEffect.cpp", 0x92);
    ShakeJobWork *work = static_cast<ShakeJobWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(ShakeJobWork), 1));
    *work = ShakeJobWork();
    work->outputX = outputX;
    work->outputY = outputY;
    f32 fadeStart;
    if (duration == 0.0f) {
        work->endless = 1;
        work->duration = 0.0f;
        fadeStart = 0.0f;
    } else {
        work->duration = duration;
        work->endless = 0;
        fadeStart = duration - 10.0f;
    }
    work->fadeStart = fadeStart;
    work->amplitudeX = amplitude;
    work->amplitudeY = amplitude;
    return asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVE_BustupShake"), 4, 0, 0,
                                  FUN_002ac078, jobFreeWork, reinterpret_cast<u32>(work));
}
}
