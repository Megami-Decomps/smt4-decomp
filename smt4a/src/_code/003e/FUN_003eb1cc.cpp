/* NON_MATCHING: retail materialises the u64 test result with `movne r0, #1; moveq r0, #0`; armcc drops the moveq for the 32-bit halves. */
#include "common.h"

extern "C" {

struct BitMask { u32 low, high; };
struct BattleMain { u8 unk000[0x190]; BitMask mask; };
struct Unit { u8 unk0000[0x45a0]; BitMask mask; };
extern BattleMain g_btlMain;

s32 FUN_003eb1cc(const Unit *unit)
{
    BitMask mask = unit->mask;
    return ((mask.low & g_btlMain.mask.low) | (mask.high & g_btlMain.mask.high)) != 0;
}

} /* extern "C" */
