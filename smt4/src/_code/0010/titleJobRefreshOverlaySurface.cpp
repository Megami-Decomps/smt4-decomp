#include "title/TitleJobWork.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
u32 FUN_002bfadc(s32 mode, TitleJobSurface *surface);
s32 stateValuesGetBySelector(void);
extern void *g_titleScene;

// Refresh the title overlay's render surface once its source is ready.
s32 titleJobRefreshOverlaySurface(u32 job)
{
    TitleJobWork *work = (TitleJobWork *)jobGetWork(job);
    work->flags.overlayUpdated = 0;
    if (stateValuesGetBySelector() != 0) {
        return 0;
    }
    TitleJobFlags *flags = &work->flags;
    if (flags->active == 0) {
        return 0;
    }
    if (flags->ready == 0) {
        return 0;
    }
    if (work->frame.source == NULL) {
        return 0;
    }
    TitleJobFrame *frame = &work->frame;
    if (work->frame.blocked != 0) {
        return 0;
    }
    if (frame->overlayShown != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
    work->frame.overlaySurface->width = 512;
    work->frame.overlaySurface->height = 512;
    work->flags.surfaceResult = FUN_002bfadc(0, work->frame.overlaySurface);
    work->flags.overlayUpdated = 1;
    return 0;
}
}
