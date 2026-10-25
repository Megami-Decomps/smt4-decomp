#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

struct OrderedJobDrawWork {
    u8 unk000[0x5f2];
    u8 drawAll;
    u8 unk5f3[0x15];
    u32 jobs[10]; // 0x608
    u32 single; // 0x630
    u8 unk634[0x104];
    f32 x, y; // 0x738
};
extern "C" {
extern RenderCtx *g_titleScene;
s32 jobIsValid(u32);
f32 jobGetScalarFrame(u32);
s32 FUN_002865c0(u32, f32);
void FUN_001dbc5c(u32, f32, f32);
void FUN_002c198c(RenderCtx *);
void FUN_002c18e4(RenderCtx *);

u32 jobDrawOrderedChildren(u32 job)
{
    OrderedJobDrawWork *work = reinterpret_cast<OrderedJobDrawWork *>(jobGetWork(job));
    for (s32 i = 0; i < 10; ++i) {
        if (work->jobs[i] && !jobIsValid(work->jobs[i]))
            work->jobs[i] = 0;
    }
    bool changed;
    do {
        changed = false;
        for (s32 i = 0; i < 9; ++i) {
            if (!work->jobs[i]) {
                u32 *following = &work->jobs[i + 1];
                if (*following) {
                    work->jobs[i] = *following;
                    changed = true;
                    *following = 0;
                }
                continue;
            }
            if (work->jobs[i + 1]) {
                f32 frame = jobGetScalarFrame(work->jobs[i]);
                if (frame > jobGetScalarFrame(work->jobs[i + 1])) {
                    changed = true;
                    u32 previous = work->jobs[i];
                    work->jobs[i] = work->jobs[i + 1];
                    work->jobs[i + 1] = previous;
                }
            }
        }
    } while (changed);
    RenderCtx *render = g_titleScene;
    s32 renderState = FUN_002865c0(6, 0.0f);
    renderStackPush(&render->additional.stackC, renderState);
    if (work->drawAll) {
        for (s32 i = 0; i < 10; ++i) {
            if (jobIsValid(work->jobs[i]))
                FUN_001dbc5c(work->jobs[i], work->x, work->y);
        }
    } else if (jobIsValid(work->single)) {
        FUN_001dbc5c(work->single, work->x, work->y);
    }
    renderStackPop(&g_titleScene->additional.stackC);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}
}
