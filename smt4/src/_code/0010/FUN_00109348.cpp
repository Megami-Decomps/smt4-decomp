#include "ui/UiSpriteApi.h"
#include "title/titleMain.h"
#include "common.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

int surfaceCopy(AsdTexture *a, AsdTexture *b);
u8 FUN_002bfadc(int arg, AsdTexture *unit);

/* "CAMPCL" capture: once the CAMP effect is enabled and the left screen not yet captured, captures it into the left texture (FUN_002bfadc/surfaceCopy, then halves the texture) and marks it captured. */
u32 FUN_00109348(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->campEnabled == 0) {
        return 0;
    }
    if (work->campCapturedLeft != 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->surfaceLeft->dimensions.width = 0x200;
    work->surfaceLeft->dimensions.height = 0x200;
    work->campCaptureResult = FUN_002bfadc(0, work->surfaceLeft);
    surfaceCopy(work->surfaceLeft, work->surfaceLeft);
    work->surfaceLeft->dimensions.width >>= 1;
    work->surfaceLeft->dimensions.height >>= 1;
    work->campCapturedLeft = 1;
    return 0;
}

} /* extern "C" */
