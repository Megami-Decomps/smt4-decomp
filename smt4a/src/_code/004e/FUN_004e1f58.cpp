/* NON_MATCHING: same flow except the alternate-flag layout (retail keeps the 0x8000 test inline and moves the 0x400 test out of line) and register choices for the subject and the retained-roster addressing (retail adds the 0x2418 constant to the scaled index, then the state). */
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
s32 idSetFindSubjectIndex(BtlMainStateA *battle, const BattleRosterRecordA *record);

// Retain one identity/pose snapshot per eligible roster model, without duplicating existing entries.
void FUN_004e1f58(BtlMainGlobalsA *globals, const BtlUnitA *action, s32 alternate)
{
    const s8 *selectedUnits = action->targets;
    for (s32 rosterIndex = 0; rosterIndex < 133; ++rosterIndex) {
        BtlMainStateA *battle = globals->state;
        BattleRosterRecordA *record = &battle->roster[rosterIndex];
        s32 unitIndex = record->combatant.combatantIndex;
        if (unitIndex < 0 || (!alternate && !selectedUnits[unitIndex]))
            continue;
        if (!(record->liveFlags.unk50 & 1) || !(record->liveFlags.unk50 & 0x80))
            continue;
        if (alternate) {
            if (!(record->liveFlags.unk50 & 0x8000))
                continue;
        } else if (!(record->liveFlags.unk50 & 0x400)) {
            continue;
        }
        if (record->liveFlags.unk10C & 2)
            continue;
        BtlUnitDataA *subject = btlFindEntryBlockByMemberId(battle, record->combatant.parameterIndex);
        if (!subject)
            continue;
        s32 subjectIndex = idSetFindSubjectIndex(globals->state, record);
        if (subjectIndex < 0)
            subjectIndex = 0;
        s32 id = subject->parts[subjectIndex];
        bool found = false;
        for (s32 existing = 0; existing < 109; ++existing) {
            if (globals->state->retainedRoster.entries[existing].id == id && record->modelMatch.key == globals->state->retainedRoster.entries[existing].key) {
                found = true;
                break;
            }
        }
        if (found)
            continue;
        for (s32 index = 0; index < 109; ++index) {
            BattleRetainedRosterEntry *entry = &globals->state->retainedRoster.entries[index];
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
