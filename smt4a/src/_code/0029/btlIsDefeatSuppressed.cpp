#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Tests whether any of the battle state's flags is in the module's suppression mask. */
u32 btlIsDefeatSuppressed(void)
{
    if (g_btlMain.state == NULL) {
        return 0;
    }
    if (g_btlMain.state->stateFlags64.bits & g_btlMain.suppressDefeat) {
        return 1;
    }
    return 0;
}
}
