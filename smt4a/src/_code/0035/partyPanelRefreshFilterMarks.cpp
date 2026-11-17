/* NON_MATCHING: O3 unrolls the four-character reset and partially unrolls the 24-slot reset; matched widget writes reuse sl instead of retail's fresh r1 constant. O2 may retain retail's loops. */
#include "ui/PartyPanelStateA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
SlotRecordA *slotRecordFindById(u16 id);
void __aeabi_memset4(void *, u32 bytes, s32 value);

// Reset party-panel marks and match active party/storage slots against filter IDs.
void partyPanelRefreshFilterMarks(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA *order = gameGetSlotTable();
    for (s32 index = 0; index < 4; ++index) {
        panel->activeSlots[index] = 0;
        panel->characters[index]->marked = 0;
    }
    for (s32 index = 0; index < 24; ++index) {
        panel->entries[index].available = 0;
        panel->demons[index]->marked = 0;
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
        SlotRecordA *record = slotRecordFindById(static_cast<u16>(id));
        if (record == NULL) {
            continue;
        }
        for (s32 index = 0; index < 3; ++index) {
            s32 slot = order->reserve[index];
            if (slot >= 0 && gameGetSlotRecord(slot)->id == record->id) {
                panel->activeSlots[index + 1] = 1;
                panel->characters[index + 1]->marked = 1;
            }
        }
        for (s32 index = 0; index < 24; ++index) {
            s32 slot = panel->entries[index].packedIndex;
            if (slot >= 0 && gameGetSlotRecord(slot)->id == record->id) {
                panel->entries[index].available = 1;
                panel->demons[index]->marked = 1;
            }
        }
    }
}
}
