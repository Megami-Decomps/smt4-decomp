#include "common.h"
#include "shop/ShopScreen.h"
#include "shop/ShopMenuData.h"

extern "C" {
void buttonHelpSetPreset(u32 preset);
u32 gameFlagIsSet(u32 flag);

// Choose the help layout for the current selection page and its availability state.
void buttonHelpSelectMenuPreset(const void* owner)
{
    struct HelpSelectionView {
        u8 unk00[0x10];
        s32 alternateLayout;
        u8 forceOverride;
        u8 unk15[3];
        s32 context;
        u8 unk1C[0x844];
        s32 page;
        s32 selection;
    };
    const HelpSelectionView* work = static_cast<const HelpSelectionView*>(owner);
    u8 preset;
    if (work->page == 8) {
        ShopHelpSelectionPresets selectionPresets = DAT_004074a4.selection;
        preset = selectionPresets.values[work->selection];
    } else {
        ShopHelpPagePresets normalPresets = DAT_004074a4.normal;
        ShopHelpPagePresets alternatePresets = DAT_004074a4.alternate;
        if (work->alternateLayout == 1) {
            preset = alternatePresets.values[work->page];
            if (work->forceOverride || work->context == 8 || !gameFlagIsSet(0x410)) {
                if (work->page == 0) {
                    preset = 0x86;
                } else if (work->page == 3) {
                    preset = 0x87;
                }
            }
        } else {
            preset = normalPresets.values[work->page];
            if ((work->forceOverride || work->context == 8 || !gameFlagIsSet(0x410)) &&
                work->page == 0) {
                preset = 0x78;
            }
        }
    }
    buttonHelpSetPreset(preset);
}
}
