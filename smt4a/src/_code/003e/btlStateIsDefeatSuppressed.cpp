#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {


/* Returns whether any of the battle's state flags suppresses the defeat check. */
s32 btlStateIsDefeatSuppressed(const BtlMainStateA *battle)
{
    if (battle->stateFlags64.bits & g_btlMain.suppressDefeat) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
