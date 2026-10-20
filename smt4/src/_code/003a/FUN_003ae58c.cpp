#include "battle/btlUI.h"

extern "C" {

s32 FUN_002062e8(BtlUiObjC *obj);
void FUN_0028cb40(BtlUiObjC *obj, u16 *a, u16 *b);

extern BtlUiGlobals DAT_00439c88;

s32 FUN_003ae58c(void)
{
    BtlUi *ui = DAT_00439c88.ui;
    s32 *state = &ui->state;
    s32 result;

    if (*state == 0xB) {
        return 0;
    }
    result = FUN_002062e8(&ui->objC);
    if (result != 0) {
        FUN_0028cb40(&ui->objC, &ui->unk7E4E, &ui->unk7E50);
        if (ui->unk7E4E == 0xE) {
            *state = 10;
        } else {
            *state = 0;
        }
    }
    return result;
}

} /* extern "C" */
