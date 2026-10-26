/* NON_MATCHING: shared effect setup adds preserved-register copies and changes branch placement; -O2 candidate. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BattleUnit.h"
struct ScriptEffectUnit {
    u8 unk0000[0x1250];
    s32 pending; // 0x1250
};
struct ScriptEffectAux {
    u8 unk0000[0x1f54];
    void *effects; // 0x1f54
};
extern "C" {
extern u32 g_btlScriptUnit;
extern void *g_btlEvent;
extern ScriptEffectAux *g_btlAux;
s32 scrGetArg(u32);
s32 isEntryUsable(void *);
s32 FUN_004f5a78(ScriptEffectAux *);

void FUN_002980e4(s32, s32);
void FUN_004fb6f4(s32, s32, BattleRosterRecordA *, u32, s32, s32, s32);
void btlEmitMessageTableEntries(s32, ScriptEffectUnit *, void *, s32, s32, s32);
s32 chainCountIdUnflagged(ReflectContext *, u32);

static __inline ScriptEffectUnit *startScriptEffect(u32 action, s32 effect)
{
    FUN_002980e4(effect, 1);
    ScriptEffectUnit *unit = reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    BattleRosterRecordA *visual = btlGetMainState()->roster;
    FUN_004fb6f4(0, 0, visual, action, effect, 0, -1);
    s32 id = visual->combatant.parameterIndex;
    btlEmitMessageTableEntries(effect, unit, g_btlAux->effects, 0, id, id);
    return unit;
}

// Start the scripted effect, waiting for reflected chains in the two special encounters.
u8 scrBattleStartChainedEffect()
{
    u32 action = scrGetArg(0);
    s32 effect = scrGetArg(1);
    if (isEntryUsable(g_btlEvent) && !FUN_004f5a78(g_btlAux))
        return 0;
    reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    BtlMainStateA *battle = btlGetMainState();
    if (battle->activity.currentAction != 0x167 && battle->activity.currentAction != 0x168) {
        if (effect)
            startScriptEffect(action, effect);
    } else if (effect) {
        ScriptEffectUnit *unit = reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (unit->pending) {
            s32 count = chainCountIdUnflagged(g_btlActionReflect, 0);
            if (count < 1)
                unit->pending = 0;
            return count < 1;
        }
        unit = startScriptEffect(action, effect);
        ++unit->pending;
        return 0;
    }
    return 1;
}
}
