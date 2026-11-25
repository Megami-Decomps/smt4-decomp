#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "script/ScriptArgs.h"
#include "battle/BtlGlobals.h"

extern "C" {

extern u32 g_btlScriptUnit;

void btlRecoverHpMpByPercent(s32 a, u32 unit, s32 b, BattleRosterRecordA *target, s32 c, s32 damage, s32 d, s32 e,
                  s32 effect, s32 f, s32 g, s32 kind, s32 h, s32 i, s32 j);
void btlQueueActionMessage(s32 a, u32 unit, u32 message, s32 b, s32 c, s32 d, s32 e);

/* Script command: damage target argument 0 by argument 1 percent of its max HP (at least 1). */
/* Damages a listed target by a percentage of its maximum HP and queues the effect message. */
u32 btlScriptDamageListedTargetPercent(void)
{
    s32 target = scrGetArg(0);
    s32 percent = scrGetArg(1);
    u32 unit = (u32)btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
    u32 effectFlags = 0x3BE0; /* the displayed effect, as in FUN_00380c48 */
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), target);
    /* Scale through the same wrapping 32-bit product as the group HP/MP command. */
    s32 damage = (s32)((u32)entry->data.maxHp * percent) / 100;

    if (damage == 0) {
        damage = -1;
    }
    btlRecoverHpMpByPercent(0, unit, 0, &btlGetMainState()->roster[target], 0, damage, -1, -1,
        effectFlags, 0, 0, 9, 0, 0, 1);
    btlQueueActionMessage(0, unit, 0x1000263, 0, 0, 0, 0);
    return 1;
}

} /* extern "C" */
