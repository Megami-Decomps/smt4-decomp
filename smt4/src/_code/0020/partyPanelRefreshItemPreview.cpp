#include "ui/PartyPanelState.h"
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
extern PartyPanelState *g_partyPanel;
PartyDamageSlotsIV *gameGetSlotTable(void);
void btlItemComputeValues(s32 unit, u16 item, s32 *first, s32 *second);
s32 partyWidgetGetX(PartyPanelWidget *widget);
s32 partyWidgetGetCost(PartyPanelWidget *widget);
void FUN_00292be4(PartyPanelWidget *widget, s32 first, s32 second);
void FUN_00298d28(s32 x, s32 y);

/* Refresh all visible character and demon item values, then position the selection marker. */
void partyPanelRefreshItemPreview(void)
{
    PartyPanelState *panel = g_partyPanel;
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    s32 first = 0, second = 0;
    if (panel->availability.activeSlots[0] != 0) {
        btlItemComputeValues(-1, panel->previewItem, &first, &second);
        FUN_00292be4(panel->characters[0], first, second);
    }
    for (s32 index = 0; index < 3; ++index) {
        s32 unit = slots->active[index];
        if (unit >= 0) {
            btlItemComputeValues(unit, panel->previewItem, &first, &second);
            FUN_00292be4(panel->characters[index + 1], first, second);
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        s32 unit = static_cast<s32>(panel->previewUnits[index].packedIndex);
        if (unit >= 0) {
            btlItemComputeValues(unit, panel->previewItem, &first, &second);
            FUN_00292be4(panel->demons[index], first, second);
        }
    }
    if (panel->pendingSelection.selection < 0) {
        FUN_00298d28(partyWidgetGetX(panel->characters[0]), partyWidgetGetCost(panel->characters[0]));
        return;
    }
    for (s32 index = 0; index < 24; ++index) {
        if (static_cast<s32>(panel->previewUnits[index].packedIndex) == panel->pendingSelection.selection) {
            FUN_00298d28(partyWidgetGetX(panel->demons[index]), partyWidgetGetCost(panel->demons[index]));
        }
    }
}
}
