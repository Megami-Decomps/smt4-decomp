#include "title/titleMain.h"
#include "title/TitleJobWork.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
extern TitleScene *g_titleScene;
u32 FUN_002bfadc(u32 mode, TitleJobSurface *surface);

/* Resizes the title job's surface to 512x512 once it is ready and neither blocked nor covered by the overlay. */
u32 titleJobRefreshSurface(u32 job)
{
    TitleJobWork *work = reinterpret_cast<TitleJobWork *>(jobGetWork(job));
    work->flags.surfaceUpdated = 0;
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
    work->frame.surface->width = 512;
    work->frame.surface->height = 512;
    work->flags.surfaceResult = FUN_002bfadc(0, work->frame.surface);
    work->flags.surfaceUpdated = 1;
    return 0;
}
}
