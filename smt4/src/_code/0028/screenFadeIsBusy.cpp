#include "shard/W6_W6Match5_PairedAvailability.h"

extern "C" {
extern AvailabilityState DAT_004d9758;
extern AvailabilityState g_screenFadeAvailability;

u32 screenFadeIsBusy(void)
{
    if (!availabilityStateReady(&DAT_004d9758)) {
        return 1;
    }
    if (!availabilityStateReady(&g_screenFadeAvailability)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
