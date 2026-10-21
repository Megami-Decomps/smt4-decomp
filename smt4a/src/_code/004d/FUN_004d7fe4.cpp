#include "battle/btlMain.h"

extern "C" {

extern BtlAuxA *g_btlAux;

void FUN_004d7fe4(BtlStep *step)
{
    step->state = 9;
    step->unk2C = 0;
    g_btlAux->unk3050 = 0;
}

} /* extern "C" */
