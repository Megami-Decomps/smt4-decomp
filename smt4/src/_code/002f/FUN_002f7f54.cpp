/* NON_MATCHING: percentage-division constant lifetime, clamp conditional execution and action-call argument scheduling differ. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "battle/btlAction.h"
#include "battle/BtlMainAccess.h"

extern "C" {
void btlQueueSkillReflectActions(s32, ScriptUnit *, BtlActionRecord *, s32, s32, s32, u32, u32, s32, s32, s32, s32, s32);
void btlQueueKeyedScalarReflectAction(s32, ScriptUnit *, u32, s32, s32, s32, s32);

u32 FUN_002f7f54()
{
    s32 hpPercent = scrGetArg(0);
    s32 mpPercent = scrGetArg(1);
    s32 showEffect = scrGetArg(2);
    ScriptUnit *actor = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit)));
    u32 effect = 0;
    if (showEffect > 0)
        effect = 0x3E0;
    s32 count = 0;
    for (s32 slot = 0; slot < 4; ++slot) {
        BtlEntry *unit = &btlGetMainState()->entries[slot];
        if ((unit->flags & 1) && !(unit->flags & 0x40) && unit->ids[0] >= 0) {
            s32 hp = unit->data.maxHp * hpPercent / 100;
            if ((unit->data.statusFlags & 8) && hp > 1)
                hp = 1;
            else if (hp == 0)
                hp = -1;
            s32 mp = unit->data.maxMp * mpPercent / 100;
            if ((unit->data.statusFlags & 8) && mp > 1)
                mp = 1;
            else if (mp == 0)
                mp = -1;
            BtlActionRecord *target = &btlGetMainState()->actions[unit->ids[0]];
            s32 delay = count * 5;
            btlQueueSkillReflectActions(0, actor, target, 0,
                         hp, mp, ~0u, effect, delay, delay, 9, 0, 0);
            btlQueueKeyedScalarReflectAction(delay, actor, 0x10001C1, 0, 0, 0, 0);
            ++count;
        }
    }
    return 1;
}
}
