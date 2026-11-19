#include "ui/UiControl.h"
#include "saveLoadUI/SaveLoadTransitionsA.h"
#include "shard/Shard0050.h"

extern "C" {
s16 FUN_001643b4(s32 group, s32 index);

/* Rebuild the menu's touch regions: one per item, then the three fixed buttons. */
void saveLoadUiRebuildTouchRegions(SaveSlotHeaderWork *ui, s32)
{
    s32 i;
    for (i = 0; i < ui->touchRegionCount; ++i) {
        ifTouchRegionRemove();
    }
    ui->touchRegionCount = 0;
    fillThreeWordsWithByte(reinterpret_cast<u32 *>(ui->touchRegions), ~0u);
    clearSaveLoadTouchResult(ui);
    for (i = 0; i < ui->spriteCount; ++i) {
        ui->touchRegions[i] = FUN_001643b4(0x2b, i + 0x51);
        ++ui->touchRegionCount;
    }
    for (i = 0; i < 3; ++i) {
        ui->touchRegions[2 + i] = FUN_001643b4(0x2b, i + 0xb);
        ++ui->touchRegionCount;
    }
    SaveSlotTouchWorkA *touchWork = static_cast<SaveSlotTouchWorkA *>(ui);
    const SaveSlotFixedRegionsA buttons = {ui->touchRegions[4], ui->touchRegions[2], ui->touchRegions[3]};
    touchWork->fixedButtonRegions = buttons;
}
}
