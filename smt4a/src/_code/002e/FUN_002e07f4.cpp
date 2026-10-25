#include "shard/W6_W6Match5_PairedAvailability.h"
#include "util/FUN_002e07f4.h"

extern "C" {
extern AvailabilityState DAT_006357d8;
extern AvailabilityState DAT_006357ec;

u32 FUN_002e07f4(void)
{
    if (availabilityStateReady(&DAT_006357d8)) {
        if (availabilityStateReady(&DAT_006357ec))
            return 1;
    }
    return 0;
}
}
