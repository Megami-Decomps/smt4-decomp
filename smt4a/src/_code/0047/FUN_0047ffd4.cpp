/* NON_MATCHING: replacement affinities copy directly and packed modifier/store operations are optimized differently. */
#include "gamedata/InheritedAffinities.h"

union EquipmentAffinityValueA {
    s16 raw;
    struct {
        s16 modifier : 10;
        u16 state : 6;
    } fields;
};
struct EquipmentAffinityRecordA {
    u8 unk00[0x44];
    EquipmentAffinityValueA affinities[21];
    s16 replaceAffinities;
};
extern "C" {
const EquipmentAffinityRecordA *dataTable08Sub2GetRecord(u32 id);
s32 affinityShouldReplaceState(u32 current, u32 candidate);

// Merge the two equipment records' affinity states and their signed modifiers.
void FUN_0047ffd4(const AffinitySourcePair *equipment, EquipmentAffinityValueA *output)
{
    const EquipmentAffinityRecordA *sources[2] = { NULL, NULL };
    if (equipment->first != 0)
        sources[0] = dataTable08Sub2GetRecord(equipment->first);
    if (equipment->second != 0)
        sources[1] = dataTable08Sub2GetRecord(equipment->second);
    for (s32 affinity = 0; affinity < 21; ++affinity, ++output) {
        s32 modifier = 0;
        bool replaced = false;
        for (u32 source = 0; source < 2; ++source) {
            if (sources[source] == NULL)
                continue;
            // The comparison consumes the sign-extended upper byte; the stored state is six bits.
            u8 state = sources[source]->affinities[affinity].raw >> 10;
            if (affinityShouldReplaceState(output->fields.state, state)) {
                output->fields.state = state;
                modifier = sources[source]->affinities[affinity].fields.modifier;
            }
            if (source == 1 && sources[1]->replaceAffinities > 0) {
                *output = sources[1]->affinities[affinity];
                replaced = true;
                break;
            }
        }
        if (!replaced)
            output->fields.modifier += modifier;
    }
}
}
