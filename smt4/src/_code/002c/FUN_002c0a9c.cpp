/* NON_MATCHING: weight-branch layout, grouped weight arithmetic and flag masking/register allocation differ. */
#include "common.h"

struct WeightedTableState { u16 value; u8 usedGroups, flags; };
struct WeightedTableChoice { u16 value, weight, duration; };
struct WeightedTableRecord {
    u8 prefix[0xE];
    u16 defaultValue;
    WeightedTableChoice choices[24];
};
extern "C" {
u8 FUN_002c0a84();
WeightedTableState *gameDataGetTableEntry(u32 type, u32 id);
const WeightedTableRecord *aocEntryFind(u32 type, u32 id);
u32 randNextInRange(u32 maximum);

u32 FUN_002c0a9c(u32 type, u32 id, s32 suppressNotification)
{
    s32 phase = FUN_002c0a84();
    WeightedTableState *state = gameDataGetTableEntry(type, id);
    if (phase == 0)
        state->usedGroups = 0;
    u8 flags = state->flags;
    if ((flags & 0x1F) >= 2) {
        state->flags = (flags & 0xE0) | ((flags - 1) & 0x1F);
        return 0;
    }
    state->flags = flags & 0xE0;
    const WeightedTableRecord *record = aocEntryFind(type, id);
    u16 nextValue = record->defaultValue;
    const WeightedTableChoice *choice = &record->choices[phase];
    if (choice->weight != 0) {
        if (choice->weight < 1000) {
            if (choice->weight > randNextInRange(99) && choice->value != 0)
                nextValue = choice->value;
        } else {
            s32 group = choice->weight / 1000u;
            u32 groupBit = 1u << (group - 1);
            if ((state->usedGroups & groupBit) == 0) {
                u32 total = 0;
                for (s32 index = 0; index < phase + 1; ++index) {
                    s32 weight = record->choices[index].weight;
                    if (group * 1000 < weight && weight < (group + 1) * 1000)
                        total += weight - group * 1000;
                }
                if (randNextInRange(99) < total) {
                    nextValue = choice->value;
                    state->usedGroups |= groupBit;
                }
            }
        }
    } else if (choice->value != 0) {
        nextValue = choice->value;
    }
    if (state->value == nextValue)
        return 0;
    state->value = nextValue;
    flags = state->flags;
    state->flags = (flags & 0xE0) | (choice->duration & 0x1F);
    if (suppressNotification == 0 && (flags & 0x40) != 0)
        state->flags |= 0x20;
    return 1;
}
}
