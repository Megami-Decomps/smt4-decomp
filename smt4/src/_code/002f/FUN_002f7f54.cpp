/* NON_MATCHING: percentage-division constant lifetime, clamp conditional execution and action-call argument scheduling differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "battle/btlAction.h"

extern "C" {
BtlMainState *btlGetMainState();
void FUN_0027df30(s32, ScriptUnit *, BtlActionRecord *, s32, s32, s32, u32, u32, s32, s32, s32, s32, s32);
void FUN_002505c0(s32, ScriptUnit *, u32, s32, s32, s32, s32);

u32 FUN_002f7f54()
{
    s32 hpPercent = scrGetArg(0);
    s32 mpPercent = scrGetArg(1);
    s32 showEffect = scrGetArg(2);
    ScriptUnit *actor = btlUnitGet(g_btlScriptUnit);
    s32 count = 0;
    u32 effect = showEffect > 0 ? 0x3E0 : 0;
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlEntry *unit = &btlGetMainState()->entries[slot];
        if ((unit->flags & 1) && !(unit->flags & 0x40) && unit->members.ids[0] >= 0) {
            s32 hp = unit->maxHp * hpPercent / 100;
            if ((unit->groupMask & 8) && hp >= 2)
                hp = 1;
            else if (!hp)
                hp = -1;
            s32 mp = unit->maxMp * mpPercent / 100;
            if ((unit->groupMask & 8) && mp >= 2)
                mp = 1;
            else if (!mp)
                mp = -1;
            BtlMainState *battle = btlGetMainState();
            s32 delay = count * 5;
            FUN_0027df30(0, actor, &battle->actions.records[unit->members.ids[0]], 0,
                         hp, mp, static_cast<u32>(-1), effect, delay, delay, 9, 0, 0);
            FUN_002505c0(delay, actor, 0x10001C1, 0, 0, 0, 0);
            ++count;
        }
    }
    return 1;
}
}
