#include "event/EventEplEffect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>
#include "AsdSDK/AsdMemAlloc.h"
#include "event/3dEvent/3dEventEffect.h"

extern "C" {
extern const char DAT_004035d4[];
extern const char DAT_004035c4[];
extern const char DAT_004035b0[];
u32 effectJobUpdateSpawn(void);
void eventWorkRelease(void);
s32 FUN_002248b8(u32 job);
void taskCreateDraw(const char *, s32, s32, s32, s32 (*)(u32), s32, void *, u32);

/* Create an event effect with two draw passes and asynchronously load its definition. */
u32 FUN_0030a2c0(const char *path, s32 x, s32 y, s32 z)
{
    asdDebugTrace(DAT_004035d4, 112);
    EventEplEffectWork *work = (EventEplEffectWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(EventEplEffectWork), 1);
    memset(work, 0, sizeof(EventEplEffectWork));
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_004035c4), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(effectJobUpdateSpawn), reinterpret_cast<AsdProcFunc>(eventWorkRelease), reinterpret_cast<u32>(work));
    taskCreateDraw(DAT_004035b0, 0x75, 0, 0, FUN_002248b8, 0, work, work->job);
    taskCreateDraw(DAT_004035b0, 0xD3, 0, 0, FUN_002248b8, 0, work, work->job);
    work->translation[0] = (f32)x;
    work->translation[1] = (f32)y;
    work->translation[2] = (f32)z;
    asdLoadFileAsyncNoCallback(path, &work->pending, 1, 0x80);
    return work->job;
}
}
