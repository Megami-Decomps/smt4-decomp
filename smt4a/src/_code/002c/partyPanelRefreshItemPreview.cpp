#include "ui/PartyPanelStateA.h"
#include "gamedata/SaveSlotTable.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {
void btlItemComputeValues(s32 unit, u16 item, s32* first, s32* second);
void pair40Set(PartyPanelWidget *widget, s32 first, s32 second);

void partyPanelRefreshItemPreview(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    SaveSlotTableA* slots = gameGetSlotTable();
    s32 first = 0;
    s32 second = 0;
    if (panel->activeSlots[0]) {
        btlItemComputeValues(-1, panel->previewItem, &first, &second);
        pair40Set(panel->characters[0], first, second);
    }
    for (s32 index = 0; index < 3; ++index) {
        s32 unit = slots->reserve[index];
        if (unit >= 0) {
            btlItemComputeValues(unit, panel->previewItem, &first, &second);
            pair40Set(panel->characters[index + 1], first, second);
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        s32 unit = static_cast<s32>(panel->entries[index].packedIndex);
        if (unit >= 0) {
            btlItemComputeValues(unit, panel->previewItem, &first, &second);
            pair40Set(panel->demons[index], first, second);
        }
    }
    if (panel->selection < 0) {
        statusPreviewMpChange(partyWidgetGetX(panel->characters[0]), partyWidgetGetCost(panel->characters[0]));
    } else {
        for (s32 index = 0; index < 24; ++index) {
            if (static_cast<s32>(panel->entries[index].packedIndex) == panel->selection) {
                statusPreviewMpChange(partyWidgetGetX(panel->demons[index]), partyWidgetGetCost(panel->demons[index]));
            }
        }
    }
}
}
