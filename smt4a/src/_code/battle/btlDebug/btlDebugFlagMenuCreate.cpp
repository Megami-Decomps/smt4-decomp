#include "sys/RuntimeObjects.h"
#include "AsdSDK/Source/Util/AsdListBoxValueApi.h"
#include "battle/btlDebug.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/X14_BtlUiClose.h"
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

/* The debug flag menu screen: its list box. */
struct BattleFlagMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

extern "C" {

extern BtlUiCloseState g_btlDebugGlobals;
extern const AsdListBoxEntry DAT_00571b40[33];
extern u32 DAT_0057a6e8;

void asdListBoxJobReset(u32 handle);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetToggleItem(u32 list, u32 id, s32 on);
s32 FUN_003e53ec(void);

/* Rebuilds the battle flag menu ("btl Flag Menu"): closes the old list box and fills a new one with the
 * debug flag toggles and values, in the order of its item table. */
void btlDebugFlagMenuCreate(BattleFlagMenu *menu, BtlMainStateExtA *battle)
{
    if (jobIsValid(menu->listBox) != 0) {
        asdListBoxJobReset(menu->listBox);
        jobStop(menu->listBox, 0);
    }
    menu->listBox = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 0x75, 0, 0);
    asdListBoxAddItems(menu->listBox, DAT_00571b40, 33);
    asdListBoxSetByteValue(menu->listBox, 1);
    jobSetText(menu->listBox, "btl Flag Menu");
    asdListBoxSetToggleItem(menu->listBox, 0, (battle->markerMasks.bits & g_btlDebugGlobals.noDamage) != 0);
    asdListBoxSetToggleItem(menu->listBox, 1, (battle->markerMasks.bits & g_btlDebugGlobals.noPress) != 0);
    asdListBoxSetToggleItem(menu->listBox, 2, (battle->markerMasks.bits & g_btlDebugGlobals.noChange) != 0);
    asdListBoxSetToggleItem(menu->listBox, 3, (battle->markerMasks.bits & g_btlDebugGlobals.damage99999) != 0);
    asdListBoxSetToggleItem(menu->listBox, 5, (battle->markerMasks.bits & g_btlDebugGlobals.skillDebug) != 0);
    asdListBoxSetToggleItem(menu->listBox, 6, (battle->markerMasks.bits & g_btlDebugGlobals.allHit) != 0);
    asdListBoxSetIntItem(menu->listBox, 4, battle->debugDamage, 0, 99999, 0);
    asdListBoxSetToggleItem(menu->listBox, 7, (battle->markerMasks.bits & g_btlDebugGlobals.allReflect) != 0);
    asdListBoxSetToggleItem(menu->listBox, 8, (battle->markerMasks.bits & g_btlDebugGlobals.allMiss) != 0);
    asdListBoxSetToggleItem(menu->listBox, 9, (battle->markerMasks.bits & g_btlDebugGlobals.debugLog) != 0);
    asdListBoxSetToggleItem(menu->listBox, 10, (battle->markerMasks.bits & g_btlDebugGlobals.noMp) != 0);
    asdListBoxSetToggleItem(menu->listBox, 11, (battle->markerMasks.bits & g_btlDebugGlobals.cutLSkill) != 0);
    asdListBoxSetIntItem(menu->listBox, 12, battle->debugEnemySkill, 0, 400, 0);
    asdListBoxSetIntItem(menu->listBox, 13, gameGetSlotTable()->money, 0, 999999999, 0);
    asdListBoxSetToggleItem(menu->listBox, 14, (battle->markerMasks.bits & g_btlDebugGlobals.weakAuto) != 0);
    asdListBoxSetToggleItem(menu->listBox, 15, (battle->markerMasks.bits & g_btlDebugGlobals.escapeOk) != 0);
    asdListBoxSetToggleItem(menu->listBox, 16, (battle->markerMasks.bits & g_btlDebugGlobals.escapeNg) != 0);
    asdListBoxSetToggleItem(menu->listBox, 17, (battle->markerMasks.bits & g_btlDebugGlobals.ill100) != 0);
    asdListBoxSetToggleItem(menu->listBox, 18, (battle->markerMasks.bits & g_btlDebugGlobals.useSkillAll) != 0);
    asdListBoxSetToggleItem(menu->listBox, 19, (battle->markerMasks.bits & g_btlDebugGlobals.noBst) != 0);
    asdListBoxSetToggleItem(menu->listBox, 20, (battle->markerMasks.bits & g_btlDebugGlobals.noActGuest) != 0);
    asdListBoxSetToggleItem(menu->listBox, 21, (battle->markerMasks.bits & g_btlDebugGlobals.noExp) != 0);
    asdListBoxSetToggleItem(menu->listBox, 22, (battle->markerMasks.bits & g_btlDebugGlobals.mask118) != 0);
    asdListBoxSetToggleItem(menu->listBox, 23, (battle->markerMasks.bits & g_btlDebugGlobals.niyari100) != 0);
    asdListBoxSetToggleItem(menu->listBox, 24, (battle->markerMasks.bits & g_btlDebugGlobals.numDisp) != 0);
    asdListBoxSetIntItem(menu->listBox, 25, battle->debugValues.lastSaveTime, -1, 999, 0);
    asdListBoxSetToggleItem(menu->listBox, 26, (battle->markerMasks.bits & g_btlDebugGlobals.loan) != 0);
    asdListBoxSetIntItem(menu->listBox, 27, battle->debugValues.ddmDevilCount, 0, 4, 0);
    asdListBoxSetIntItem(menu->listBox, 28, DAT_0057a6e8, -1, 999, 0);
    asdListBoxSetToggleItem(menu->listBox, 29, (battle->markerMasks.bits & g_btlDebugGlobals.notRand) != 0);
    asdListBoxSetIntItem(menu->listBox, 30, FUN_003e53ec(), 0, 8, 0);
    asdListBoxSetToggleItem(menu->listBox, 31, (battle->markerMasks.bits & g_btlDebugGlobals.stopPartnerAttack) != 0);
    asdListBoxSetIntItem(menu->listBox, 32, battle->count, 0, 10, 0);
}

} /* extern "C" */
