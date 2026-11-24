/* NON_MATCHING: 12 lines. Only the second toggle differs: retail addresses the flags via r1 and uses r2 for the flag word; the build uses r4 and r0 instead. */
#include "common.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"
#include "battle/btlHelp.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"
#include "battle/DebugPanel.h"

enum {
    BTL_MAIN_FLAG_DEBUG_OWNER = 0x100,
    BTL_UNIT_FLAG_DEBUG_OWNER = 0x40000000,
};

extern "C" {
extern u32 DAT_004342d4;
extern u32 DAT_004342d8;
extern u32 DAT_004342e0;
extern u32 DAT_004342e4;
extern u32 DAT_004342e8;
extern u32 DAT_004342ec;
extern u32 DAT_004342f0;
extern f32 DAT_00434310;
extern f32 DAT_00434314;
extern f32 DAT_00434318;
extern u32 DAT_0043431c;
extern f32 DAT_00434320;
extern u32 DAT_00434324;
extern u32 DAT_00434328;
extern f32 DAT_0043432c;
extern u32 DAT_00434330;
extern u32 DAT_00434334;
extern u32 DAT_00434338;
extern u32 DAT_0043433c;
extern u32 DAT_00434340;
extern u32 DAT_00434344;
extern u32 DAT_00434348;
extern u32 DAT_0043434c;
extern u32 DAT_00434350;
extern u32 DAT_00434354;
extern u32 DAT_00439cec;
extern f32 DAT_00493554[3];

void workSetScalarParameter(BtlCamera *work, f32 value);

static __inline void listBoxStoreFloat(u32 box, u32 item, f32 *destination)
{
    *destination = *(f32 *)asdListBoxGetItemText((void *)box, item);
}

static __inline void listBoxStoreValue(u32 box, u32 item, u32 *destination)
{
    *destination = *asdListBoxGetItemValuePtr((void *)box, item);
}

/* Applies an edited setting from the attack-camera debug menu. */
void btlDebugApplyAttackCameraMenuEdit(BattleDebugPanelWork *menu, BtlMainState *battle, u32 index)
{
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(menu->panelJob, index) != 0)
            g_btlMain->flags |= BTL_MAIN_FLAG_DEBUG_OWNER;
        else
            g_btlMain->flags &= ~BTL_MAIN_FLAG_DEBUG_OWNER;
        return;
    case 1:
        workSetScalarParameter(g_btlMain, *(f32 *)asdListBoxGetItemText((void *)menu->panelJob, index));
        return;
    case 2:
        if (listBoxItemHasOwner(menu->panelJob, index) != 0)
            battle->editorControl.flags |= BTL_UNIT_FLAG_DEBUG_OWNER;
        else
            battle->editorControl.flags &= ~BTL_UNIT_FLAG_DEBUG_OWNER;
        return;
    case 3:
        listBoxStoreFloat(menu->panelJob, index, &DAT_00493554[0]);
        return;
    case 4:
        listBoxStoreFloat(menu->panelJob, index, &DAT_00493554[2]);
        return;
    case 5:
        listBoxStoreFloat(menu->panelJob, index, &DAT_00434310);
        return;
    case 6:
        listBoxStoreFloat(menu->panelJob, index, &DAT_00434314);
        return;
    case 7:
        listBoxStoreFloat(menu->panelJob, index, &DAT_00434318);
        return;
    case 8:
        listBoxStoreValue(menu->panelJob, index, &DAT_0043431c);
        return;
    case 9:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342d4);
        return;
    case 10:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342d8);
        return;
    case 0xb:
        listBoxStoreFloat(menu->panelJob, index, &DAT_00434320);
        return;
    case 0xc:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434324);
        return;
    case 0xd:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342e0);
        return;
    case 0xe:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434328);
        return;
    case 0xf:
        listBoxStoreFloat(menu->panelJob, index, &DAT_0043432c);
        return;
    case 0x10:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434330);
        return;
    case 0x11:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342e4);
        return;
    case 0x12:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434334);
        return;
    case 0x13:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434338);
        return;
    case 0x14:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342e8);
        return;
    case 0x15:
        listBoxStoreValue(menu->panelJob, index, &DAT_0043433c);
        return;
    case 0x16:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434340);
        return;
    case 0x17:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342ec);
        return;
    case 0x18:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434344);
        return;
    case 0x19:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434348);
        return;
    case 0x1a:
        listBoxStoreValue(menu->panelJob, index, &DAT_0043434c);
        return;
    case 0x1b:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434350);
        return;
    case 0x1c:
        listBoxStoreValue(menu->panelJob, index, &DAT_00434354);
        return;
    case 0x1d:
        listBoxStoreValue(menu->panelJob, index, &DAT_00439cec);
        return;
    case 0x1e:
        listBoxStoreValue(menu->panelJob, index, &DAT_004342f0);
        return;
    default:
        return;
    }
}

} /* extern "C" */
