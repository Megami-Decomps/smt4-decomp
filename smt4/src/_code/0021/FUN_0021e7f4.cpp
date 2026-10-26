/* NON_MATCHING: table bounds comparisons, override/fallback branch layout and reward-set register assignment differ. */
#include "gamedata/DataTable.h"
#include "map/MapStateSlots.h"
#include "addon/aocMain.h"
#include "util/Random.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/GameDataAccess.h"

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
extern AocSystem *g_aocSystem;
MapRewardSet *FUN_00387c78(AocSystem *system, u32 id);
s32 FUN_0028fb40(u16 id);
void FUN_00295a18(u16 id, s32 amount);

u16 FUN_0021e7f4(u32 group, s32 award)
{
    g_mapStateSlots->reward.atCapacity = 0;
    DataTableView<MapRewardIndex> indices(0x20, 0);
    MapRewardIndex *index = indices.at(group);
    if (index == NULL) {
        return 0;
    }
    const u32 id = index->id;
    MapRewardSet *rewards = FUN_00387c78(g_aocSystem, id);
    if (rewards == NULL) {
        DataTableView<MapRewardSet> defaults(0x20, 1);
        rewards = defaults.at(id);
    }
    if (rewards == NULL) {
        return 0;
    }
    u16 selected = 0;
    s32 totalWeight = 0;
    for (s32 i = 0; i < 4; ++i) {
        const MapRewardChoice *choice = &rewards->choices[i];
        if (choice->id != 0 && (choice->requiredFlag == 0 || gameFlagIsSet(choice->requiredFlag) != 0)) {
            totalWeight += choice->weight;
        }
    }
    if (totalWeight == 0) {
        return 0;
    }
    const s32 roll = randNextInRange(static_cast<u16>(totalWeight - 1));
    s32 cumulativeWeight = 0;
    for (s32 i = 0; i < 4; ++i) {
        const MapRewardChoice *choice = &rewards->choices[i];
        if (choice->id != 0 && (choice->requiredFlag == 0 || gameFlagIsSet(choice->requiredFlag) != 0)) {
            cumulativeWeight += choice->weight;
            if (cumulativeWeight >= roll) {
                selected = rewards->choices[i].id;
                break;
            }
        }
    }
    if (award != 0) {
        const s32 capacity = recordPackedValue(selected);
        if (FUN_0028fb40(selected) >= capacity) {
            g_mapStateSlots->reward.atCapacity = 1;
        } else {
            FUN_00295a18(selected, 1);
        }
    }
    return selected;
}
}
