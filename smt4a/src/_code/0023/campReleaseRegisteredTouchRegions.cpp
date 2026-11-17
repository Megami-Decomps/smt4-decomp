#include "camp/CampStateA.h"

extern "C" {

#define SLOT_COUNT 0x25



int ifTouchRegionRemove(void);
int ifTouchResetRecord(void);

/* If any touch region is registered, releases every used region id (setting it to -1), clears its flags and runs ifTouchResetRecord. */
void campReleaseRegisteredTouchRegions(void)
{
    CampStateA *registry = g_camp;
    int i;

    if (registry->touchRegionCount == 0) {
        return;
    }
    i = 0;
    do {
        if (registry->touchRegions[i] >= 0) {
            ifTouchRegionRemove();
            registry->touchRegions[i] = -1;
        }
        i++;
    } while (i < SLOT_COUNT);
    registry->touchRegionCount = 0;
    registry->unitSlotsReady = 0;
    ifTouchResetRecord();
}

} /* extern "C" */
