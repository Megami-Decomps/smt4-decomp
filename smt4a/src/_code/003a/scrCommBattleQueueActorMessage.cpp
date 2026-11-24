#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "battle/btlReflect.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "script/ScriptArgs.h"

struct BattleMessageTable;
struct ChainOwner;
struct BattleMessageSource {
    u8 unk0000[0x1f54];
    BattleMessageTable *messages;
};
struct BattlePendingUnit {
    ScriptUnit unit;
    u8 unk02c[0x1250 - sizeof(ScriptUnit)];
    s32 pending;
};

extern "C" {
extern BtlAuxA *g_btlAux;
extern s32 *g_btlEvent;
u32 isEntryUsable(s32 *);
u32 FUN_004f5a78(BtlAuxA *);
void btlAuxQueryCommonUpDownPair(s32, u32);
u32 btlReflectQueueParameterTargetWithFollowup(s16, u32, BattleRosterRecordA *, u32, u32, s32, s32);
void btlEmitMessageTableEntries(s32, u32, BattleMessageTable *, s32, u32, s32);
s32 chainCountIdUnflagged(ChainOwner *, s32);

u8 scrCommBattleQueueActorMessage()
{
    s32 target = scrGetArg(0);
    u32 value = scrGetArg(1);
    s32 actor = scrGetArg(2);
    if (isEntryUsable(g_btlEvent) && !FUN_004f5a78(g_btlAux)) {
        return 0;
    }
    reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    u32 encounter = ((BtlMainStateA *)btlGetMainState())->activity.currentAction;
    if (encounter == 0x167 || encounter == 0x168) {
        if (actor == 0)
            return 1;
        BattlePendingUnit *unit = (BattlePendingUnit *)reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (unit->pending != 0) {
            bool done = chainCountIdUnflagged((ChainOwner *)g_btlActionReflect, 0) <= 0;
            if (done) {
                unit->pending = 0;
            }
            return done;
        }
        btlAuxQueryCommonUpDownPair(actor, 0);
        btlReflectQueueParameterTargetWithFollowup(0, 0, &btlGetMainState()->roster[target], value, actor, 0, -1);
        BattleMessageTable *messages = ((BattleMessageSource *)g_btlAux)->messages;
        btlEmitMessageTableEntries(actor, (u32)unit, messages, 0, target, target);
        ++unit->pending;
        return 0;
    }
    if (actor != 0) {
        btlAuxQueryCommonUpDownPair(actor, 0);
        ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        btlReflectQueueParameterTargetWithFollowup(0, 0, &btlGetMainState()->roster[target], value, actor, 0, -1);
        BattleMessageTable *messages = ((BattleMessageSource *)g_btlAux)->messages;
        btlEmitMessageTableEntries(actor, (u32)unit, messages, 0, target, target);
    }
    return 1;
}
}
