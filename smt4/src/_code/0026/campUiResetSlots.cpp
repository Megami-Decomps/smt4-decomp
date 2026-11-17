#include "camp/CampState.h"

extern "C" {

int ifTouchRegionRemove(void);

/* Resets the three unit panels' touch regions: all ids to -1 and four ifTouchRegionRemove calls per unit; then clears `unitSlotsReady`. */
void campUiResetSlots(void)
{
    CampState *state = g_camp;
    int i = 0;

    do {
        state->touch.unitRegions[i] = -1;
        state->touch.unitSlotRegions[i][0] = -1;
        state->touch.unitSlotRegions[i][1] = -1;
        state->touch.unitSlotRegions[i][2] = -1;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        i++;
    } while (i < 3);
    state->unitSlotsReady = 0;
}

} /* extern "C" */
