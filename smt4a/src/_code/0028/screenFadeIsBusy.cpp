#include "shard/W6_W6Match5_PairedAvailability.h"

extern "C" {
extern AvailabilityState DAT_006357d8;
extern AvailabilityState DAT_006357ec;

u32 screenFadeIsBusy(void)
{
    if (!availabilityStateReady(&DAT_006357d8)) {
        return 1;
    }
    if (!availabilityStateReady(&DAT_006357ec)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
