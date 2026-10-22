#include "gamedata/DevilPairSortEntry.h"

// Places empty entries last, then sorts by descending count/race and ascending level.
extern "C" s32 FUN_002e45f8(const DevilPairSortEntry* left, const DevilPairSortEntry* right)
{
    s32 result = right->count;
    if (left->count == 0) {
        return result != 0;
    }
    if (result == 0) {
        result = -1;
    } else {
        result = result - left->count;
        if (result == 0) {
            DevilSortRecord* leftDevil = devilGetRecord(left->id);
            DevilSortRecord* rightDevil = devilGetRecord(right->id);
            result = rightDevil->race - leftDevil->race;
            if (result == 0) {
                result = leftDevil->level - rightDevil->level;
                if (result == 0) {
                    result = rightDevil->id - leftDevil->id;
                }
            }
        }
    }
    return result;
}
