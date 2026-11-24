/* NON_MATCHING: signed disabled flag base matches; 64-bit mask loads and icon-loop scratch registers differ. */
#include "battle/BtlCommandMenuData.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlUI.h"
#include "battle/btlMain.h"
#include "ui/UiSpriteApi.h"
#include "battle/BattleHelpers_VariantB.h"

namespace {
}
extern "C" {
s32 ifTouchGetButtonHelpValue();
void sysPlaySe(u32 sound);
void buttonHelpSetText(s32 layer, u32 color);
void FUN_0020acd8(BtlUiObjCA *panel, u32 selection, u32 mode);
void btlCommandMenuEnterMode(BtlUiObjCA *panel, s32 state, s32 enabled);
void btlCommandMenuSetupLists(BtlUiObjCA *panel);

// Reset command icons and select the normal, disabled or special battle-panel transition.
void FUN_003363a8(BtlUiObjCA *panel, u32 selection, s8 first, u32 second)
{
    // These selection controls extend beyond the currently recovered widget prefix.
    struct CommandPanelView {
        u8 prefix[0x20];
        UiSpriteState main;
        u8 paddingAC[0x8C];
        UiSpriteState children[8];
        u8 padding598[0x8C0];
        UiSpriteState icons[6];
        u8 padding11A0[0x26DC];
        s32 mode;
        u8 padding3880[8];
        s32 savedState;
        u8 padding388C[4];
        u32 selection;
        u8 padding3894[0x1D];
        u8 first;
        s8 second;
        u8 padding38B3;
        s8 disabled;
    };
    CommandPanelView *work = reinterpret_cast<CommandPanelView *>(panel);
    work->first = first;
    work->second = second;
    work->selection = selection;
    btlCommandMenuSetupLists(panel);
    if (work->disabled == 0) {
        for (s32 index = 0; index < 6; ++index)
            uiSpriteSetImageKeyframe(&work->icons[index], 0, 0);
    }
    if (work->disabled != 0) {
        btlCommandMenuEnterMode(panel, 0x2A, 1);
        return;
    }
    if (btlScriptUnitHasFlags(btlGetMainState()) != 0 ||
        (btlGetMainState()->stateFlags64.bits & g_btlCommandMenuData.stateBlocked) != 0) {
        buttonHelpSetText(0, 0xF4F4F4FF);
        btlCommandMenuEnterMode(panel, 0x28, 1);
        if (ifTouchGetButtonHelpValue() != 0x3F && btlScriptUnitHasFlags(btlGetMainState()) != 0)
            sysPlaySe(0x3F);
        return;
    }
    if (work->mode == 0x17) {
        FUN_0020acd8(panel, work->selection, second);
        return;
    }
    uiSpriteSelectAnim(&work->main, 0x1B);
    for (s32 index = 0; index < 8; ++index)
        uiSpriteSelectAnim(&work->children[index], 0x1B);
    work->savedState = 0x11;
    btlCommandMenuEnterMode(panel, 0x10, 1);
}
}
