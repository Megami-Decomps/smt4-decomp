/* NON_MATCHING: only the stock-cost loop compare differs: retail loads the selection first (as here) but compares the stock unit with it (`cmp r1, r0`); written the other way round, armcc loads the stock unit first. */
#include "ui/PartyPanelState.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
void FUN_00298d28(u32 a, u32 b);
s32 appGetRemainingCapacity(u16 action);
s32 skillGetDiscountedCost(u16 action, u32 mode);
s32 skillApplyToTarget(u32 user, s32 target, u32 action, s32 *result);
s32 partyWidgetGetX(void *widget);
s32 partyWidgetGetCost(void *widget);
void partyWidgetSetValue(void *widget, s32 value);
void partyWidgetSetCost(void *widget, s32 cost);

void FUN_0026b7c0(void)
{
    PartyPanelState *panel = g_partyPanel;
    const SaveSlotTableIV *slots = gameGetSlotTable();
    s32 result = 0;
    if (panel->selection < 0) {
        partyWidgetSetCost(panel->characters[0], -skillGetDiscountedCost(panel->previewItem, 1));
    } else {
        for (s32 index = 0; index < 3; ++index) {
            if (slots->active[index] == panel->selection)
                partyWidgetSetCost(panel->characters[index + 1], -appGetRemainingCapacity(panel->previewItem));
        }
        for (s32 index = 0; index < 24; ++index) {
            if (panel->selection == static_cast<s32>(panel->entries[index].packedIndex))
                partyWidgetSetCost(panel->demons[index], -appGetRemainingCapacity(panel->previewItem));
        }
    }
    if (panel->activeSlots[0]) {
        skillApplyToTarget(panel->selection, -1, panel->previewItem, &result);
        partyWidgetSetValue(panel->characters[0], result);
    }
    for (s32 index = 0; index < 3; ++index) {
        if (slots->active[index] >= 0) {
            skillApplyToTarget(panel->selection, slots->active[index], panel->previewItem, &result);
            partyWidgetSetValue(panel->characters[index + 1], result);
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        if (static_cast<s32>(panel->entries[index].packedIndex) >= 0) {
            skillApplyToTarget(panel->selection, static_cast<s32>(panel->entries[index].packedIndex), panel->previewItem, &result);
            partyWidgetSetValue(panel->demons[index], result);
        }
    }
    if (panel->selection < 0) {
        FUN_00298d28(partyWidgetGetX(panel->characters[0]), partyWidgetGetCost(panel->characters[0]));
        return;
    }
    for (s32 index = 0; index < 24; ++index) {
        if (static_cast<s32>(panel->entries[index].packedIndex) == panel->selection)
            FUN_00298d28(partyWidgetGetX(panel->demons[index]), partyWidgetGetCost(panel->demons[index]));
    }
}
}
