/* NON_MATCHING: 6 lines: the spilled result slot sits at [sp, #92] instead of [sp, #88]; all 101 instructions and the frame size match. */
#include "shard/W6_W6Match8_FusionSelection.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "map/lmapMain.h"

extern "C" {

/* Finds the closest eligible candidate in `race` at or below `level` (clamped to the race's last entry). */
u16 uniteFindClosestEligibleCandidate(FusionRaceSelection *selection, s32 race, u16 level, s32 checkRecord)
{
    u16 result = 0;
    u16 bestDistance = 999;

    if (selection->counts[race] != 0) {
        u16 lastLevel = selection->levels[race][selection->counts[race] - 1].level;
        if (lastLevel > level) {
            level = lastLevel;
        }
        for (s32 index = 0; index < selection->counts[race]; ++index) {
            if (selection->levels[race][index].level > level ||
                (s32)(level - selection->levels[race][index].level) >= bestDistance) {
                continue;
            }
            if (checkRecord == 0) {
                if (!entryDefIsAvailable(selection, selection->levels[race][index].id)) {
                    continue;
                }
            } else {
                const NkmBaseRecordA *record = nkmBaseGetRecord(selection->levels[race][index].id);
                if (record->fusionRestrictions & 0x1c00000) {
                    continue;
                }
                if (record->unlockFlag != 0 && !gameFlagIsSet(record->unlockFlag)) {
                    continue;
                }
                if (record->saveRequirement & 1) {
                    GameSavedItemA saved;
                    if (record->saveRequirement & ~1) {
                        if (!gameDataCopySaveEntry(record->saveRequirement >> 1, &saved) || !(saved.bits & 0xfc)) {
                            continue;
                        }
                    } else {
                        if (!gameDataCopySaveEntry(record->id, &saved) || !(saved.bits & 0xfc)) {
                            continue;
                        }
                    }
                }
                if (!(record->flags & 1)) {
                    continue;
                }
            }
            result = selection->levels[race][index].id;
            bestDistance = level - selection->levels[race][index].level;
        }
    }
    return result;
}

} /* extern "C" */
