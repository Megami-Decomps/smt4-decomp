#include "shard/W6_W6Match5_PairedAvailability.h"

extern "C" {
extern AvailabilityState g_screenFadeSlots;
extern AvailabilityState g_screenFadeAvailability;

u32 screenFadeIsBusy(void)
{
    if (!availabilityStateReady(&g_screenFadeSlots)) {
        return 1;
    }
    if (!availabilityStateReady(&g_screenFadeAvailability)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
