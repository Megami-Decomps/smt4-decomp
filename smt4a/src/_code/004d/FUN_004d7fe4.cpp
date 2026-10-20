#include "battle/btlMain.h"

extern "C" {

extern BtlAuxA *DAT_00573808;

void FUN_004d7fe4(BtlStep *step)
{
    step->state = 9;
    step->unk2C = 0;
    DAT_00573808->unk3050 = 0;
}

} /* extern "C" */
