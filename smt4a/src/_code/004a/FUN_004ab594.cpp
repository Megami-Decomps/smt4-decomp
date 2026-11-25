/* NON_MATCHING: retail keeps the unrolled reserve-mask tests as generic sign-extended 64-bit ANDs (constants 2/4/8 in registers, mask loaded by ldrd through an add-immediate address, one extra callee-saved register); built folds them to constants. */
#include "battle/BtlUiGlobal.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_002cc9e0(BtlUiObjCA *widget, u32 mode);
u64 __aeabi_llsl(u64 value, u32 count);

/* The slot chosen from the reserve mask and from the active-party mask (-1 when none). */
struct PartySelection {
    s32 reserve;
    s32 active;
};

/* Compare the identities selected by reserve and active-party bit masks. Its one caller (btlUnitStartAction) passes the
 * UI block in r0; the body reads it from g_btlUi itself. */
u32 FUN_004ab594(BtlUiA *)
{
    BtlUiA *ui = g_btlUi.ui;
    if (FUN_002cc9e0(&ui->objC, 1) != 10)
        return ~0u;
    SaveSlotTableA *party = gameGetSlotTable();
    PartySelection chosen = {-1, -1};
    for (s32 i = -1; i < 3; ++i) {
        if (ui->selectedTargets & (1 << (i + 1))) {
            chosen.reserve = i;
            break;
        }
    }
    u64 activeMask = ui->selectionExtra;
    for (s32 i = 0; i < 24; ++i) {
        if (activeMask & __aeabi_llsl(1, i + 1))
            chosen.active = i;
    }
    s8 reserveId = -1;
    s8 activeId = -1;
    if (chosen.reserve >= 0)
        reserveId = party->reserve[chosen.reserve];
    if (chosen.active >= 0)
        activeId = party->party[chosen.active];
    return reserveId == activeId;
}
}
