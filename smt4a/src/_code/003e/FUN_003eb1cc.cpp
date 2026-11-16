#include "battle/btlMain.h"

extern "C" {

extern BtlMainGlobalsA g_btlMain;

/* Returns whether any of the battle's state flags is in the selection-gate mask. */
s32 FUN_003eb1cc(const BtlMainStateA *battle)
{
    if (battle->stateFlags64.bits & g_btlMain.selectionGate64.bits) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
