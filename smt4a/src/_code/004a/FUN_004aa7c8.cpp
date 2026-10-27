#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
void uiSpriteSetKeyframeThree(BtlUiObjBA *sprite);
void menu32PlayCursorSeAndSelect(BtlUiObjCA *menu);
void FUN_00321500(BtlUiObjAA *menu);
s32 FUN_0039ebcc(BtlUiObjBA *sprite);
BtlUiObjBA *FUN_00502754(u8 *subobject); /* returns the subobject's sprite (+0xBC) */
void controllerStartInterpolation(u32 controller);
u8 menu32ModeIsNot6(BtlUiObjAA *menu);

// Advance the closing menu state and refresh the active sprite when its gates permit.
void FUN_004aa7c8(void)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 &state = ui->state;
    if (state == 13) {
        controllerStartInterpolation(ui->unk7488);
        menu32PlayCursorSeAndSelect(&ui->objC);
        state = 11;
        ui = g_btlUi.ui;
        if (menu32ModeIsNot6(&ui->objA) && FUN_0039ebcc(FUN_00502754(reinterpret_cast<u8 *>(&ui->objA) + 0x23F8))) {
            FUN_00321500(&ui->objA);
            uiSpriteSetKeyframeThree(&ui->objB);
        }
    }
}
}
