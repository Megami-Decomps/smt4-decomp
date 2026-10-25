#include "common.h"
#include "shop/ShopScreen.h"

union HelpSelectionPresets {
    u32 packed;
    u8 values[4];
};
struct HelpPagePresets {
    u8 values[12];
};
// These preset groups occupy the shared read-only menu constant block.
struct HelpPresetTables {
    HelpSelectionPresets selection;
    u8 unk04[0x100];
    HelpPagePresets normal;
    HelpPagePresets alternate;
};

extern "C" {
extern const HelpPresetTables DAT_004074a4;
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
        HelpSelectionPresets selectionPresets = DAT_004074a4.selection;
        preset = selectionPresets.values[work->selection];
    } else {
        HelpPagePresets normalPresets = DAT_004074a4.normal;
        HelpPagePresets alternatePresets = DAT_004074a4.alternate;
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
