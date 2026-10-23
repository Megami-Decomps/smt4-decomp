/* NON_MATCHING: inlined marked-opponent search omits retail's state-pointer copy and allocates the roster-index arithmetic differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

static inline BattleRosterRecordA *findFirstMarkedOpponent(BtlMainStateA *state)
{
    for (s32 index = 4; index < 54; ++index) {
        BtlCombatantEntryA *entry = &state->entries[index];
        if (entry->selection.marked != 0) {
            return &state->roster[entry->unitIndex];
        }
    }
    return NULL;
}

extern "C" {
void *FUN_00178b04(u32 size, const char *file, s32 line);
u32 *battleModelOwnerInitialize(u32 *owner);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, s32 group);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void modelOwnerLoadNamed(u32 *owner, const char *name);

// Load the environment submodel belonging to the first marked opponent.
void FUN_003e9b74(BtlMainStateA *state)
{
    // The identifier is beyond the established BattleCandidateRecord prefix.
    struct EnvironmentResourceView {
        u8 unk00[0x8C];
        s16 identifier;
    };
    typedef char IdentifierOffsetCheck[offsetof(EnvironmentResourceView, identifier) == 0x8C ? 1 : -1];

    u32 *owner = (u32 *)FUN_00178b04(0x24, "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlMain.cpp", 0x3626);
    state->environmentModel.owner = owner != NULL ? battleModelOwnerInitialize(owner) : NULL;
    char name[64] = {};
    BattleRosterRecordA *selected = findFirstMarkedOpponent(state);
    BtlCombatantEntryA *entry = FUN_003f0e20(state, selected->motion.group);
    EnvironmentResourceView *resource = (EnvironmentResourceView *)entry->candidate.record;
    textFormatBuffer(name, "battle/model/en%03d_sub.bam", resource->identifier);
    modelOwnerLoadNamed(state->environmentModel.owner, name);
    state->environmentModel.loaded = 1;
}
}
