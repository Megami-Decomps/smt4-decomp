/* NON_MATCHING: only the translation destination address uses r5 instead of retail r9. */
#include "event/2dEvent/EventEffect.h"
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
u32 asdProcessCreateSimple(const char *name, s32 group, s32 startDelay, s32 endDelay,
                           AsdProcUpdateFunc update, AsdProcFunc end, void *work);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 workSize,
                   AsdProcUpdateFunc run, AsdProcFunc destroy, void *work, u32 parent);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void asdLoadFileAsyncWrap(const char *path, const void **result, u32 flags, u32 priority);

// Create an EPL effect process and its two screen draw tasks, then load the definition.
u32 event3dEventEffectCreate(const char *path, s32 x, s32 y, s32 z)
{
    // The EPL work tail extends beyond the shared EventEffectA job/state prefix.
    struct EffectWorkView {
        EventEffectA base;
        const void *pending;
        void *current;
        u32 started;
        u32 unk14;
        u32 resource;
        f32 translation[4];
    };
    asdDebugTrace(DAT_0052f558, 112);
    EffectWorkView *work = static_cast<EffectWorkView *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EffectWorkView), 1));
    memset(work, 0, sizeof(EffectWorkView));
    work->base.job = asdProcessCreateSimple(DAT_0052f548, 4, 0, 0, effectJobUpdateSpawn, eventWorkRelease, work);
    taskCreateDraw(DAT_0052f534, 0x77, 0, 0, FUN_0032063c, NULL, work, work->base.job);
    taskCreateDraw(DAT_0052f534, 0xd3, 0, 0, FUN_0032063c, NULL, work, work->base.job);
    work->translation[0] = static_cast<f32>(x);
    work->translation[1] = static_cast<f32>(y);
    work->translation[2] = static_cast<f32>(z);
    asdLoadFileAsyncWrap(path, &work->pending, 1, 0x80);
    return work->base.job;
}
}
