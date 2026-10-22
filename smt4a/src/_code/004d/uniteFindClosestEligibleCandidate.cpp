/* NON_MATCHING: eligibility cold-block placement and field-load registers differ; the compact save record is placed at a different stack offset/frame size. */
#include "shard/W6_W6Match8_FusionSelection.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

struct FusionSavedDemon {
    u8 unk00[0x36];
    u16 flags;
    u8 unk38[0x18];
};

extern "C" {
s32 gameFlagIsSet(u32 flag);
u32 gameDataCopySaveEntry(u32 id, void *out);
s32 entryDefIsAvailable(FusionRaceSelection *selection, u16 id);

u32 uniteFindClosestEligibleCandidate(FusionRaceSelection *selection, s32 race, u32 level, s32 checkRecord)
{
    u16 bestDifference = 999;
    u32 bestId = 0;
    u32 count = selection->counts[race];
    if (count != 0) {
        u32 highestLevel = selection->levels[race][count - 1].level;
        u32 threshold = level;
        if (highestLevel > threshold) {
            threshold = highestLevel;
        }
        for (s32 index = 0; index < selection->counts[race]; ++index) {
            u32 candidateLevel = selection->levels[race][index].level;
            if (candidateLevel > threshold || static_cast<s32>(threshold - candidateLevel) >= bestDifference) {
                continue;
            }
            u16 id = selection->levels[race][index].id;
            if (checkRecord) {
                const DevilRecordA *record = FUN_00184310(id);
                if (record->fusionRestrictions & 0x1c00000) {
                    continue;
                }
                if (record->unlockFlag != 0 && !gameFlagIsSet(record->unlockFlag)) {
                    continue;
                }
                if (record->saveRequirement & 1) {
                    FusionSavedDemon saved;
                    if (record->saveRequirement & 0xfffe) {
                        if (!gameDataCopySaveEntry(record->saveRequirement >> 1, &saved) || !(saved.flags & 0xfc)) {
                            continue;
                        }
                    } else if (!gameDataCopySaveEntry(record->id, &saved) || !(saved.flags & 0xfc)) {
                        continue;
                    }
                }
                if (!(record->flags & 1)) {
                    continue;
                }
            } else if (!entryDefIsAvailable(selection, id)) {
                continue;
            }
            bestId = selection->levels[race][index].id;
            bestDifference = threshold - selection->levels[race][index].level;
        }
    }
    return bestId;
}
}
