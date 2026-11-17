#include "common.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

/* Compares the record keys selected by two halfword identifiers. */
s32 dataTable1bOr1cCompareRecordKeys(const u16 *left, const u16 *right)
{
    QuestRecordA *a = dataTable1bOr1cGetRecord(*left);
    QuestRecordA *b = dataTable1bOr1cGetRecord(*right);
    if (a == NULL) {
        return 0;
    }
    if (b == NULL) {
        return 0;
    }
    return a->order - b->order;
}

} /* extern "C" */
