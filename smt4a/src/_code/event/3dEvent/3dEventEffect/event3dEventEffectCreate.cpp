#include "event/EventEplEffect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>

extern "C" {
extern const char DAT_0052f558[];
extern const char DAT_0052f548[];
extern const char DAT_0052f534[];
s32 effectJobUpdateSpawn(u32 job);
s32 FUN_0032063c(u32 job);
void eventWorkRelease(u32 job);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 workSize,
                   AsdProcUpdateFunc run, AsdProcFunc destroy, void *work, u32 parent);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void asdLoadFileAsyncWrap(const char *path, const void **result, u32 flags, u32 priority);

// Create an EPL effect process and its two screen draw tasks, then load the definition.
u32 event3dEventEffectCreate(const char *path, s32 x, s32 y, s32 z)
{
    asdDebugTrace(DAT_0052f558, 112);
    EventEplEffectWork *work = static_cast<EventEplEffectWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventEplEffectWork), 1));
    memset(work, 0, sizeof(EventEplEffectWork));
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_0052f548), 4, 0, 0, effectJobUpdateSpawn, eventWorkRelease, reinterpret_cast<u32>(work));
    taskCreateDraw(DAT_0052f534, 0x77, 0, 0, FUN_0032063c, NULL, work, work->job);
    taskCreateDraw(DAT_0052f534, 0xd3, 0, 0, FUN_0032063c, NULL, work, work->job);
    work->translation[0] = static_cast<f32>(x);
    work->translation[1] = static_cast<f32>(y);
    work->translation[2] = static_cast<f32>(z);
    asdLoadFileAsyncWrap(path, &work->pending, 1, 0x80);
    return work->job;
}
}
