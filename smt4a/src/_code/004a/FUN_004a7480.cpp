#include "gamedata/DevilRecordA.h"

extern "C" {
/* Sorts demon ids by level (ascending), then by id (descending). */
s32 FUN_004a7480(const u16 *left, const u16 *right)
{
    DevilRecordA *leftRecord = devilGetRecord(*left);
    DevilRecordA *rightRecord = devilGetRecord(*right);
    s32 result = leftRecord->level - rightRecord->level;
    return result != 0 ? result : *right - *left;
}
}
