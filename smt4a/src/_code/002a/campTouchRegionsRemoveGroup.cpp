#include "camp/CampStateA.h"

extern "C" {



int ifTouchRegionRemove(void);
int uiListGetVisibleCount(u32 group);

/* Removes the list screen's touch regions: the scroll bar's and every used row's for `group`; with `keep` clear it also runs two trailing ifTouchRegionRemove calls. */
void campTouchRegionsRemoveGroup(u32 group, int keep)
{
    CampStateA *block = g_camp;
    int i;

    ifTouchRegionRemove();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    block->touch.scrollRegions[0] = -1;
    block->touch.scrollRegions[1] = -1;
    block->touch.scrollRegions[2] = -1;
    block->touch.scrollRegions[3] = -1;
    block->touch.scrollRegions[4] = -1;
    i = 0;
    if (uiListGetVisibleCount(group) > 0) {
        do {
            if (block->touch.rowRegions[i] >= 0) {
                ifTouchRegionRemove();
                block->touch.rowRegions[i] = -1;
            }
            i++;
        } while (uiListGetVisibleCount(group) > i);
    }
    if (keep == 0) {
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
}

} /* extern "C" */
