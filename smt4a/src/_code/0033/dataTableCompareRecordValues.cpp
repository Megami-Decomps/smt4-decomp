#include "common.h"
#include "quest_center/QuestRecordA.h"
extern "C" {
s32 dataTableCompareRecordValues(const u16 *firstIndex, const u16 *secondIndex)
{
    QuestRecordA *first = dataTable1bOr1cGetRecord(*firstIndex);
    QuestRecordA *second = dataTable1bOr1cGetRecord(*secondIndex);
    if (first == NULL) {
        return 0;
    }
    if (second == NULL) {
        return 0;
    }
    return second->order - first->order;
}
}
