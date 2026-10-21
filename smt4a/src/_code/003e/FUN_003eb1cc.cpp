/* NON_MATCHING: retail uses `ldm r2, {r0, r2}` where armcc emits `add r0, r0, #17408`. */
#include "common.h"

extern "C" {

struct BattleMain { u8 unk000[0x190]; u32 mask[2]; };
struct Unit { u8 unk0000[0x45a0]; u32 mask[2]; };
extern BattleMain g_btlMain;

s32 FUN_003eb1cc(const Unit *unit)
{
    return ((unit->mask[0] & g_btlMain.mask[0]) | (unit->mask[1] & g_btlMain.mask[1])) != 0;
}

} /* extern "C" */
