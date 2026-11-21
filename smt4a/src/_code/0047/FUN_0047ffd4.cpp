/* NON_MATCHING: the replacing record's {state, modifier} pair now lives at [sp] as in retail; the build hoists the
 * 0xFC00 mask into fp and spills the replaced flag where retail keeps the flag in sl and the sources' base in fp. */
#include "gamedata/InheritedAffinities.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {
s32 affinityShouldReplaceState(u32 current, u32 candidate);

/* Merges the two equipment records' affinity states and their signed modifiers; a positive replaceAffinities on
 * the second record replaces the merged affinity with its own. */
void FUN_0047ffd4(const AffinitySourcePair *equipment, EquipmentAffinityValueA *output)
{
    const EquipmentRecordA *sources[2] = { NULL, NULL };
    if (equipment->first != 0)
        sources[0] = itemTableGetEquipmentRecord(equipment->first);
    if (equipment->second != 0)
        sources[1] = itemTableGetEquipmentRecord(equipment->second);
    for (s32 affinity = 0; affinity < 21; ++affinity) {
        s32 modifier = 0;
        bool replaced = false;
        u16 replacementState = 0;
        s32 replacementModifier = 0;
        for (u32 source = 0; source < 2; ++source) {
            if (sources[source] == NULL)
                continue;
            u8 state = (u8)(sources[source]->affinities[affinity].raw >> 10);
            if (affinityShouldReplaceState(output->fields.state, state)) {
                output->fields.state = state;
                modifier = sources[source]->affinities[affinity].fields.modifier;
            }
            if (source == 1 && sources[1]->replaceAffinities > 0) {
                replacementState = sources[1]->affinities[affinity].raw >> 10;
                replacementModifier = sources[1]->affinities[affinity].fields.modifier;
                replaced = true;
                break;
            }
        }
        if (replaced) {
            output->fields.state = replacementState;
            output->fields.modifier = replacementModifier;
        } else {
            output->raw = (output->raw & 0xFC00) | (((output->raw & 0x3FF) + modifier) & 0x3FF);
        }
        ++output;
    }
}
}
