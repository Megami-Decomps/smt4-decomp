/* NON_MATCHING: Guard loads are predicated together and use full field offsets instead of retail's intermediate bases. */
#include "title/titleMain.h"
#include "title/TitleJobWork.h"

extern "C" {
extern TitleScene *g_titleScene;
u32 jobGetWork(u32 job);
void FUN_002c39a4(TitleScene *scene);
u32 FUN_002bfadc(u32 mode, TitleJobSurface *surface);

/* Resizes the title job's surface when both overlays are hidden. */
u32 FUN_00108754(u32 job)
{
    TitleJobWork *work = reinterpret_cast<TitleJobWork *>(jobGetWork(job));
    work->surfaceUpdated = 0;
    if (work->unkEDC == 0 || work->unkEDD == 0 || work->unkFDC == NULL) {
        return 0;
    }
    if (work->unkFD8 != 0 || work->overlayShown != 0) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    work->surface->width = 512;
    work->surface->height = 512;
    work->surfaceResult = FUN_002bfadc(0, work->surface);
    work->surfaceUpdated = 1;
    return 0;
}
}
