/* NON_MATCHING: retail places the tier-0 and tier-99 blocks after the loop's exit tails, and duplicates the two delete tails; armcc lays the branches out in source order and merges the tails (138 vs 140 rows). */
#include "common.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"

extern "C" {

/* One record of the table (0x10 bytes): a randomly chosen effect, gated by tier and a game flag. */
typedef struct EffectChoice {
    /* 0x00 */ s16 kind;      /* the kind the caller asks for (0 = unused) */
    /* 0x02 */ s16 tier;      /* 0 = always, 99 = last resort, else a rising tier */
    /* 0x04 */ u32 effect;
    /* 0x08 */ u32 soundWord;
    /* 0x0C */ u32 flagId;    /* game flag that unlocks the record */
} EffectChoice;

/* The slice of g_btlMain this function reads. */
typedef struct EffectChoiceMasks {
    /* 0x000 */ u8 unk000[0x130];
    /* 0x130 */ u64 choiceMask;
} EffectChoiceMasks;

extern EffectChoiceMasks g_btlMain;

void *asdOperatorNewD(u32 size);
void asdOperatorDeleteC(void *block);
void *sysMemClear(void *destination, u32 size);
void qsort(void *elements, u32 count, u32 elementSize, s32 (*compare)(const void *, const void *));
s32 FUN_00221c14(const void *a, const void *b);
s32 gameFlagIsSet(u32 flag);
s32 lcgRandomRange(u32 limit);
u32 repackWord(u32 word);

/* Picks a random effect of the given kind from table 10's section: the records of the kind are
 * sorted, then walked keeping those whose tier rises (and whose flag is set) until a last-resort
 * record; battle blocking flags can veto the gated ones. Outputs the effect and its sound word. */
void FUN_003f1b3c(BtlMainStateA *state, s32 section, s32 kind, u32 *effect, u32 *sound)
{
    *effect = 0;
    *sound = 0;
    if (section <= 0 || section >= 9) {
        return;
    }
    void *table = dataTableGet(10, section);
    EffectChoice *records = (EffectChoice *)dataTableGetEntries(table);
    u32 recordCount = dataTableGetCount(table);
    EffectChoice **matching = (EffectChoice **)asdOperatorNewD(recordCount * sizeof(EffectChoice *));
    sysMemClear(matching, recordCount * sizeof(EffectChoice *));

    s32 matchCount = 0;
    for (u32 i = 0; i < recordCount; i++) {
        EffectChoice *record = &records[i];
        if (record->kind != 0 && record->kind == kind) {
            matching[matchCount++] = record;
        }
    }
    if (matchCount != 0) {
        qsort(matching, matchCount, sizeof(EffectChoice *), FUN_00221c14);
        EffectChoice **candidates = (EffectChoice **)asdOperatorNewD(matchCount * sizeof(EffectChoice *));
        sysMemClear(candidates, matchCount * sizeof(EffectChoice *));

        s32 candidateCount = 0;
        s32 lastTier = 1;
        for (s32 i = 0; i < matchCount; i++) {
            EffectChoice *record = matching[i];
            s16 tier = record->tier;

            if (tier != 0) {
                if (tier != 99) {
                    if ((state->stateFlags64.bits & g_btlMain.choiceMask) == 0 && lastTier != 99 && lastTier <= tier
                        && (tier == 1 || gameFlagIsSet(record->flagId))) {
                        candidates[candidateCount++] = record;
                        lastTier = record->tier;
                    }
                } else if ((state->stateFlags64.bits & g_btlMain.choiceMask) == 0 && gameFlagIsSet(record->flagId)) {
                    candidates[candidateCount++] = record;
                    lastTier = 99;
                }
            } else if (lastTier != 99) {
                candidates[candidateCount++] = record;
                lastTier = 0;
            }
        }
        if (candidateCount != 0) {
            EffectChoice *chosen = candidates[lcgRandomRange((u16)(candidateCount - 1))];
            *effect = chosen->effect;
            *sound = repackWord(chosen->soundWord);
        }
        asdOperatorDeleteC(candidates);
        asdOperatorDeleteC(matching);
        return;
    }
    asdOperatorDeleteC(matching);
}

}
