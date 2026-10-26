/* NON_MATCHING: guard-address formation and early-return/store scheduling differ. */
#include "title/TitleJobWork.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
u32 FUN_002bfadc(s32 mode, TitleJobSurface *surface);
s32 stateValuesGetBySelector(void);
extern void *g_titleScene;

// Refresh the title overlay's render surface once its source is ready.
s32 FUN_001087f4(u32 job)
{
    TitleJobWork *work = (TitleJobWork *)jobGetWork(job);
    work->overlayUpdated = 0;
    if (stateValuesGetBySelector() == 0 && work->unkEDC && work->unkEDD && work->unkFDC != NULL &&
        !work->unkFD8 && !work->overlayShown) {
        renderCtxSelectStereoLayout(reinterpret_cast<RenderCtx *>(g_titleScene));
        work->overlaySurface->width = 512;
        work->overlaySurface->height = 512;
        work->surfaceResult = FUN_002bfadc(0, work->overlaySurface);
        work->overlayUpdated = 1;
    }
    return 0;
}
}
