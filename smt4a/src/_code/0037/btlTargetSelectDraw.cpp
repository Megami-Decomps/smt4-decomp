#include "battle/btlTargetSelect.h"
#include "shard/JobWork.h"

extern "C" {

void btlTargetSelectDrawPanel(BtlUiObject *panel);
void btlTargetSelectDrawMarkers(BtlUiObject *markers);

/* Draw task of the battle target selection: draws the information panel or the marker group,
 * whichever the work's mode selects. */
u32 btlTargetSelectDraw(u32 job)
{
    BtlTargetSelectWork *work = (BtlTargetSelectWork *)jobGetWork(job);

    if (work->mode != BTL_TARGET_SELECT_DRAW_NONE) {
        if (work->mode != BTL_TARGET_SELECT_DRAW_PANEL) {
            if (work->mode == BTL_TARGET_SELECT_DRAW_MARKERS) {
                btlTargetSelectDrawMarkers(work->base.secondary);
            }
        } else {
            btlTargetSelectDrawPanel(work->base.primary);
        }
    }
    return 0;
}

} /* extern "C" */
