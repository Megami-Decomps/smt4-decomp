/* NON_MATCHING: process callback/zero registers differ, and armcc rematerializes the zero before process creation. */
#include "AsdSDK/AsdDebug.h"
#include "event/bustupEvent/BustupShake.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"


extern "C" {

s32 FUN_002c1d5c(void);
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s32 randomOffsetJobUpdate(u32 job);
void jobWorkFreeWork(u32 job);
u32 asdProcessCreateSimple(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);

// Starts the shaking job for the bust-up display unless the effect is disabled; returns the job.
u32 FUN_002ebe68(f32 *outputX, f32 *outputY, f32 amplitude, f32 duration)
{
    if (FUN_002c1d5c() == 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\bustupEvent\\BustupEffect.cpp", 137);
        ShakeJobWorkIV *work = (ShakeJobWorkIV *)asdMemAlloc(0x100, 0x100, 0, sizeof(ShakeJobWorkIV), 1);
        *work = ShakeJobWorkIV();
        work->fadeStart = duration - 10.0f;
        work->outputX = outputX;
        work->outputY = outputY;
        work->duration = duration;
        work->amplitudeX = amplitude;
        work->amplitudeY = amplitude;
        return asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVE_BustupShake"), 2, 0, 0, randomOffsetJobUpdate,
            jobWorkFreeWork, reinterpret_cast<u32>(work));
    }
    return 0;
}

}
