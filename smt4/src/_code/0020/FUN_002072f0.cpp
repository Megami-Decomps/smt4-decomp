/* NON_MATCHING: only the prologue differs: retail copies left to r5 before right to r4 and loads *left through r5; the build copies right first and loads *left through r0. */
/* Orders valid unit slots by demon priority/race, slot rank, then descending demon ID. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 devilSortCompareUnitRankRaceId(const s32 *left, const s32 *right);

static inline s32 compareRaceThenRank(const s32 *left, const s32 *right)
{
    s32 result;
    if (*left < 0) {
        if (*right < 0) {
            return 0;
        }
        return 1;
    } else if (*right < 0) {
        result = -1;
    } else {
        StatBlock *first = gameGetUnitRecord(*left);
        StatBlock *second = gameGetUnitRecord(*right);
        NkmBaseRecord *firstDemon = nkmBaseGetRecord(first->id);
        NkmBaseRecord *secondDemon = nkmBaseGetRecord(second->id);
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
            struct {
                u16 id;
                u8 race;
                u8 level;
            } header;
            u8 unk04;
            u8 priority;
        };
        StatBlock *first = gameGetUnitRecord(*left);
        StatBlock *second = gameGetUnitRecord(*right);
        DevilPriorityView *firstDemon = (DevilPriorityView *)nkmBaseGetRecord(first->id);
        DevilPriorityView *secondDemon = (DevilPriorityView *)nkmBaseGetRecord(second->id);
        order = (s32)secondDemon->priority - firstDemon->priority;
        if (order == 0) {
            return compareRaceThenRank(left, right);
        }
    }
    return order;
}
}
