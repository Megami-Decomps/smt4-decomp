/* NON_MATCHING: retail reads each selected-widget value through separate pointer reloads; direct fields combine into LDRD. */
#include "ui/PartyPanelState.h"
#include "shard/Shard0031.h"

// The sortable preview table follows the published Apocalypse panel prefix.
struct PartyPanelPreviewWorkA {
    PartyPanelStateA panel;
    /* 0xA80 */ SelectedUnitListEntry units[24];
};
struct PartyPanelValueWidget {
    u8 unk00[0x40];
    /* 0x40 */ s32 first;
    /* 0x44 */ s32 second;
};
extern "C" {
extern PartyPanelPreviewWorkA* g_partyPanel;
PartyStatusSlots* gameGetSlotTable(void);
void btlItemComputeValues(s32 unit, u16 item, s32* first, s32* second);
void pair40Set(u32 widget, s32 first, s32 second);
void FUN_003344b4(s32 first, s32 second);

void FUN_002cc0c0(void)
{
    PartyPanelPreviewWorkA* work = g_partyPanel;
    PartyStatusSlots* slots = gameGetSlotTable();
    s32 first = 0;
    s32 second = 0;
    if (work->panel.animation.preview.protagonistAvailable) {
        btlItemComputeValues(-1, work->panel.preview.item, &first, &second);
        pair40Set(work->panel.handlesA[0], first, second);
    }
    for (s32 index = 0; index < 3; ++index) {
        s32 unit = slots->reserve[index];
        if (unit >= 0) {
            btlItemComputeValues(unit, work->panel.preview.item, &first, &second);
            pair40Set(work->panel.handlesA[index + 1], first, second);
        }
    }
    for (s32 index = 0; index < 24; ++index) {
        s32 unit = static_cast<s32>(work->units[index].packedIndex);
        if (unit >= 0) {
            btlItemComputeValues(unit, work->panel.preview.item, &first, &second);
            pair40Set(work->panel.handlesB[index], first, second);
        }
    }
    if (work->panel.preview.selection < 0) {
        PartyPanelValueWidget* widget = reinterpret_cast<PartyPanelValueWidget*>(work->panel.handlesA[0]);
        FUN_003344b4(widget->first, widget->second);
    } else {
        for (s32 index = 0; index < 24; ++index) {
            if (static_cast<s32>(work->units[index].packedIndex) == work->panel.preview.selection) {
                PartyPanelValueWidget* widget = reinterpret_cast<PartyPanelValueWidget*>(work->panel.handlesB[index]);
                FUN_003344b4(widget->first, widget->second);
            }
        }
    }
}
}
