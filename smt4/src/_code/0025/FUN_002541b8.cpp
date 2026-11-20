#include "map/MapEffectReservation.h"

extern "C" {
extern MapEffectReservationState g_entryTableInfo;
extern MapEffectInstance g_namedEntryTable[];

// Set the frame range of the first live map effect created from the resource and deactivate it.
void FUN_002541b8(u32 resource, u16 first, u16 second)
{
    for (s32 i = 0; i < g_entryTableInfo.count; i++) {
        if (g_namedEntryTable[i].resource == resource) {
            g_namedEntryTable[i].first = first;
            g_namedEntryTable[i].second = second;
            g_namedEntryTable[i].active = 0;
            return;
        }
    }
}

} /* extern "C" */
