/* NON_MATCHING: retail repeats fallback record lookups through comparator stages that this source expresses as separate helpers. */
/* Orders valid unit slots by demon priority/race, slot rank, then descending demon ID. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 devilSortCompareUnitRankRaceId(const s32 *left, const s32 *right);

static inline s32 compareRaceThenRank(const s32 *left, const s32 *right)
{
    s32 result;
    if (*left < 0) {
        result = *right < 0 ? 0 : 1;
    } else if (*right < 0) {
        result = -1;
    } else {
        GameUnitSortRecord *first = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*left));
        GameUnitSortRecord *second = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*right));
        DevilSortRecord *firstDemon = devilGetRecord(first->id);
        DevilSortRecord *secondDemon = devilGetRecord(second->id);
        result = secondDemon->race - firstDemon->race;
        if (result == 0) {
            return devilSortCompareUnitRankRaceId(left, right);
        }
    }
    return result;
}

s32 FUN_002072f0(const s32 *left, const s32 *right)
{
    s32 order = 0;
    if (*left < 0) {
        if (*right >= 0) {
            order = 1;
        }
    } else if (*right < 0) {
        order = -1;
    } else {
        /* The secondary priority byte is past the shared demon sort prefix. */
        struct DevilPriorityView {
            DevilSortRecord header;
            u8 unk04;
            u8 priority;
        };
        GameUnitSortRecord *first = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*left));
        GameUnitSortRecord *second = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*right));
        DevilPriorityView *firstDemon = (DevilPriorityView *)devilGetRecord(first->id);
        DevilPriorityView *secondDemon = (DevilPriorityView *)devilGetRecord(second->id);
        order = (s32)secondDemon->priority - firstDemon->priority;
        if (order == 0) {
            return compareRaceThenRank(left, right);
        }
    }
    return order;
}
}
