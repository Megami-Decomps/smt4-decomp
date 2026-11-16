#include "battle/btlMain.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain;

/* Returns whether any of the battle's state flags suppresses the defeat check. */
s32 FUN_003ec77c(const BtlMainStateA *battle)
{
    if (battle->stateFlags64.bits & g_btlMain.suppressDefeat) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
