/* NON_MATCHING: empty-slot return sharing and first-stage pointer registers differ. */
#include "gamedata/DevilRecord.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right);

// Sort unit slots by record key, race, and descending unit rank; empty slots sort last.
extern "C" s32 FUN_001a8268(const s32 *left, const s32 *right)
{
    s32 difference = 0;
    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
        return difference;
    }
    if (*right < 0) {
        return -1;
    }
    GameUnitSortRecord *first = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*left));
    GameUnitSortRecord *second = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*right));
    const DevilRecord *firstRecord = (const DevilRecord *)devilGetRecord(first->id);
    const DevilRecord *secondRecord = (const DevilRecord *)devilGetRecord(second->id);
    difference = firstRecord->unk04[1] - secondRecord->unk04[1];
    if (difference != 0) {
        return difference;
    }
    difference = 0;
    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
        return difference;
    }
    if (*right < 0) {
        return -1;
    }
    first = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*left));
    second = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*right));
    const DevilSortRecord *firstDevil = devilGetRecord(first->id);
    const DevilSortRecord *secondDevil = devilGetRecord(second->id);
    difference = firstDevil->race - secondDevil->race;
    if (difference != 0) {
        return difference;
    }
    return comparePartyUnitsByRankRaceAndId(left, right);
}
