#include "shard/W6_W6Match5_PairedAvailability.h"
#include "shard/FUN_002896bc.h"

extern "C" {
extern AvailabilityState DAT_004d9758;
extern AvailabilityState DAT_004d976c;

u32 FUN_002896bc(void)
{
    if (availabilityStateReady(&DAT_004d9758)) {
        if (availabilityStateReady(&DAT_004d976c))
            return 1;
    }
    return 0;
}
}
