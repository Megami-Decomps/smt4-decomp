/* Merges two inherited affinity sets, adding the adjustment of the winning state. */
#include "gamedata/InheritedAffinities.h"
#include "shard/W6_W6Match3_MapMarkerModels.h"

extern "C" {
InheritedAffinityRecord *dataTable08Sub2GetRecord(u32 id);
s32 affinityShouldReplaceState(u16 current, u32 candidate);

void FUN_00394edc(const AffinitySourcePair *pair, u16 *affinities)
{
    InheritedAffinityRecord *sources[2] = { NULL, NULL };
    if (pair->first != 0) {
        sources[0] = dataTable08Sub2GetRecord(pair->first);
    }
    if (pair->second != 0) {
        sources[1] = dataTable08Sub2GetRecord(pair->second);
    }
    for (s32 i = 0; i < 18; ++i) {
        s32 adjustment = 0;
        for (u32 source = 0; source < 2; ++source) {
            if (sources[source] != NULL) {
                u8 state = (u8)(sources[source]->affinities[i] >> 10);
                if (affinityShouldReplaceState(*affinities >> 10, state) != 0) {
                    *affinities = (*affinities & 0x3FF) | ((state << 10) & 0xFC00);
                    adjustment = (s16)((u16)sources[source]->affinities[i] << 6) >> 6;
                }
            }
        }
        *affinities = (*affinities & 0xFC00) | (((*affinities & 0x3FF) + adjustment) & 0x3FF);
        ++affinities;
    }
}
}
