#include "camp/CampState.h"

extern "C" {
s32 gridNavigationGetItemCount(const void *unit);
s32 uiListGetVisibleCount(const void *unit);
u32 ifTouchRegionAddRequested(u32 group, u32 resource);

/* Registers the list screen's touch regions: the scroll bar (when the list overflows), the rows and,
 * in mode 0, the two extra buttons. */
void campListRegisterTouchRegions(const void *unit, s32 mode)
{
    CampState *camp = g_camp;
    if (gridNavigationGetItemCount(unit) > uiListGetVisibleCount(unit)) {
        if (mode == 0) {
            camp->touch.scrollRegions[0] = ifTouchRegionAddRequested(0x1d, 0x572);
            camp->touch.scrollRegions[1] = ifTouchRegionAddRequested(0x1d, 0x570);
            camp->touch.scrollRegions[2] = ifTouchRegionAddRequested(0x1d, 0x571);
        } else {
            camp->touch.scrollRegions[0] = ifTouchRegionAddRequested(0x1d, 0x56d);
            camp->touch.scrollRegions[1] = ifTouchRegionAddRequested(0x1d, 0x56e);
            camp->touch.scrollRegions[2] = ifTouchRegionAddRequested(0x1d, 0x56f);
        }
    }
    if (mode == 0) {
        for (s32 i = 0; i < uiListGetVisibleCount(unit); ++i) {
            if (gridNavigationGetItemCount(unit) <= i) {
                break;
            }
            camp->touch.rowRegions[i] = ifTouchRegionAddRequested(0x1d, i + 0x40f);
        }
        camp->touch.scrollRegions[3] = ifTouchRegionAddRequested(0x1d, 0x576);
        camp->touch.scrollRegions[4] = ifTouchRegionAddRequested(0x1d, 0x577);
    } else {
        for (s32 i = 0; i < uiListGetVisibleCount(unit); ++i) {
            if (gridNavigationGetItemCount(unit) <= i) {
                return;
            }
            camp->touch.rowRegions[i] = ifTouchRegionAddRequested(0x1d, i + 0x40d);
        }
    }
}
}
