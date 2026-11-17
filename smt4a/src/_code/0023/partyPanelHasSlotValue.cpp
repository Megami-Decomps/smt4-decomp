#include "ui/PartyPanelStateA.h"
extern "C" {


u32 partyPanelHasSlotValue(u32 unused, s32 slot, s32 group, s32 row)
{
    u32 result = 0;
    if (group != 0) {
        s32 index = (group - 1) * 4 + slot;
        s32 base = g_partyPanel->alternate == 0 ? row * 12 : 0;
        if (g_partyPanel->entries[index + base].available != 0) {
            result = 1;
        }
    } else if (g_partyPanel->activeSlots[slot] != 0) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
