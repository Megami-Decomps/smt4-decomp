/* NON_MATCHING: retail uses `beq 2c` where armcc emits `moveq r0, #0`. */
#include "common.h"

extern "C" {

struct BattleMain { u8 unk00[0x78]; u32 mask[2]; };
extern BattleMain g_btlMain;

s32 FUN_003ea278(void *unused, const u32 *mask)
{
    if (mask == NULL) {
        return 0;
    }
    return ((mask[0] & g_btlMain.mask[0]) | (mask[1] & g_btlMain.mask[1])) != 0;
}

} /* extern "C" */
