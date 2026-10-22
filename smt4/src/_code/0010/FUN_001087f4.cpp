/* NON_MATCHING: guard-address formation and early-return/store scheduling differ. */
#include "title/TitleJobWork.h"

extern "C" {
u32 FUN_002bfadc(s32 mode, TitleJobSurface *surface);
void FUN_002c39a4(void *scene);
s32 FUN_002bff10(void);
TitleJobWork *jobGetWork(u32 job);
extern void *g_titleScene;

// Refresh the title overlay's render surface once its source is ready.
s32 FUN_001087f4(u32 job)
{
    TitleJobWork *work = jobGetWork(job);
    work->overlayUpdated = 0;
    if (FUN_002bff10() == 0 && work->unkEDC && work->unkEDD && work->unkFDC != NULL &&
        !work->unkFD8 && !work->overlayShown) {
        FUN_002c39a4(g_titleScene);
        work->overlaySurface->width = 512;
        work->overlaySurface->height = 512;
        work->surfaceResult = FUN_002bfadc(0, work->overlaySurface);
        work->overlayUpdated = 1;
    }
    return 0;
}
}
