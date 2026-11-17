#include "title/titleMain.h"
#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

int surfaceCopy(AsdTexture *a, AsdTexture *b);
u8 FUN_002bfadc(int arg, AsdTexture *surface);
int stateValuesGetBySelector(int arg);

/* "CAMPCR" capture: marks the right capture pending while a state selector is set; otherwise, once the CAMP effect is enabled, captures the right screen into the right surface at half size. Returns 0. */
u32 FUN_001093e8(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (stateValuesGetBySelector(0) != 0) {
        work->campPendingRight = 1;
    } else if (work->campEnabled != 0) {
        if (work->campCapturedRight == 0 && work->campPendingRight == 0) {
            renderCtxSelectStereoLayout(g_titleScene);
            work->surfaceRight->dimensions.width = 0x200;
            work->surfaceRight->dimensions.height = 0x200;
            work->campCaptureResult = FUN_002bfadc(0, work->surfaceRight);
            surfaceCopy(work->surfaceRight, work->surfaceRight);
            work->surfaceRight->dimensions.width >>= 1;
            work->surfaceRight->dimensions.height >>= 1;
            work->campCapturedRight = 1;
        }
    }
    return 0;
}

} /* extern "C" */
