#include "camp/CampStateA.h"

extern "C" {



int ifTouchRegionRemove(void);

/* Releases the three unit panels' touch regions (four per unit), then clears `unitSlotsReady`. */
void campReleaseSlotTouchRegions(void)
{
    CampStateA *block = g_camp;
    int i;

    for (i = 0; i < 3; i++) {
        block->touch.unitRegions[i] = -1;
        block->touch.unitSlotRegions[i][0] = -1;
        block->touch.unitSlotRegions[i][1] = -1;
        block->touch.unitSlotRegions[i][2] = -1;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
    block->unitSlotsReady = 0;
}

} /* extern "C" */
