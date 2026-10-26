/* NON_MATCHING: retail tests the devil flag first (second flag load predicated) and anchors every field on selection+0x100, and counts the rule loop with ne (the build reads the race flag first and uses gt). Row counts and the control flow match. */
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_FusionSelection.h"

struct FusionRaceRule {
    u8 first;
    u8 second;
    u8 result;
    u8 unk03;
};
struct FusionCandidateRange {
    u8 unk00[8];
    u16 first;
    u16 last;
};

extern "C" {
void sysMemClear(void *memory, u32 size);
FusionCandidateRange *gameDataGetSmallBlock(void);
s32 FUN_002a4b28(u16 id);

s32 fusionCollectEligibleDemonsByRace(const FusionRaceSelection *selection, s16 *outIds)
{
    s32 count = 0;
    s8 hasDevil = selection->hasDevil;
    if (selection->hasRace || hasDevil) {
        u8 allowedRaces[0x44];
        sysMemClear(allowedRaces, sizeof(allowedRaces));
        u32 race;
        if (hasDevil) {
            race = FUN_00184310(selection->devilId)->race;
        } else {
            race = selection->race;
        }
        void *table = dataTableGet(5, 1);
        FusionRaceRule *rule = static_cast<FusionRaceRule *>(dataTableGetEntries(table));
        s32 ruleCount = dataTableGetCount(table);
        for (; ruleCount != 0; --ruleCount, ++rule) {
            if (rule->result == race) {
                allowedRaces[rule->first] = 1;
                allowedRaces[rule->second] = 1;
            }
        }
        if (selection->includeSameRace) {
            allowedRaces[0x26] = 1;
            allowedRaces[race] = 1;
        }
        s32 first = gameDataGetSmallBlock()->first;
        s32 last = gameDataGetSmallBlock()->last;
        for (s32 id = first; id <= last; ++id) {
            if (FUN_002a4b28(id) && allowedRaces[FUN_00184310(static_cast<u16>(id))->race]) {
                outIds[count++] = id;
            }
        }
    } else {
        s32 first = gameDataGetSmallBlock()->first;
        s32 last = gameDataGetSmallBlock()->last;
        for (s32 id = first; id <= last; ++id) {
            if (FUN_002a4b28(id)) {
                outIds[count++] = id;
            }
        }
    }
    return count;
}
}
