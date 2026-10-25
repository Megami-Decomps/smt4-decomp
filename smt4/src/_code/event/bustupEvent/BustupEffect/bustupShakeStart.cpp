#include "AsdSDK/AsdDebug.h"
#include "event/bustupEvent/BustupShake.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>


extern "C" {

s32 FUN_002c1d5c(void);
void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s32 randomOffsetJobUpdate(u32 job);
void jobFreeWork(u32 job);

// Starts the shaking job for the bust-up display unless the effect is disabled; returns the job.
u32 bustupShakeStart(f32 *outputX, f32 *outputY, f32 amplitude, f32 duration)
{
    if (FUN_002c1d5c() == 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\bustupEvent\\BustupEffect.cpp", 137);
        ShakeJobWorkIV *work = (ShakeJobWorkIV *)asdMemAlloc(0x100, 0x100, 0, sizeof(ShakeJobWorkIV), 1);
        memset(work, 0, sizeof(*work));
        work->fadeStart = duration - 10.0f;
        work->outputX = outputX;
        work->outputY = outputY;
        work->duration = duration;
        work->amplitudeX = amplitude;
        work->amplitudeY = amplitude;
        return asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVE_BustupShake"), 2, 0, 0, randomOffsetJobUpdate, jobFreeWork, reinterpret_cast<u32>(work));
    }
    return 0;
}

}
