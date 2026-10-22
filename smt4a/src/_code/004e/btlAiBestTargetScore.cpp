#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

typedef struct BtlActionState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unitId;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u64 targetFlags; /* combatant flags the action applies to */
} BtlActionState;

typedef struct BtlUnitScore {
    s32 entry;  /* 0x00: combatant entry index, < 0 when unused */
    s32 score;  /* 0x04 */
} BtlUnitScore;

typedef struct BtlUnitScores {
    u8 unk000[0x5B8];
    BtlUnitScore scores[133]; /* 0x5B8 */
} BtlUnitScores;

typedef struct BtlContextA {
    BtlMainStateA *state; /* 0x00 */
} BtlContextA;

extern BtlActionState g_btlAction;

BtlUnitScores *btlUnitGet(BtlContextA *context);
s32 FUN_004e83ac(BtlContextA *context, BtlUnitScores *unit, s32 unitIndex);

/* Returns the best score among the unit's entries whose combatant matches the action's target flags. */
s32 btlAiBestTargetScore(BtlContextA *context)
{
    BtlUnitScores *unit = btlUnitGet(context);
    s32 best = 0;
    s32 i;

    for (i = 0; i < 133; i++) {
        if (unit->scores[i].entry >= 0 || unit->scores[i].score != 0) {
            BtlCombatantEntryA *entry = &context->state->entries[unit->scores[i].entry];

            if ((entry->flags & g_btlAction.targetFlags) != 0 &&
                FUN_004e83ac(context, unit, entry->unitIndex) == 0 && unit->scores[i].score > best) {
                best = unit->scores[i].score;
            }
        }
    }
    return best;
}

} /* extern "C" */
