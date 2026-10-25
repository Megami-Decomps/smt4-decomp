#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32 index);
void FUN_0027df30(s32 mode, BtlEntry *unit, BtlActionRecord *records, s32 target,
                  s32 hp, s32 mp, u32 color, u32 flags, s32 first, s32 second,
                  s32 kind, s32 third, s32 fourth);
void FUN_002505c0(s32 mode, BtlEntry *unit, u32 effect, s32 first, s32 second, s32 third, s32 fourth);

/* Apply percentage-based HP/MP amounts to the script unit and enqueue its effect. */
u32 btlScriptApplyPercentHpMpEffect(void)
{
    s32 hpPercent = scrGetArg(0);
    s32 mpPercent = scrGetArg(1);
    s32 show = scrGetArg(2);
    BtlEntry *unit = reinterpret_cast<BtlEntry *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    u32 flags = 0;
    if (show > 0)
        flags = 0x3e0;
    BtlEntry *base = btlGetMainState()->entries;
    s32 hp = base->maxHp * hpPercent / 100;
    if ((base->groupMask & 8) && hp > 1)
        hp = 1;
    else if (hp == 0)
        hp = -1;
    s32 mp = base->maxMp * mpPercent / 100;
    if ((base->groupMask & 8) && mp > 1)
        mp = 1;
    else if (mp == 0)
        mp = -1;
    FUN_0027df30(0, unit, btlGetMainState()->actions, 0,
                  hp, mp, ~0u, flags, 0, 0, 9, 0, 0);
    FUN_002505c0(0, unit, 0x10001c1, 0, 0, 0, 0);
    return 1;
}
}
