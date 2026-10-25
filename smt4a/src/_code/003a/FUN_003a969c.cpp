#include "battle/btlMain.h"
#include "battle/btlEffect.h"
#include "battle/BattleMessageMasks.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" {
extern u32 g_btlEvent;
extern BtlEffectOwnerA *g_btlAux;
extern BattleMessageFlagMasks g_btlMessageFlagMasks;
s32 isEntryUsable(u32 event);
s32 FUN_004f5a78(BtlEffectOwnerA *owner);
void FUN_002980e4(s32 message, s32 enabled);
BtlMainStateA *btlGetMainState();
void FUN_004fb6f4(s32 slot, s32 mode, BattleRosterRecordA *record, u32 effect,
    s32 message, s32 target, u32 flags);
void btlEmitMessageTableEntries(s32 message, ScriptUnit *unit, BtlEffectSlotBlock *slots,
    s32 entry, s32 first, s32 second);

// Queue one effect/message entry for each eligible front-line combatant.
u32 FUN_003a969c()
{
    u32 effect = scrGetArg(0);
    s32 message = scrGetArg(1);
    if (isEntryUsable(g_btlEvent) && !FUN_004f5a78(g_btlAux))
        return 0;
    if (message != 0) {
        FUN_002980e4(message, 1);
        BtlMainStateA *battle = btlGetMainState();
        ScriptUnit *unit = btlUnitGet(g_btlScriptUnit);
        BtlEffectSlotBlock *slots = g_btlAux->slots;
        s32 written = 0;
        for (s32 index = 0; index < 4; ++index) {
            BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
            if ((entry->flags & g_btlMessageFlagMasks.required) &&
                !(entry->flags & g_btlMessageFlagMasks.excluded) && entry->unitIndex >= 0) {
                BattleRosterRecordA *record = &battle->roster[entry->unitIndex];
                FUN_004fb6f4(written << 3, 0, record, effect, message, index << 3, -1);
                s32 parameter = record->combatant.parameterIndex;
                btlEmitMessageTableEntries(message, unit, slots, written, parameter, parameter);
                ++written;
            }
        }
    }
    return 1;
}
}
