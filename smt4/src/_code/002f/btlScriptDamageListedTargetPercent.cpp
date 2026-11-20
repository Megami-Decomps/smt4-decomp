#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "battle/BtlGlobals.h"
#include "battle/btlScript.h"

extern "C" {
void btlQueueSkillReflectActions(s32 mode, BtlEntry *unit, BtlActionRecord *records, s32 target,
                  s32 hp, s32 mp, u32 color, u32 flags, s32 first, s32 second,
                  s32 kind, s32 third, s32 fourth);
void btlQueueKeyedScalarReflectAction(s32 mode, BtlEntry *unit, u32 effect, s32 first, s32 second, s32 third, s32 fourth);

/* Damage one listed target by a percentage of its maximum HP and enqueue the effect message. */
u32 btlScriptDamageListedTargetPercent(void)
{
    s32 targetId = scrGetArg(0);
    s32 percent = scrGetArg(1);
    BtlEntry *unit = reinterpret_cast<BtlEntry *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    u32 flags = 0x3e0; /* display flags, as btlScriptApplyPercentHpMpEffect sets them for a shown effect */
    BtlEntry *target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
    s32 hp = target->data.maxHp * percent / 100;
    if (hp == 0)
        hp = -1;
    btlQueueSkillReflectActions(0, unit, &btlGetMainState()->actions[targetId], 0,
                 hp, -1, ~0u, flags, 0, 0, 9, 0, 0);
    btlQueueKeyedScalarReflectAction(0, unit, 0x10001c1, 0, 0, 0, 0);
    return 1;
}
}
