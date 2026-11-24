#include "ui/PartyPanelStateA.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

struct PanelSlotOwners {
    u8 unk0000[0x1c9f];
    s8 owners[4];
};

extern "C" {
void* gameGetSlotTable(void);
u32 btlItemComputeValues(u32 owner, u32 itemId, u32* first, u32* second);
void pair40Set(PartyPanelWidget* widget, u32 first, u32 second);
}

/* Updates the item-effect values of the selected active-party or stock unit and its preview widget. */
extern "C" void partyPanelRefreshSelectedItemValues(void *selector, s32 gridSelection)
{
    PartyPanelStateA *panel = g_partyPanel;
    PanelSlotOwners *slots = (PanelSlotOwners *)gameGetSlotTable();
    u32 owner = 0;
    u32 first = 0;
    u32 second = 0;
    s32 index;
    if (gridSelection == 0 && listCursorGetRowIfUnblocked(selector) < 1) {
        index = listCursorGetRowOfChildIfUnblocked(selector);
        if (index == 0) {
            btlItemComputeValues((u32)-1, panel->previewItem, &first, &second);
        } else {
            btlItemComputeValues((u32)slots->owners[index], panel->previewItem, &first, &second);
            owner = (u32)slots->owners[index];
        }
        pair40Set(panel->characters[index], first, second);
        statusPreviewMpChange(first, second);
        partyPanelPreviewStatItem(owner, index, 0);
    } else {
        if (gridSelection) {
            if (panel->alternate) {
                index = listCursorGetRowOfChildIfUnblocked(selector);
                index += listCursorGetRowIfUnblocked(selector) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(selector) * 4 + panel->page * 12;
                index += listCursorGetRowOfChildIfUnblocked(selector);
            }
        } else {
            if (panel->alternate) {
                index = listCursorGetRowOfChildIfUnblocked(selector);
                index += listCursorGetRowIfUnblocked(selector) * 4;
            } else {
                index = listCursorGetRowIfUnblocked(selector) * 4 + panel->page * 12;
                index += listCursorGetRowOfChildIfUnblocked(selector);
            }
            index -= 4;
        }
        btlItemComputeValues(panel->entries[index].packedIndex, panel->previewItem, &first, &second);
        pair40Set(panel->demons[index], first, second);
        statusPreviewMpChange(first, second);
        partyPanelPreviewStatItem(panel->entries[index].packedIndex, index, 1);
    }
}
