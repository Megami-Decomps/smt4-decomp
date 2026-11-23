#include "common.h"
#include "frame_tex/FrameTexA.h"

extern "C" {

int stateValuesGetBySelector(int arg);
int frameTexDrawCampTransition(int arg);

/* "CAMPDR" draw: once the CAMP effect is enabled with its left capture done, draws it when no state selector is set and the transition is active; always returns 0. */
u8 FUN_0013d2dc(u32 job)
{
    FrameTexWorkA *work = (FrameTexWorkA *)jobGetWork(job);

    if (work->campEnabled == 0) {
        return 0;
    }
    if (work->campCapturedLeft == 0) {
        return 0;
    }
    if (stateValuesGetBySelector(0) != 0) {
        return 0;
    }
    if (work->campActive != 0) {
        frameTexDrawCampTransition(0);
    }
    return 0;
}

} /* extern "C" */
