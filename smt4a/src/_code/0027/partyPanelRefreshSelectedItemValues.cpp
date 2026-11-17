/* NON_MATCHING: factored grid flow emits 91 rather than 113 rows; selector/output addresses stay live and the frame is 12 rather than 8 bytes. */
#include "ui/PartyPanelStateA.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

struct PanelValuePair {
    u32 first;
    u32 second;
};
struct PanelSlotOwners {
    u8 unk0000[0x1c9f];
    s8 owners[4];
};

extern "C" {
void* gameGetSlotTable(void);
u32 btlItemComputeValues(u32 owner, u32 itemId, u32* first, u32* second);
void pair40Set(PartyPanelWidget* widget, u32 first, u32 second);
void FUN_002cbca8(u32 owner, s32 index, u32 grid);
}

namespace {
inline s32 getPanelGridIndex(void* selector, PartyPanelStateA* panel)
{
    if (panel->alternate != 0) {
        const s32 row = listCursorGetRowOfChildIfUnblocked(selector);
        return row + listCursorGetRowIfUnblocked(selector) * 4;
    }
    s32 index = listCursorGetRowIfUnblocked(selector) * 4 + panel->page * 12;
    index += listCursorGetRowOfChildIfUnblocked(selector);
    return index;
}
}

extern "C" void partyPanelRefreshSelectedItemValues(void* selector, s32 gridSelection)
{
    PartyPanelStateA* panel = g_partyPanel;
    PanelSlotOwners* slots = static_cast<PanelSlotOwners*>(gameGetSlotTable());
    u32 owner = 0;
    PanelValuePair values = {0, 0};
    s32 index;
    u32 valueSource;
    if (gridSelection == 0 && listCursorGetRowIfUnblocked(selector) < 1) {
        index = listCursorGetRowOfChildIfUnblocked(selector);
        if (index != 0) {
            btlItemComputeValues(static_cast<u32>(slots->owners[index]), panel->previewItem,
                         &values.first, &values.second);
            owner = static_cast<u32>(slots->owners[index]);
        } else {
            btlItemComputeValues(static_cast<u32>(-1), panel->previewItem, &values.first, &values.second);
        }
        pair40Set(panel->characters[index], values.first, values.second);
        FUN_003344b4(values.first, values.second);
        valueSource = 0;
    } else {
        index = getPanelGridIndex(selector, panel);
        if (gridSelection == 0) {
            index -= 4;
        }
        btlItemComputeValues(panel->entries[index].packedIndex, panel->previewItem, &values.first, &values.second);
        pair40Set(panel->demons[index], values.first, values.second);
        FUN_003344b4(values.first, values.second);
        owner = panel->entries[index].packedIndex;
        valueSource = 1;
    }
    FUN_002cbca8(owner, index, valueSource);
}
