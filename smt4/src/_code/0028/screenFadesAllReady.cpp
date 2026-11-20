#include "shard/W6_W6Match5_PairedAvailability.h"
#include "shard/W6_W6Match2_ScrollList.h"

extern "C" {
extern AvailabilityState g_screenFadeSlots;
extern AvailabilityState g_screenFadeAvailability;

u32 screenFadesAllReady(void)
{
    if (availabilityStateReady(&g_screenFadeSlots)) {
        if (availabilityStateReady(&g_screenFadeAvailability))
            return 1;
    }
    return 0;
}
}
