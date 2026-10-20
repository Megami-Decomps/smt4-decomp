#include "battle/btlUI.h"

extern "C" {

void FUN_002251d4(BtlUiObjC *obj);
void FUN_0028be40(BtlUiObjB *obj);
void FUN_0028be50(BtlUiObjA *obj);
s32 FUN_0028be84(BtlUiObjB *obj);
s32 FUN_0028bebc(BtlUiObjA *obj);
void FUN_0033c6f8(u32 arg);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae868(void)
{
    BtlUi *ui = DAT_00439c88.ui;
    s32 *state = &ui->state;

    if (*state == 9) {
        FUN_0033c6f8(ui->unk7E20);
        FUN_002251d4(&ui->objC);
        *state = 7;
        ui = DAT_00439c88.ui;
        if (FUN_0028bebc(&ui->objA) != 0 && FUN_0028be84(&ui->objB) != 0) {
            FUN_0028be50(&ui->objA);
            FUN_0028be40(&ui->objB);
        }
    }
}

} /* extern "C" */
