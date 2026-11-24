#include "ui/PartyPanelState.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {
s32 listCursorGetRowIfUnblocked(void *selection); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 objectPartRunUnlessLocked(void *selection); // declcheck: local (the shared declaration does not compile here or changes this unit)
void btlItemComputeValues(s32 unit, u16 item, s32 *first, s32 *second); // declcheck: local (the shared declaration does not compile here or changes this unit)
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_00298d28(s32 first, s32 second); // declcheck: local (the shared declaration does not compile here or changes this unit)
void partyPanelPreviewStatItem(s32 unit, s32 index, u32 isStock); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Updates the item-effect values of the selected active-party or stock unit and its preview widget. */
void partyPanelRefreshSelectedItemValues(void *selection, s32 stockOnly)
{
    PartyPanelState *panel = g_partyPanel;
    SaveSlotTableIV *slots = gameGetSlotTable();
    s32 unit = 0;
    s32 first = 0;
    s32 second = 0;
    s32 index;
    if (stockOnly == 0 && listCursorGetRowIfUnblocked(selection) < 1) {
        index = objectPartRunUnlessLocked(selection);
        if (index == 0) {
            btlItemComputeValues(-1, panel->previewItem, &first, &second);
        } else {
            btlItemComputeValues(slots->active[index - 1], panel->previewItem, &first, &second);
            unit = slots->active[index - 1];
        }
        pair40Set(panel->characters[index], first, second);
        FUN_00298d28(first, second);
        partyPanelPreviewStatItem(unit, index, 0);
    } else {
        if (stockOnly) {
            if (panel->alternate) {
                index = objectPartRunUnlessLocked(selection);
                index += listCursorGetRowIfUnblocked(selection) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(selection) * 4 + panel->page * 12;
                index += objectPartRunUnlessLocked(selection);
            }
        } else {
            if (panel->alternate) {
                index = objectPartRunUnlessLocked(selection);
                index += listCursorGetRowIfUnblocked(selection) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(selection) * 4 + panel->page * 12;
                index += objectPartRunUnlessLocked(selection);
            }
            index -= 4;
        }
        btlItemComputeValues(panel->entries[index].packedIndex, panel->previewItem, &first, &second);
        pair40Set(panel->demons[index], first, second);
        FUN_00298d28(first, second);
        partyPanelPreviewStatItem(panel->entries[index].packedIndex, index, 1);
    }
}
}
