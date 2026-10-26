/* NON_MATCHING: mode-panel base is formed after initialization rather than retained across it; selected-ID and owner registers differ. */
#include "classes/Obj4223f8.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
s32 utilityReturnSuccess(const void *state);
s32 stageAssetsLoaded();
void FUN_00233240(void *panel, s32 mode);
void buttonHelpSetPreset(u32 preset);
s32 flaggedValueHolderGetTotal(const SelectionFlags *selection);
void FUN_0029defc(s32 id, s32 mode);
void statusPanelSetOpen(s32 open);
void FUN_0029dfc0(s32 mode);

}

// Enter the compendium list once ready and synchronize the selected status-panel entry.
void Obj4223f8::enterList()
{
    Obj4223f8 *screen = this;
    struct Entry {
        u16 count;
        u16 unk02;
        u16 id;
        u8 unk06[0x16];
        u8 available;
        u8 unk1d[3];
    };
    // Entry storage and the remembered status ID extend beyond the class's documented prefix.
    struct ScreenEntryView {
        u8 unk000[0x14];
        s32 state;
        u32 timer;
        u8 unk01c[4];
        SelectionFlags selection;
        u8 unk02f[0x67];
        u8 transition[0x46]; // 0x096
        u8 panel[0x4c8]; // 0x0dc
        s8 mode; // 0x5a4
        u8 unk5a5[3];
        Entry entries[1280]; // 0x5a8
        u8 unkA5A8[8];
        u16 statusId; // 0xa5b0
    };
    typedef char ScreenEntryViewOffsetCheck[sizeof(Entry) == 0x20 && offsetof(ScreenEntryView, transition) == 0x96 && offsetof(ScreenEntryView, statusId) == 0xa5b0 ? 1 : -1];
    ScreenEntryView *view = reinterpret_cast<ScreenEntryView *>(screen);
    if (!screen->isScreenReady() || utilityReturnSuccess(view->transition))
        return;
    if (screen->flag5A4 == 1 && !stageAssetsLoaded())
        return;
    view->state = 1;
    view->timer = 0;
    FUN_00233240(view->panel, 0);
    FUN_00233240(view->panel, 1);
    if (view->mode == 0)
        buttonHelpSetPreset(0x2e);
    else if (view->mode == 1)
        buttonHelpSetPreset(0x46);
    if (view->entries[0].count != 0) {
        Entry *entries = view->entries;
        u16 id = entries[flaggedValueHolderGetTotal(&view->selection)].id;
        if (!entries[flaggedValueHolderGetTotal(&view->selection)].available)
            id = 0;
        if (!FUN_0029e0f8() || view->statusId == id)
            return;
        view->statusId = id;
        if (id) {
            FUN_0029defc(static_cast<s16>(id), 1);
            statusPanelSetOpen(1);
            return;
        }
    }
    FUN_0029dfc0(0);
}
