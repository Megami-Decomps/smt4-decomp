#include "map/MapStateSlots.h"




extern "C" {
extern MapStateSlots *g_mapStateSlots;

// Report whether any active slot is in state two.
s32 FUN_002eb134(void)
{
    s32 found = 0;
    for (s32 index = 0; index < 32; ++index) {
        MapStateSlot *slot = &g_mapStateSlots->slots[index];
        if (slot->active != 0 && slot->state == 2) {
            found = 1;
            break;
        }
    }
    return found;
}
}
