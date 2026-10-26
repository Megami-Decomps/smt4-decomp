/* NON_MATCHING: g_btlMain is the canonical BtlMainGlobalsA (state pointer + suppressDefeat mask) and the rows now equal retail's 15; only the registers of the 64-bit AND operands differ. */
#include "battle/btlMain.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

/* Tests whether any of the battle state's flags is in the module's suppression mask. */
u32 FUN_00291e14(void)
{
    BtlMainStateA* battle = g_btlMain.state;
    if (battle == NULL) {
        return 0;
    }
    return (battle->stateFlags64.bits & g_btlMain.suppressDefeat) != 0;
}
}
