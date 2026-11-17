#include "gamedata/NkmBaseRecordA.h"

extern "C" {
/* Sorts demon ids by level (ascending), then by id (descending). */
s32 FUN_004a7480(const u16 *left, const u16 *right)
{
    NkmBaseRecordA *leftRecord = nkmBaseGetRecord(*left);
    NkmBaseRecordA *rightRecord = nkmBaseGetRecord(*right);
    s32 result = leftRecord->level - rightRecord->level;
    return result != 0 ? result : *right - *left;
}
}
