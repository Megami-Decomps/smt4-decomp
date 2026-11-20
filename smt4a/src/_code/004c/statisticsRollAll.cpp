#include "util/Random.h"
#include "common.h"
#include "code/Code0015.h"
#include "gamedata/DataTableAccess.h"
#include "gamedata/DataTableAccess_Smt4a.h"
#include "gamedata/CategoryVariantRecord.h"
#include "shard/W6_W6Match5_StatisticsBanks.h"

extern "C" {
StatisticsCounter *statisticsGetCounter(s32 bank, s32 row, s32 column);
s32 FUN_00148bb8(u32 id, u8 kind);
CategoryVariantRecord *dataTableFindCategoryVariant(u8 kind, u32 id, u16 variant);

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
static void statisticsRoll(u8 kind, u32 id, u16 variant)
{
    s32 phase = FUN_0015fb68();
    StatisticsCounter *state = statisticsGetCounter(kind, id, variant);
    u32 owned = FUN_00148bb8(id, kind);
    if (owned == 0) {
        state->fields.count = 0;
        state->fields.countdown = 0;
    }
    if (phase == 0)
        state->fields.rolledMask = 0;
    if (state->fields.countdown > 1) {
        state->fields.countdown--;
        return;
    }
    state->fields.countdown = 0;
    CategoryVariantRecord *table = dataTableFindCategoryVariant(kind, id, variant);
    u16 result = state->fields.count;
    const EncountSlot *slot = &table->slots[phase];
    if ((-owned & slot->weight) == 0) {
        result = 0;
    } else if (slot->weight < 1000) {
        u32 roll = randRange(99);
        if (roll < slot->weight && slot->tableId != 0)
            result = slot->tableId;
    } else {
        s32 group = (u8)(slot->weight / 1000);
        u32 groupBit = 1u << (group - 1);
        if ((state->fields.rolledMask & groupBit) == 0) {
            u32 total = 0;
            for (s32 index = 0; index < phase + 1; ++index) {
                s32 weight = table->slots[index].weight;
                if (group * 1000 < weight && weight < (group + 1) * 1000)
                    total += weight - group * 1000;
            }
            u32 roll = randRange(99);
            if (roll < total) {
                result = slot->tableId;
                state->fields.rolledMask |= groupBit;
            }
        }
    }
    if ((state->fields.count != 0 && result == 0) || (state->fields.count == 0 && result != 0)) {
        state->fields.count = result;
        state->fields.countdown = slot->holdFrames;
    }
}

/* Rolls every statistic listed in data table 18: clears its roll state, then rolls it for the current phase. */
void statisticsRollAll(void)
{
    const StatisticsTableEntry *entries = dataTable18Sub0GetEntries();
    s32 count = dataTable18Sub0GetCount();
    for (s32 n = 0; n < count; n++) {
        u32 id = entries[n].row;
        u8 kind = entries[n].bank;
        u16 variant = entries[n].column;
        if (kind != 0) {
            if (variant == 6)
                variant = 0;
            else if (variant == 7)
                variant = 1;
        } else if (variant == 7) {
            variant = 6;
        }
        statisticsClearRoll(statisticsGetCounter(kind, id, variant));
        statisticsRoll(kind, id, variant);
    }
}
}
