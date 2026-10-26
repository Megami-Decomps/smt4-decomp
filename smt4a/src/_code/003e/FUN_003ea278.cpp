#include "common.h"

extern "C" {

struct BattleMain { u8 unk00[0x78]; u64 mask; };
extern BattleMain g_btlMain;

s32 FUN_003ea278(void *unused, const u64 *mask)
{
    if (mask != NULL) {
        if ((*mask & g_btlMain.mask) != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
