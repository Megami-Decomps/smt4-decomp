/* NON_MATCHING: growth-stat operands and individual packed-skill stores are scheduled differently. */
#include "gamedata/UnitSummary.h"

extern "C" {
const StatBlock *FUN_003ad6e0(u32);
s32 gameRecordCopy(u32, StoredUnitSummary *);
void gameDataStoreRecord(u32, const StoredUnitSummary *);

/* Refresh a stored unit summary from its live stats and growth bonuses. */
void FUN_003a7fec(u32 unused, u32 unitId)
{
    /* Keep the odd-offset padding in StatBlock byte-aligned; view the growth
       extension locally instead of introducing an aligned union at 0x49. */
    struct GrowthView {
        u8 unk000[0x590];
        u16 stats[5];
        u8 unk59A[0x67];
        u8 bonus;
    };
    typedef char GrowthViewOffsets[
        offsetof(GrowthView, stats) == 0x590 &&
        offsetof(GrowthView, bonus) == 0x601 ? 1 : -1];
    const StatBlock *unit = FUN_003ad6e0(unitId);
    const GrowthView *growth = (const GrowthView *)unit;
    StoredUnitSummary summary;
    if (gameRecordCopy(unitId, &summary)) {
        summary.level = unit->level;
        summary.experience = unit->experience;
        summary.id = unit->summary.id;
        summary.kind = unit->summary.kind;
        summary.stats[0] = unit->summary.stats[0] + growth->stats[0];
        summary.baseStats[0] = unit->cur2;
        summary.stats[1] = unit->summary.stats[1] + growth->stats[1];
        summary.baseStats[1] = unit->cur6;
        summary.stats[2] = unit->summary.stats[2] + growth->stats[2];
        summary.baseStats[2] = unit->cur3;
        summary.stats[3] = unit->summary.stats[3] + growth->stats[3];
        summary.baseStats[3] = unit->cur4;
        summary.stats[4] = unit->summary.stats[4] + growth->stats[4];
        summary.baseStats[4] = unit->cur5;
        for (u32 word = 0; word < 4; ++word)
            summary.skills.words[word] = unit->skills.words[word];
        summary.optionBits.bonus = growth->bonus;
        gameDataStoreRecord(unitId, &summary);
    }
}
}
