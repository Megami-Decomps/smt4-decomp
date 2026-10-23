/* NON_MATCHING: selection-store scheduling allows the saved-zero value to reuse the selection-address register. */
#include "status/StatusDown.h"
#include "addon/aocMain.h"

extern "C" {
extern StatusDownStateA *g_statusDown;
extern AocSystemA *g_aocSystem;
s32 FUN_002c7e3c();
void sysPlaySe(u32 sound);
s32 fieldStateAllowsAction();
s32 gameWorkStateGet();
u32 FUN_0046fca8(AocSystemA *system, s32 id);
u32 dataTableValueOrZero(u32 table);
void asdTextDrawDirectoryEntry(AsdText *text, s32 font, s32 mode, s32 x, s32 y, u32 directory, s32 index);
s32 FUN_001688c4(AsdText *text);
void FUN_00203b40(GridNavigation *navigation, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void flagsSetOrClearBit(GridNavigation *navigation, s32 enabled);

// Play the mode-specific selection sound and rebuild the selected entry's scrollable caption.
void FUN_00333de0(s32 selected)
{
    StatusDownStateA *status = g_statusDown;
    if ((s16)status->unk598 < 0 && selected >= 0 && status->unk514 == 1) {
        s32 mode = FUN_002c7e3c();
        if (mode == 14 || mode == 7) {
            sysPlaySe(0x33);
        } else if (mode == 9 || mode == 10 || mode == 12 || mode == 8) {
            sysPlaySe(0x62);
        } else if (mode == 2 || mode == 4 || mode == 17) {
            sysPlaySe(fieldStateAllowsAction() ? 0xFA : 0x29);
        } else {
            sysPlaySe(0x2D);
        }
    }
    status->unk598 = (u16)selected;
    if (selected >= 0 && gameWorkStateGet()) {
        u32 directory = FUN_0046fca8(g_aocSystem, selected);
        if (directory == 0)
            directory = dataTableValueOrZero(0x3F);
        asdTextDrawDirectoryEntry(status->caption.text, 3, -1, 0, 3, directory, selected);
    } else {
        asdTextDrawDirectoryEntry(status->caption.text, 3, -1, 0, 3, dataTableValueOrZero(0x3F), 0);
    }
    s32 count = FUN_001688c4(status->caption.text);
    FUN_00203b40(&status->caption.navigation, count, 10, 1, 0, 1);
    flagsSetOrClearBit(&status->caption.navigation, 0);
    status->inventoryDirty = 1;
}
}
