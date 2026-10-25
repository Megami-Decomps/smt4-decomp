/* NON_MATCHING: cache-array addressing and source position copy grouping differ, with different action/state register roles. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/BtlScriptTargets.h"
#include "battle/btlAction.h"
#include "battle/BattleRosterCache.h"

struct BattleActionCacheRecord {
    s32 model;
    u32 key;
    f32 scale;
    f32 position[3];
    s32 memberId;
};
struct BattleActionCacheView {
    u8 unk0000[0x2318];
    BattleActionCacheRecord records[109];
};
/* A u32 member at 0x5c cannot be inserted into the shared action's 10-byte union. */
struct BattleActionCacheKeyView {
    u8 unk00[0x5c];
    u32 key;
};
/* Lookup returns a subobject whose common key is followed by further member keys. */
struct BattleMemberKeysView {
    u8 unk00[0xc];
    s32 keys[50];
};

extern "C" {
BattleCombatantStatusKey *FUN_0027da30(BtlMainState *battle, s32 id);
s32 FUN_0027dab0(BtlMainState *battle, const BtlActionRecord *action);

void FUN_003cc944(BtlMainState **battle, const BtlScriptActor *actor, s32 allActors)
{
    for (s32 i = 0; i < 133; ++i) {
        BtlMainState *state = *battle;
        const BtlActionRecord *action = &state->actions[i];
        if (action->participant.combatantIndex < 0 ||
            (!allActors && !actor->targets[action->participant.combatantIndex]) ||
            !(action->status & 1) || !(action->status & 0x80))
            continue;
        if (allActors) {
            if (!(action->status & 0x8000))
                continue;
        } else if (!(action->status & 0x400)) {
            continue;
        }
        if (action->stateFlags & 2)
            continue;
        const BattleCombatantStatusKey *member = FUN_0027da30(state, action->memberId);
        if (!member)
            continue;
        s32 memberIndex = FUN_0027dab0(*battle, action);
        if (memberIndex < 0)
            memberIndex = 0;
        s32 model = ((const BattleMemberKeysView *)member)->keys[memberIndex];
        BattleActionCacheView *cache = (BattleActionCacheView *)*battle;
        const BattleActionCacheKeyView *identity = (const BattleActionCacheKeyView *)action;
        bool present = false;
        for (s32 slot = 0; slot < 109; ++slot) {
            if (cache->records[slot].model == model && cache->records[slot].key == identity->key) {
                present = true;
                break;
            }
        }
        if (present)
            continue;
        for (s32 slot = 0; slot < 109; ++slot) {
            BattleActionCacheRecord *record = &cache->records[slot];
            if (record->model < 0) {
                record->model = model;
                record->key = identity->key;
                record->scale = action->geometry.scale;
                record->position[0] = action->geometry.position[0];
                record->position[1] = action->geometry.position[1];
                record->position[2] = action->geometry.position[2];
                record->memberId = action->memberId;
                break;
            }
        }
    }
}
}
