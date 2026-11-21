/* NON_MATCHING: the 64-bit flag-mask tests (ldrd/ldm pairs and the orrs combine) and the register allocation of the two loops differ from retail; the candidate selection logic is the same. */
#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* One combatant entry of the battle state (0x408 bytes); only the fields read here. */
typedef struct CandidateEntry {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x66];
    /* 0x06E */ u16 id;
    /* 0x070 */ u8 unk070[0x320];
    /* 0x390 */ u16 value;
    /* 0x392 */ u8 unk392[0x76];
} CandidateEntry;

/* The slice of the battle state this function reads and writes. */
typedef struct CandidateState {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ CandidateEntry *entries;
    /* 0x2000 */ u8 unk2000[4];
    /* 0x2004 */ u16 result;
    /* 0x2006 */ u8 unk2006[0x1000];
    /* 0x3006 */ u16 candidates[12];
    /* 0x301E */ s16 chosen;
    /* 0x3020 */ u8 unk3020[0x1580];
    /* 0x45A0 */ u64 flags;
    /* 0x45A8 */ u8 unk45a8[0x7C4];
    /* 0x4D6C */ s32 count;
} CandidateState;

/* The slice of g_btlMain holding the masks tested against the flag words. */


void battleSortTurnOrder(CandidateState *state, s32 count);
s16 FUN_0034ef58(s32 low, s32 high);

enum {
    SPECIAL_ENTRY = 54      /* the entry that stands in for the whole party */
};

/* Whether the entry flags pass the eligibility masks. */
static __inline bool entryEligible(u64 flags)
{
    return (flags & g_btlMain.combatantMasks.required) != 0 && (flags & g_btlMain.exclusionMask) == 0;
}

/* Collects the entries that may act into the candidate list and picks the first one. */
void FUN_003efc40(CandidateState *state)
{
    CandidateEntry *special = &state->entries[SPECIAL_ENTRY];

    if (!entryEligible(special->flags)) {
        return;
    }
    if (state->count <= 0) {
        return;
    }
    s32 i = 0;
    do {
        state->candidates[i] = special->id;
        special->value = 0;
        i++;
    } while (i < state->count);

    s32 start;
    s32 length;
    if ((g_btlMain.partyTarget.mask & state->flags) != 0) {
        start = 4;
        length = 50;
    } else if ((state->flags & g_btlMain.transition.mask) != 0) {
        start = 54;
        length = 1;
    } else {
        start = 0;
        length = 4;
    }
    s32 end = start + length;
    s32 found = i;

    for (s32 j = start; j < end; j++) {
        CandidateEntry *entry = &state->entries[j];

        if (entryEligible(entry->flags)) {
            state->candidates[found] = entry->id;
            entry->value = 0;
            if ((entry->flags & g_btlMain.actorCategories[0]) != 0) {
                entry->value = 5;
            }
            if ((state->flags & g_btlMain.fixedScore.mask) == 0) {
                entry->value += FUN_0034ef58(-3, 3);
            }
            found++;
        }
    }
    u16 result = found > 0 ? 0 : 0xFFFF;
    state->chosen = result;
    if (found > 0) {
        battleSortTurnOrder(state, i);
        result = state->candidates[state->chosen];
    }
    state->result = result;
}

}
