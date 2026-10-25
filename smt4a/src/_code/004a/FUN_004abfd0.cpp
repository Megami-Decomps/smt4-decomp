#include "battle/btlUI.h"

extern "C" {

void saveSlotBeginTransition(BtlUiObjCA *obj, u32 value, s32 flag);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abfd0(u32 unused, u32 value)
{
    saveSlotBeginTransition(&g_btlUi.ui->objC, value, 1);
}

} /* extern "C" */
