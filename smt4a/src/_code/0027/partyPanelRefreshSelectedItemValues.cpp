/* NON_MATCHING: factored grid flow emits 91 rather than 113 rows; selector/output addresses stay live and the frame is 12 rather than 8 bytes. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"
#include "util/FUN_002a4878.h"

struct Pair40;
struct PanelValuePair {
    u32 first;
    u32 second;
};
struct PanelOwnerEntry {
    u32 owner;
    u32 unk04;
};
struct PanelValueView {
    u8 unk000[0x2c];
    s32 page;
    u8 unk030[6];
    u16 itemId;
    u8 unk038[10];
    u8 alternateLayout;
    u8 unk043[0x9cd];
    Pair40* primaryValues[4];
    Pair40* gridValues[24];
    PanelOwnerEntry gridEntries[24];
};
struct PanelSlotOwners {
    u8 unk0000[0x1c9f];
    s8 owners[4];
};

extern "C" {
extern PanelValueView* g_partyPanel;
void* gameGetSlotTable(void);
s32 FUN_002a4894(void* selector);
u32 btlItemComputeValues(u32 owner, u32 itemId, u32* first, u32* second);
void pair40Set(Pair40* object, u32 first, u32 second);
void FUN_002cbca8(u32 owner, s32 index, u32 grid);
}

namespace {
inline s32 getPanelGridIndex(void* selector, PanelValueView* panel)
{
    if (panel->alternateLayout != 0) {
        const s32 row = FUN_002a4878(selector);
        return row + FUN_002a4894(selector) * 4;
    }
    s32 index = FUN_002a4894(selector) * 4 + panel->page * 12;
    index += FUN_002a4878(selector);
    return index;
}
}

extern "C" void partyPanelRefreshSelectedItemValues(void* selector, s32 gridSelection)
{
    PanelValueView* panel = g_partyPanel;
    PanelSlotOwners* slots = static_cast<PanelSlotOwners*>(gameGetSlotTable());
    u32 owner = 0;
    PanelValuePair values = {0, 0};
    s32 index;
    u32 valueSource;
    if (gridSelection == 0 && FUN_002a4894(selector) < 1) {
        index = FUN_002a4878(selector);
        if (index != 0) {
            btlItemComputeValues(static_cast<u32>(slots->owners[index]), panel->itemId,
                         &values.first, &values.second);
            owner = static_cast<u32>(slots->owners[index]);
        } else {
            btlItemComputeValues(static_cast<u32>(-1), panel->itemId, &values.first, &values.second);
        }
        pair40Set(panel->primaryValues[index], values.first, values.second);
        FUN_003344b4(values.first, values.second);
        valueSource = 0;
    } else {
        index = getPanelGridIndex(selector, panel);
        if (gridSelection == 0) {
            index -= 4;
        }
        btlItemComputeValues(panel->gridEntries[index].owner, panel->itemId, &values.first, &values.second);
        pair40Set(panel->gridValues[index], values.first, values.second);
        FUN_003344b4(values.first, values.second);
        owner = panel->gridEntries[index].owner;
        valueSource = 1;
    }
    FUN_002cbca8(owner, index, valueSource);
}
