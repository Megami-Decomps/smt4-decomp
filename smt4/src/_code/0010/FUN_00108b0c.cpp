#include "ui/UiSpriteApi.h"
#include "common.h"
#include "frame_tex/FrameTex.h"

extern "C" {

extern int stateValuesGetBySelector(u32 arg);
extern int FUN_0011340c(u32 arg);

/* "CAMPDR" draw: once the CAMP effect's left capture is done, closes it when a close was requested and no state selector is set. */
u8 FUN_00108b0c(u32 job)
{
    FrameTexWork *work = (FrameTexWork *)jobGetWork(job);

    if (work->campEnabled == 0) {
        return 0;
    }
    if (work->campCapturedLeft == 0) {
        return 0;
    }
    if (stateValuesGetBySelector(0) == 0 && work->campActive != 0) {
        FUN_0011340c(0);
    }
    return 0;
}

}
