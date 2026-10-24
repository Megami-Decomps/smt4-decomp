#include "map/MapEffectReservation.h"

extern "C" {
extern MapEffectReservationState DAT_00447a28;
extern MapEffectInstance DAT_004a1264[];

// Set the frame range of the first live map effect created from the resource and deactivate it.
void FUN_002541b8(u32 resource, u16 first, u16 second)
{
    for (s32 i = 0; i < DAT_00447a28.count; i++) {
        if (DAT_004a1264[i].resource == resource) {
            DAT_004a1264[i].first = first;
            DAT_004a1264[i].second = second;
            DAT_004a1264[i].active = 0;
            return;
        }
    }
}

} /* extern "C" */
