#include "common.h"
#include "gamedata/EncountData.h"
#include "gamedata/GameDataEntries.h"
#include "code/Code0015.h"
#include "util/Random.h"

extern "C" {
/* Rolls the encounter table of (map, area) for the current phase: a held table counts its rolls down
 * first, then the phase's slot applies by weight (below 1000 a percentage, above it a group of weights
 * shared across phases, each group used once). Returns 1 when the table changed. */
u32 weightedTableRollNextValue(u32 map, u32 area, s32 suppressNotification)
{
    s32 phase = FUN_0015fb68();
    ItemFlagCacheState *state = gameDataGetTableEntry(map, area);
    if (phase == 0)
        state->count = 0;
    if (state->bits.holdFrames > 1) {
        state->bits.holdFrames--;
        return 0;
    }
    state->bits.holdFrames = 0;
    const EncountRecordA *record = dataTable02FindConditionalMapRecord(map, area);
    u16 tableId = record->initialTableId;
    const EncountSlot *slot = &record->slots[phase];
    if (slot->weight == 0) {
        if (slot->tableId != 0)
            tableId = slot->tableId;
    } else {
        if (slot->weight < 1000) {
            u32 roll = randRange(99);
            if (roll < slot->weight && slot->tableId != 0)
                tableId = slot->tableId;
        } else {
            s32 group = (u8)(slot->weight / 1000); /* the group's bit lives in the u8 mask */
            u32 groupBit = 1u << (group - 1);
            if ((state->count & groupBit) == 0) {
                u32 total = 0;
                for (s32 index = 0; index < phase + 1; ++index) {
                    s32 weight = record->slots[index].weight;
                    if (group * 1000 < weight && weight < (group + 1) * 1000)
                        total += weight - group * 1000;
                }
                u32 roll = randRange(99);
                if (roll < total) {
                    tableId = slot->tableId;
                    state->count |= groupBit;
                }
            }
        }
    }
    if (state->value == tableId)
        return 0;
    state->value = tableId;
    state->bits.holdFrames = slot->holdFrames;
    if (suppressNotification == 0 && state->bits.notify)
        state->bits.changed = 1;
    return 1;
}
}
