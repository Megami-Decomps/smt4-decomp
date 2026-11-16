#include "shard/W6_W6Match5_PairedAvailability.h"
#include "code/Code002e.h"

extern "C" {
extern AvailabilityState DAT_006357d8;
extern AvailabilityState g_screenFadeAvailability;

u32 pairedAvailabilityBothReady(void)
{
    if (availabilityStateReady(&DAT_006357d8)) {
        if (availabilityStateReady(&g_screenFadeAvailability))
            return 1;
    }
    return 0;
}
}
