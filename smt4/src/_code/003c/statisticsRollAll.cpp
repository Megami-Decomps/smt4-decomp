/* NON_MATCHING: 6 lines: written as smt4a's FUN_004cd960 (IDENTICAL) with the roll in a static helper; only the held count's decrement takes other registers (retail bic r0 / and r1, armcc bic r2 / and r0). */
#include "common.h"
#include "gamedata/CategoryVariantRecord.h"
#include "shard/W6_W6Match5_StatisticsBanks.h"
#include "shard/W4_W4Match5_DataTable.h"
#include "util/Random.h"

extern "C" {

CategoryVariantRecord *dataTable24Sub0GetEntries(void);
s32 dataTable24Sub0Get(void);
StatisticsCounter *statisticsGetCounter(s32 bank, s32 row, s32 column);
CategoryVariantRecord *dataTableFindCategoryVariant(u8 kind, u8 category, u16 variant);
s32 gameFlagIsSet(u32 flag); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Clears a statistic's roll: no result, no group used, nothing held. */
static __inline void statisticsClearRoll(StatisticsCounter *state)
{
    state->fields.count = 0;
    state->fields.rolledMask = 0;
    state->fields.countdown = 0;
    state->fields.changed = 0;
}

/* Rolls one statistic's result for the current phase, as weightedTableRollNextValue rolls an encounter
 * table: a held result counts its rolls down first, then the phase's slot applies by weight; a result that
 * appears or disappears is stored with its hold count. */
static void statisticsRoll(u8 kind, u8 category, u16 variant)
{
    s32 phase = FUN_002c0a84();
    StatisticsCounter *state = statisticsGetCounter(kind, category, variant);
    if (phase == 0)
        state->fields.rolledMask = 0;
    if (state->fields.countdown > 1) {
        state->fields.countdown--;
        return;
    }
    state->fields.countdown = 0;
    CategoryVariantRecord *table = dataTableFindCategoryVariant(kind, category, variant);
    u16 result = state->fields.count;
    const EncountSlot *slot = &table->slots[phase];
    if (slot->weight == 0) {
        result = 0;
    } else if (slot->weight < 1000) {
        u32 roll = randNextInRange(99);
        if (roll < slot->weight && slot->tableId != 0)
            result = slot->tableId;
    } else {
        s32 rollGroup = (u8)(slot->weight / 1000);
        u32 groupBit = 1u << (rollGroup - 1);
        if ((state->fields.rolledMask & groupBit) == 0) {
            u32 total = 0;
            for (s32 index = 0; index < phase + 1; ++index) {
                s32 weight = table->slots[index].weight;
                if (rollGroup * 1000 < weight && weight < (rollGroup + 1) * 1000)
                    total += weight - rollGroup * 1000;
            }
            u32 roll = randNextInRange(99);
            if (roll < total) {
                result = slot->tableId;
                state->fields.rolledMask |= groupBit;
            }
        }
    }
    if (gameFlagIsSet(0x668) != 0 && gameFlagIsSet(0x1d7) == 0 &&
        ((kind == 0 && category == 8) || (kind == 1 && category == 9))) {
        statisticsClearRoll(state);
    } else if ((state->fields.count != 0 && result == 0) || (state->fields.count == 0 && result != 0)) {
        state->fields.count = result;
        state->fields.countdown = slot->holdFrames;
    }
}

/* Rolls every statistic listed in data table 0x24: clears its roll state, then rolls it for the current phase. */
void statisticsRollAll(void)
{
    CategoryVariantRecord *requests = dataTable24Sub0GetEntries();
    s32 count = dataTable24Sub0Get();
    for (s32 i = 0; i < count; i++) {
        u8 category = requests[i].category;
        u8 kind = requests[i].kind;
        u16 variant = requests[i].variant;
        if (kind != 0) {
            if (variant == 6)
                variant = 0;
            else if (variant == 7)
                variant = 1;
        } else if (variant == 7) {
            variant = 6;
        }
        statisticsClearRoll(statisticsGetCounter(kind, category, variant));
        statisticsRoll(kind, category, variant);
    }
}

} /* extern "C" */
