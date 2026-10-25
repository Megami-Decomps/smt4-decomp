#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match8_FusionSelection.h"
#include "gamedata/DataTable.h"

struct FusionRaceFilterIV {
    u8 counts[56];
    FusionLevelEntry *levels[56];
    s8 hasDevil;
    u8 unk119;
    u16 devilId;
    s8 hasRace;
    u8 unk11d;
    u16 race;
    u8 unk120[0x22];
    s8 includeSameRace;
};
struct FusionRaceCombination {
    u8 firstRace;
    u8 secondRace;
    u8 resultRace;
    u8 unk03;
};

extern "C" {
u16 *gameDataBlocksGetCounterPtr();
u32 itemGetFlagBit1(u32 id);
}

static __inline u16 firstFusionDevilId()
{
    return gameDataBlocksGetCounterPtr()[4];
}
static __inline u16 lastFusionDevilId()
{
    return gameDataBlocksGetCounterPtr()[5];
}

// Gather available devil IDs, restricting their races to valid fusion partners if selected.
extern "C" s32 fusionCollectAvailableRacePartners(const FusionRaceFilterIV *filter, u16 *output)
{
    s32 count = 0;
    if (filter->hasDevil || filter->hasRace) {
        u8 allowedRaces[56] = {0};
        u32 race;
        if (filter->hasDevil) {
            race = devilGetRecord(filter->devilId)->race;
        } else {
            race = filter->race;
        }
        void *table = dataTableGet(5, 1);
        const FusionRaceCombination *combinations = static_cast<const FusionRaceCombination *>(
            dataTableGetEntries(table));
        u32 combinationCount = dataTableGetCount(table);
        for (u32 index = 0; index < combinationCount; ++index) {
            if (combinations[index].resultRace == race) {
                allowedRaces[combinations[index].firstRace] = 1;
                allowedRaces[combinations[index].secondRace] = 1;
            }
        }
        if (filter->includeSameRace) {
            allowedRaces[0x26] = 1;
            allowedRaces[race] = 1;
        }
        s32 first = firstFusionDevilId();
        s32 last = lastFusionDevilId();
        for (s32 id = first; id <= last; ++id) {
            if (itemGetFlagBit1((u16)id) && allowedRaces[devilGetRecord((u16)id)->race]) {
                output[count++] = (u16)id;
            }
        }
    } else {
        s32 first = firstFusionDevilId();
        s32 last = lastFusionDevilId();
        for (s32 id = first; id <= last; ++id) {
            if (itemGetFlagBit1((u16)id)) {
                output[count++] = (u16)id;
            }
        }
    }
    return count;
}
