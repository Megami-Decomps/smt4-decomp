#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"


extern "C" {

u32 FUN_003ec7b0(const BtlMainStateExtA* battle)
{
    if (battle->count > 0) {
        if ((g_btlMain.partyTarget.mask & battle->stateFlags64.bits) == 0 && (battle->stateFlags64.bits & g_btlMain.transition.mask) == 0) {
            return 1;
        }
    }
    return 0;
}
}
