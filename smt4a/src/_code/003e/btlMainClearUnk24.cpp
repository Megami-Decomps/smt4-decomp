#include "battle/btlMain.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain;

void btlMainClearUnk24(void)
{
    g_btlMain.unk24 = 0;
}

} /* extern "C" */
