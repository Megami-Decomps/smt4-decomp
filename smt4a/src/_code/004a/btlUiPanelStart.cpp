#include "common.h"
#include "battle/BtlUiGlobal.h"
#include "ui/UiControl_VariantA.h"

extern "C" {

s32 FUN_00280030(void *panel);
void *FUN_00502754(u8 *subobject); /* returns the subobject's panel (+0xBC) */
void uiWorkEndState1(BtlUiObjAA *menu);
void owner2DCInitSub(BtlUiObjBA *panel);

/* When the menu is not in mode 5 and the panel accepts, runs the menu step and initialises the panel. */
void btlUiPanelStart(void)
{
    BtlUiA *ui = g_btlUi.ui;

    if (menu32ModeIsNot5(&ui->objA) != 0 && FUN_00280030(FUN_00502754(ui->objA.tail.subobject)) != 0) {
        uiWorkEndState1(&ui->objA);
        owner2DCInitSub(&ui->objB);
    }
}

} /* extern "C" */
