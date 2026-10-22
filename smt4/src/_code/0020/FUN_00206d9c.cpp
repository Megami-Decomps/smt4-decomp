#include "gamedata/DevilPairSortEntry.h"

extern "C" {
// Place empty entries last; sort populated entries by count, race, level and id.
s32 FUN_00206d9c(const DevilPairSortEntry *left, const DevilPairSortEntry *right)
{
    s32 result = right->count;
    if (left->count == 0)
        return result != 0;
    if (result == 0) {
        result = -1;
    } else {
        result = left->count - result;
        if (result == 0) {
            DevilSortRecord *leftDevil = devilGetRecord(left->id);
            DevilSortRecord *rightDevil = devilGetRecord(right->id);
            result = leftDevil->race - rightDevil->race;
            if (result == 0) {
                result = rightDevil->level - leftDevil->level;
                if (result == 0)
                    result = leftDevil->id - rightDevil->id;
            }
        }
    }
    return result;
}
}
