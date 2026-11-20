#include "ui/PartyPanelStateA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
void __aeabi_memset4(void *, u32 bytes, s32 value);
void partyWidgetSetTransitionKind(PartyPanelWidget *widget, u8 value);

/* Marks the party rows and stock cells that hold a demon already picked as a fusion parent, and the empty
 * stock cells. */
void partyPanelRefreshFilterMarks(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *order = gameGetSlotTable();
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
    for (s32 index = 0; index < 24; ++index) {
        if ((s32)panel->entries[index].packedIndex < 0) { /* the index is signed */
            panel->entries[index].available = 1;
        }
    }
    for (s32 filter = 0; filter < panel->fusionParentCount; ++filter) {
        s32 id = panel->fusionParentIds[filter];
        if (id < 0) {
            continue;
        }
        SlotRecordA *record = slotRecordFindById((u16)id);
        if (record == NULL) {
            continue;
        }
        for (s32 index = 0; index < 3; ++index) {
            s32 slot = order->reserve[index];
            if (slot >= 0 && gameGetSlotRecord(slot)->id == record->id) {
                panel->activeSlots[index + 1] = 1;
                partyWidgetSetTransitionKind(panel->characters[index + 1], 1);
            }
        }
        for (s32 index = 0; index < 24; ++index) {
            s32 slot = panel->entries[index].packedIndex;
            if (slot >= 0 && gameGetSlotRecord(slot)->id == record->id) {
                panel->entries[index].available = 1;
                partyWidgetSetTransitionKind(panel->demons[index], 1);
            }
        }
    }
}
}
