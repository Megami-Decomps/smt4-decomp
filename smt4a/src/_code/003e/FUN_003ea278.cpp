#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {


s32 FUN_003ea278(void *unused, const u64 *mask)
{
    if (mask != NULL) {
        if ((*mask & g_btlMain.actorCategories[3]) != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
