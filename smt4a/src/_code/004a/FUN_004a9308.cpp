/* NON_MATCHING: register allocation only: retail copies the UI pointer into r6 for the inlined panel refresh (case 14) and keeps selection/flags in r7/r8. */
#include "battle/btlUI.h"

extern "C" {
void uiSpriteSetKeyframeThree(BtlUiObjBA *sprite);
void FUN_00231cdc(BtlUiObjCA *widget, u32 selection, u32 mode, u32 flags);
void FUN_002cc96c(BtlUiObjCA *widget);
void FUN_00321500(BtlUiObjAA *widget);
s32 FUN_0039ebcc(BtlUiObjBA *widget);
s32 menu32ModeIsNot6(BtlUiObjAA *widget);
extern BtlUiGlobalsA g_btlUi;

/* Refreshes the menu and sprite when the menu is not in mode 6 and the sprite accepts. */
static __inline void refreshMenuSprite(BtlUiA *ui)
{
    if (menu32ModeIsNot6(&ui->objA) != 0 && FUN_0039ebcc(&ui->objB) != 0) {
        FUN_00321500(&ui->objA);
        uiSpriteSetKeyframeThree(&ui->objB);
    }
}

// Map a battle command to the selection pane's mode, resetting both panes for mode fourteen.
void FUN_004a9308(u32 unused, u32 selection, u32 command, u32 flags)
{
    BtlUiA *ui = g_btlUi.ui;
    u32 mode = static_cast<u32>(-1);
    ui->state = 11;
    switch (command) {
    case 1:
    case 2:
    case 3:
        mode = 1;
        break;
    case 4:
        mode = 9;
        break;
    case 5:
        mode = 8;
        break;
    case 6:
        mode = 5;
        break;
    case 7:
        mode = 3;
        break;
    case 8:
        mode = 7;
        break;
    case 14:
        mode = 11;
        refreshMenuSprite(ui);
        FUN_002cc96c(&ui->objC);
        ui->state = 15;
        break;
    }
    FUN_00231cdc(&ui->objC, selection, mode, flags);
}
}
