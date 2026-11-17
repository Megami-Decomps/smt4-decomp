#include "gamedata/NkmBaseRecordA.h"

extern "C" {
/* Sorts demon ids by level (descending), then by id (ascending). */
s32 tableKeyDescCompare(const u16 *left, const u16 *right)
{
    NkmBaseRecordA *leftRecord = nkmBaseGetRecord(*left);
    NkmBaseRecordA *rightRecord = nkmBaseGetRecord(*right);
    s32 result = rightRecord->level - leftRecord->level;
    return result != 0 ? result : *left - *right;
}
}
