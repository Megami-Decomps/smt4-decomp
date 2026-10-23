/* NON_MATCHING: duplicate search is pair-unrolled, roster base addresses are hoisted and flag tests are combined differently; 109 versus retail 90 instructions, -O2 candidate. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
BattleMotionSubject *FUN_001568f8(BtlMainStateA *battle, s32 parameterIndex);
s32 idSetFindSubjectIndex(BtlMainStateA *battle, const BattleRosterRecordA *record);

// Retain one identity/pose snapshot per eligible roster model, without duplicating existing entries.
void FUN_004e1f58(BtlMainGlobalsA *globals, const BattleActionUnit *action, s32 alternate)
{
    for (s32 rosterIndex = 0; rosterIndex < 133; ++rosterIndex) {
        BtlMainStateA *battle = globals->state;
        BattleRosterRecordA *record = &battle->roster[rosterIndex];
        s32 unitIndex = record->combatant.combatantIndex;
        if (unitIndex < 0 || (!alternate && !action->selectedUnits[unitIndex]))
            continue;
        u32 flags = record->liveFlags.unk50;
        if (!(flags & 1) || !(flags & 0x80))
            continue;
        if (alternate) {
            if (!(flags & 0x8000))
                continue;
        } else if (!(flags & 0x400)) {
            continue;
        }
        if (record->liveFlags.unk10C & 2)
            continue;
        BattleMotionSubject *subject = FUN_001568f8(battle, record->combatant.parameterIndex);
        if (!subject)
            continue;
        s32 subjectIndex = idSetFindSubjectIndex(globals->state, record);
        if (subjectIndex < 0)
            subjectIndex = 0;
        s32 id = subject->appearance.ids[subjectIndex];
        BattleRetainedRosterEntry *entries = globals->state->retainedRoster.entries;
        s32 existing;
        for (existing = 0; existing < 109; ++existing) {
            if (entries[existing].id == id && entries[existing].key == record->modelMatch.key)
                break;
        }
        if (existing < 109)
            continue;
        for (s32 index = 0; index < 109; ++index) {
            BattleRetainedRosterEntry *entry = &entries[index];
            if (entry->id < 0) {
                entry->id = id;
                entry->key = record->modelMatch.key;
                entry->scale = record->motion.scale;
                entry->position = *reinterpret_cast<const BattleVector3 *>(record->motion.position);
                entry->parameterIndex = record->combatant.parameterIndex;
                break;
            }
        }
    }
}
}
