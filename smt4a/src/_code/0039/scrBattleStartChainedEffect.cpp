/* NON_MATCHING: shared effect setup adds preserved-register copies and changes branch placement; -O2 candidate. */
#include "battle/btlReflect.h"
struct ScriptEffectUnit {
    u8 unk0000[0x1250];
    s32 pending; // 0x1250
};
struct ScriptEffectVisual {
    u8 unk00[0x6a];
    s16 id; // 0x6a
};
struct ScriptEffectBattle {
    u8 unk0000[0xf0];
    s32 encounter; // 0x00f0
    u8 unk00f4[0x1de0];
    ScriptEffectVisual *units; // 0x1ed4
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
ScriptEffectUnit *btlUnitGet(u32);
ScriptEffectBattle *btlGetMainState();
void FUN_002980e4(s32, s32);
void FUN_004fb6f4(s32, s32, ScriptEffectVisual *, u32, s32, s32, s32);
void btlEmitMessageTableEntries(s32, ScriptEffectUnit *, void *, s32, s32, s32);
s32 chainCountIdUnflagged(ReflectContext *, u32);

static __inline ScriptEffectUnit *startScriptEffect(u32 action, s32 effect)
{
    FUN_002980e4(effect, 1);
    ScriptEffectUnit *unit = btlUnitGet(g_btlScriptUnit);
    ScriptEffectVisual *visual = btlGetMainState()->units;
    FUN_004fb6f4(0, 0, visual, action, effect, 0, -1);
    s32 id = visual->id;
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
    btlUnitGet(g_btlScriptUnit);
    ScriptEffectBattle *battle = btlGetMainState();
    if (battle->encounter != 0x167 && battle->encounter != 0x168) {
        if (effect)
            startScriptEffect(action, effect);
    } else if (effect) {
        ScriptEffectUnit *unit = btlUnitGet(g_btlScriptUnit);
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
