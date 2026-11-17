#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/JobWork.h"

struct RenderReadinessFlags {
    u8 unk00[0x4e];
    u8 enabled; // 0x4e
    u8 unk4f;
    u8 ready; // 0x50
};
struct RenderReadinessWork {
    u8 unk0000[0x1400];
    RenderReadinessFlags readiness; // 0x1400
};

extern "C" {
s32 stateValuesGetBySelector(u32);
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);
void FUN_0014a960(u32);

// Submit the render context once this job's two readiness flags permit it.
u8 frameTexDrawWhenReady(u32 job)
{
    RenderReadinessFlags *readiness = &((RenderReadinessWork *)jobGetWork(job))->readiness;
    if (readiness->enabled == 0)
        return 0;
    if (readiness->ready == 0)
        return 0;
    if (stateValuesGetBySelector(0) != 0)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    FUN_0014a960(0);
    return 0;
}
}
