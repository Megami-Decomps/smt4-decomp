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

extern BtlUiCloseState DAT_005715f8;
extern const AsdListBoxEntry DAT_00571b40[33];
extern u32 DAT_0057a6e8;

void FUN_003592dc(u32 handle);
void asdListBoxAddItems(u32 list, const AsdListBoxEntry *entries, s32 count);
void asdListBoxSetToggleItem(u32 list, u32 id, s32 on);
s32 FUN_003e53ec(void);

/* Rebuilds the battle flag menu ("btl Flag Menu"): closes the old list box and fills a new one with the
 * debug flag toggles and values, in the order of its item table. */
void btlDebugFlagMenuCreate(BattleFlagMenu *menu, BtlMainStateExtA *battle)
{
    if (jobIsValid(menu->listBox) != 0) {
        FUN_003592dc(menu->listBox);
        jobStop(menu->listBox, 0);
    }
    menu->listBox = asdListBoxCreateDefaultFlags(battle->uiJobs.menuJob, 0x75, 0, 0);
    asdListBoxAddItems(menu->listBox, DAT_00571b40, 33);
    asdListBoxSetByteValue(menu->listBox, 1);
    jobSetText(menu->listBox, "btl Flag Menu");
    asdListBoxSetToggleItem(menu->listBox, 0, (battle->markerMasks.bits & DAT_005715f8.noDamage) != 0);
    asdListBoxSetToggleItem(menu->listBox, 1, (battle->markerMasks.bits & DAT_005715f8.noPress) != 0);
    asdListBoxSetToggleItem(menu->listBox, 2, (battle->markerMasks.bits & DAT_005715f8.noChange) != 0);
    asdListBoxSetToggleItem(menu->listBox, 3, (battle->markerMasks.bits & DAT_005715f8.damage99999) != 0);
    asdListBoxSetToggleItem(menu->listBox, 5, (battle->markerMasks.bits & DAT_005715f8.skillDebug) != 0);
    asdListBoxSetToggleItem(menu->listBox, 6, (battle->markerMasks.bits & DAT_005715f8.allHit) != 0);
    asdListBoxSetIntItem(menu->listBox, 4, battle->debugDamage, 0, 99999, 0);
    asdListBoxSetToggleItem(menu->listBox, 7, (battle->markerMasks.bits & DAT_005715f8.allReflect) != 0);
    asdListBoxSetToggleItem(menu->listBox, 8, (battle->markerMasks.bits & DAT_005715f8.allMiss) != 0);
    asdListBoxSetToggleItem(menu->listBox, 9, (battle->markerMasks.bits & DAT_005715f8.debugLog) != 0);
    asdListBoxSetToggleItem(menu->listBox, 10, (battle->markerMasks.bits & DAT_005715f8.noMp) != 0);
    asdListBoxSetToggleItem(menu->listBox, 11, (battle->markerMasks.bits & DAT_005715f8.cutLSkill) != 0);
    asdListBoxSetIntItem(menu->listBox, 12, battle->debugEnemySkill, 0, 400, 0);
    asdListBoxSetIntItem(menu->listBox, 13, gameGetSlotTable()->money, 0, 999999999, 0);
    asdListBoxSetToggleItem(menu->listBox, 14, (battle->markerMasks.bits & DAT_005715f8.weakAuto) != 0);
    asdListBoxSetToggleItem(menu->listBox, 15, (battle->markerMasks.bits & DAT_005715f8.escapeOk) != 0);
    asdListBoxSetToggleItem(menu->listBox, 16, (battle->markerMasks.bits & DAT_005715f8.escapeNg) != 0);
    asdListBoxSetToggleItem(menu->listBox, 17, (battle->markerMasks.bits & DAT_005715f8.ill100) != 0);
    asdListBoxSetToggleItem(menu->listBox, 18, (battle->markerMasks.bits & DAT_005715f8.useSkillAll) != 0);
    asdListBoxSetToggleItem(menu->listBox, 19, (battle->markerMasks.bits & DAT_005715f8.noBst) != 0);
    asdListBoxSetToggleItem(menu->listBox, 20, (battle->markerMasks.bits & DAT_005715f8.noActGuest) != 0);
    asdListBoxSetToggleItem(menu->listBox, 21, (battle->markerMasks.bits & DAT_005715f8.noExp) != 0);
    asdListBoxSetToggleItem(menu->listBox, 22, (battle->markerMasks.bits & DAT_005715f8.mask118) != 0);
    asdListBoxSetToggleItem(menu->listBox, 23, (battle->markerMasks.bits & DAT_005715f8.niyari100) != 0);
    asdListBoxSetToggleItem(menu->listBox, 24, (battle->markerMasks.bits & DAT_005715f8.numDisp) != 0);
    asdListBoxSetIntItem(menu->listBox, 25, battle->debugValues.lastSaveTime, -1, 999, 0);
    asdListBoxSetToggleItem(menu->listBox, 26, (battle->markerMasks.bits & DAT_005715f8.loan) != 0);
    asdListBoxSetIntItem(menu->listBox, 27, battle->debugValues.ddmDevilCount, 0, 4, 0);
    asdListBoxSetIntItem(menu->listBox, 28, DAT_0057a6e8, -1, 999, 0);
    asdListBoxSetToggleItem(menu->listBox, 29, (battle->markerMasks.bits & DAT_005715f8.notRand) != 0);
    asdListBoxSetIntItem(menu->listBox, 30, FUN_003e53ec(), 0, 8, 0);
    asdListBoxSetToggleItem(menu->listBox, 31, (battle->markerMasks.bits & DAT_005715f8.stopPartnerAttack) != 0);
    asdListBoxSetIntItem(menu->listBox, 32, battle->count, 0, 10, 0);
}

} /* extern "C" */
