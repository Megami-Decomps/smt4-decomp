#include "gamedata/DataTable.h"
#include "map/MapStateSlots.h"
#include "addon/aocMain.h"
#include "util/Random.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/GameDataAccess.h"
#include "addon/AocSystem.h"

namespace {
struct MapRewardIndex {
    u16 id;
    u16 unk02;
};
struct MapRewardChoice {
    u16 id;
    u16 weight;
    u16 requiredFlag;
    u16 unk06;
};
struct MapRewardSet {
    MapRewardChoice choices[4];
};
typedef char MapRewardSetSizeCheck[sizeof(MapRewardSet) == 0x20 ? 1 : -1];
}

extern "C" {
extern MapStateSlots *g_mapStateSlots;
s32 flagValueRead(u16 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
void saveFlagSetOrAddCounter(u16 id, s32 amount);

/* Row `index` of data table 0x20's section 0 (the reward group index), or NULL past the end. */
static __inline MapRewardIndex *mapRewardIndexAt(u32 index)
{
    void *table = dataTableGet(0x20, 0);
    MapRewardIndex *record = (MapRewardIndex *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index >= count)
        record = NULL;
    else
        record += index;
    return record;
}

/* Row `index` of data table 0x20's section 1 (the reward sets), or NULL past the end. */
static __inline MapRewardSet *mapRewardSetAt(u32 index)
{
    void *table = dataTableGet(0x20, 1);
    MapRewardSet *record = (MapRewardSet *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index >= count)
        record = NULL;
    else
        record += index;
    return record;
}

/* The reward set of `id`: the add-on content's override, or else row `id` of data table 0x20's section 1 (the
 * record-or-fallback lookup aocGetTableRecordOrFallback and dataTableGetRecord02 do for tables 3 and 2). */
static __inline MapRewardSet *mapRewardSetFind(u32 id)
{
    MapRewardSet *set = (MapRewardSet *)aocFindDisplayNameOverrideText(g_aocSystem, id);
    if (set == NULL)
        set = mapRewardSetAt(id);
    return set;
}

/* Picks a reward of group `group` by weighted roll over its choices whose flag is set; when `award` is set, adds
 * one of it unless its counter is at capacity (then flags that instead). Returns the reward id, 0 for none. */
u16 mapRewardRollAndAward(u32 group, s32 award)
{
    g_mapStateSlots->reward.atCapacity = 0;
    MapRewardIndex *index = mapRewardIndexAt(group);
    if (index == NULL) {
        return 0;
    }
    const u32 id = index->id;
    MapRewardSet *rewards = mapRewardSetFind(id);
    if (rewards == NULL) {
        return 0;
    }
    u16 selected = 0;
    s32 totalWeight = 0;
    for (s32 i = 0; i < 4; ++i) {
        if (rewards->choices[i].id != 0 && (rewards->choices[i].requiredFlag == 0 || gameFlagIsSet(rewards->choices[i].requiredFlag) != 0)) {
            totalWeight += rewards->choices[i].weight;
        }
    }
    if (totalWeight == 0) {
        return 0;
    }
    const s32 roll = randNextInRange(static_cast<u16>(totalWeight - 1));
    s32 cumulativeWeight = 0;
    for (s32 i = 0; i < 4; ++i) {
        if (rewards->choices[i].id != 0 && (rewards->choices[i].requiredFlag == 0 || gameFlagIsSet(rewards->choices[i].requiredFlag) != 0)) {
            cumulativeWeight += rewards->choices[i].weight;
            if (roll <= cumulativeWeight) {
                selected = rewards->choices[i].id;
                break;
            }
        }
    }
    if (award != 0) {
        const s32 capacity = recordPackedValue(selected);
        if (flagValueRead(selected) >= capacity) {
            g_mapStateSlots->reward.atCapacity = 1;
        } else {
            saveFlagSetOrAddCounter(selected, 1);
        }
    }
    return selected;
}
}
