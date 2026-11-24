#include "camp/CampStateA.h"

extern "C" {
u16 ifTouchRegionAddRequested(u32 table, u32 image);
s32 gridNavigationGetItemCount(const void *controller);
s32 uiListGetVisibleCount(const void *controller);

/* Registers the list screen's touch regions: the scroll bar (when the list overflows), the rows and,
 * in mode 0, the two extra buttons. */
void campListRegisterTouchRegions(const void *controller, s32 mode)
{
    CampStateA *state = g_camp;
    if (gridNavigationGetItemCount(controller) > uiListGetVisibleCount(controller)) {
        if (mode == 0) {
            state->touch.scrollRegions[0] = ifTouchRegionAddRequested(20, 0x572);
            state->touch.scrollRegions[1] = ifTouchRegionAddRequested(20, 0x570);
            state->touch.scrollRegions[2] = ifTouchRegionAddRequested(20, 0x571);
        } else {
            state->touch.scrollRegions[0] = ifTouchRegionAddRequested(20, 0x56d);
            state->touch.scrollRegions[1] = ifTouchRegionAddRequested(20, 0x56e);
            state->touch.scrollRegions[2] = ifTouchRegionAddRequested(20, 0x56f);
        }
    }
    if (mode == 0) {
        for (s32 index = 0; index < uiListGetVisibleCount(controller); ++index) {
            if (index >= gridNavigationGetItemCount(controller)) {
                break;
            }
            state->touch.rowRegions[index] = ifTouchRegionAddRequested(20, index + 0x40f);
        }
        state->touch.scrollRegions[3] = ifTouchRegionAddRequested(20, 0x576);
        state->touch.scrollRegions[4] = ifTouchRegionAddRequested(20, 0x577);
    } else {
        for (s32 index = 0; index < uiListGetVisibleCount(controller); ++index) {
            if (index >= gridNavigationGetItemCount(controller)) {
                return;
            }
            state->touch.rowRegions[index] = ifTouchRegionAddRequested(20, index + 0x40d);
        }
    }
}
}
