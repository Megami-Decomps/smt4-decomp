/* NON_MATCHING: initial loop counters and redundant widget zero/one register materialization differ. */
#include "ui/PartyPanelState.h"
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/UnitStats.h"
#include "gamedata/SaveSlotTableIV.h"

static void setWidgetExcluded(PartyPanelWidget *widget, u8 excluded)
{
    widget->marked = excluded;
}
extern "C" {
const StatBlock *partyMemberFindById(u16);
const StatBlock *gameGetUnitRecord(s32);
void __aeabi_memset4(void *, u32, s32);

void FUN_002e36f8()
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *slots = gameGetSlotTable();
    for (s32 i = 0; i < 4; ++i) {
        panel->activeSlots[i] = 0;
        setWidgetExcluded(panel->characters[i], 0);
    }
    for (s32 i = 0; i < 24; ++i) {
        panel->entries[i].available = 0;
        setWidgetExcluded(panel->demons[i], 0);
    }
    __aeabi_memset4(panel->activeSlots, 4, 1);
    panel->activeSlots[0] = 0;
    for (s32 i = 0; i < 24; ++i) {
        if (static_cast<s32>(panel->entries[i].packedIndex) < 0)
            panel->entries[i].available = 1;
    }
    for (s32 i = 0; i < panel->fusionParentCount; ++i) {
        s32 id = panel->fusionParentIds[i];
        if (id < 0)
            continue;
        const StatBlock *excluded = partyMemberFindById(id);
        if (!excluded)
            continue;
        for (s32 slot = 0; slot < 3; ++slot) {
            if (slots->active[slot] >= 0 && gameGetUnitRecord(slots->active[slot])->id == excluded->id) {
                panel->activeSlots[slot + 1] = 1;
                setWidgetExcluded(panel->characters[slot + 1], 1);
            }
        }
        for (s32 slot = 0; slot < 24; ++slot) {
            s32 index = panel->entries[slot].packedIndex;
            if (index >= 0 && gameGetUnitRecord(index)->id == excluded->id) {
                panel->entries[slot].available = 1;
                setWidgetExcluded(panel->demons[slot], 1);
            }
        }
    }
}
}
