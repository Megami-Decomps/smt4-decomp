/* NON_MATCHING: the stock scan's loop index and trip count use r0/r1 instead of retail's r1/r0. */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitStats.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
const StatBlock *partyMemberFindById(u16); // declcheck: local (the shared declaration does not compile here or changes this unit)
void __aeabi_memset4(void *, u32, s32);

/* Marks the party rows and stock cells that hold a demon already picked as a fusion parent, and the empty
 * stock cells. */
void partyPanelRefreshFilterMarks()
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *order = gameGetSlotTable();
    for (s32 index = 0; index < 4; ++index) {
        panel->activeSlots[index] = 0;
        partyWidgetSetTransitionKind(panel->characters[index], 0);
    }
    for (s32 index = 0; index < 24; ++index) {
        panel->entries[index].available = 0;
        partyWidgetSetTransitionKind(panel->demons[index], 0);
    }
    __aeabi_memset4(panel->activeSlots, sizeof(panel->activeSlots), 1);
    panel->activeSlots[0] = 0;
    s32 stockIndex = 0;
    while (stockIndex < 24) {
        if ((s32)panel->entries[stockIndex].packedIndex < 0) {
            panel->entries[stockIndex].available = 1;
        }
        ++stockIndex;
    }
    for (s32 filter = 0; filter < panel->fusionParentCount; ++filter) {
        s32 id = panel->fusionParentIds[filter];
        if (id < 0) {
            continue;
        }
        const StatBlock *record = partyMemberFindById((u16)id);
        if (record == NULL) {
            continue;
        }
        for (s32 index = 0; index < 3; ++index) {
            s32 slot = order->active[index];
            if (slot >= 0 && gameGetUnitRecord(slot)->id == record->id) {
                panel->activeSlots[index + 1] = 1;
                partyWidgetSetTransitionKind(panel->characters[index + 1], 1);
            }
        }
        for (s32 index = 0; index < 24; ++index) {
            s32 slot = panel->entries[index].packedIndex;
            if (slot >= 0 && gameGetUnitRecord(slot)->id == record->id) {
                panel->entries[index].available = 1;
                partyWidgetSetTransitionKind(panel->demons[index], 1);
            }
        }
    }
}
}
