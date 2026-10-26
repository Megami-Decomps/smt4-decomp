/* NON_MATCHING: the unit mask now loads with ldm like retail; retail additionally ends the boolean with an explicit moveq r0,#0 after movne r0,#1. */
#include "common.h"

extern "C" {

struct MaskWords { u32 low, high; };
struct BattleMain { u8 unk000[0x1c8]; MaskWords mask; };
struct Unit { u8 unk0000[0x45a0]; MaskWords mask; };
extern BattleMain g_btlMain;

s32 FUN_003ec77c(const Unit *unit)
{
    MaskWords unitMask = unit->mask;
    return ((unitMask.low & g_btlMain.mask.low) | (unitMask.high & g_btlMain.mask.high)) != 0;
}

} /* extern "C" */
