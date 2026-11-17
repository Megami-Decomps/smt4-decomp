#include "gamedata/DevilRecordA.h"

extern "C" {
/* Sorts demon ids by level (descending), then by id (ascending). */
s32 tableKeyDescCompare(const u16 *left, const u16 *right)
{
    DevilRecordA *leftRecord = devilGetRecord(*left);
    DevilRecordA *rightRecord = devilGetRecord(*right);
    s32 result = rightRecord->level - leftRecord->level;
    return result != 0 ? result : *left - *right;
}
}
