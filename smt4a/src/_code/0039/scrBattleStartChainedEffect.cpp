#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"
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

void btlAuxQueryCommonUpDownPair(s32, s32);
void FUN_004fb6f4(s32, s32, BattleRosterRecordA *, u32, s32, s32, s32);
void btlEmitMessageTableEntries(s32, ScriptEffectUnit *, void *, s32, s32, s32);
s32 chainCountIdUnflagged(ReflectContext *, u32);

// Start the scripted effect, waiting for reflected chains in the two special encounters.
u8 scrBattleStartChainedEffect()
{
    u32 action = scrGetArg(0);
    s32 effect = scrGetArg(1);
    if (isEntryUsable(g_btlEvent) && !FUN_004f5a78(g_btlAux))
        return 0;
    reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    u32 encounter = btlGetMainState()->activity.currentAction;
    if (encounter == 0x167 || encounter == 0x168) {
        if (effect == 0)
            return 1;
        ScriptEffectUnit *waiting = reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (waiting->pending) {
            bool done = chainCountIdUnflagged(g_btlActionReflect, 0) <= 0;
            if (done)
                waiting->pending = 0;
            return done;
        }
        btlAuxQueryCommonUpDownPair(effect, 1);
        ScriptEffectUnit *unit = reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        BattleRosterRecordA *visual = btlGetMainState()->roster;
        FUN_004fb6f4(0, 0, visual, action, effect, 0, -1);
        void *effects = g_btlAux->effects;
        s32 id = visual->combatant.parameterIndex;
        btlEmitMessageTableEntries(effect, unit, effects, 0, id, id);
        ++unit->pending;
        return 0;
    }
    if (effect != 0) {
        btlAuxQueryCommonUpDownPair(effect, 1);
        ScriptEffectUnit *unit = reinterpret_cast<ScriptEffectUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        BattleRosterRecordA *visual = btlGetMainState()->roster;
        FUN_004fb6f4(0, 0, visual, action, effect, 0, -1);
        void *effects = g_btlAux->effects;
        s32 id = visual->combatant.parameterIndex;
        btlEmitMessageTableEntries(effect, unit, effects, 0, id, id);
    }
    return 1;
}
}
