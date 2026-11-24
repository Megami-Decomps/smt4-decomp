/* Sets the two halfword parameters of the entry with id `id` in the entry table. */
#include "map/MapEffectReservation.h"
#include "common.h"

extern "C" {
void entrySetParams(s32 id, u16 first, u16 second)
{
    for (s32 i = 0; i < g_entryTableInfo.count; i++) {
        if (g_namedEntryTable[i].resource == (u32)id) {
            g_namedEntryTable[i].state.firstParameter = first;
            g_namedEntryTable[i].state.secondParameter = second;
            return;
        }
    }
}
}
