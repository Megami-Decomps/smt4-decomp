#include "battle/BtlUiGlobal.h"

extern "C" {


u8 menu32ModeIsNot6(void *menu);
s32 spriteOperationGetModeThreeCompletion(void *panel);
u8 *FUN_00502754(u8 *subobject); /* returns the subobject's panel (+0xBC) */
s32 FUN_00321500(void *menu);
s32 uiSpriteSetKeyframeThree(void *panel);

/* Refreshes the battle UI menu and panel when the menu is not in mode 6 and spriteOperationGetModeThreeCompletion succeeds. */
void FUN_004ab734(void)
{
    BtlUiA *ui = g_btlUi.ui;

    if (menu32ModeIsNot6(&ui->objA) != 0) {
        if (spriteOperationGetModeThreeCompletion(FUN_00502754(ui->objA.tail.subobject)) != 0) {
            FUN_00321500(&ui->objA);
            uiSpriteSetKeyframeThree(&ui->objB);
        }
    }
}

} /* extern "C" */
