#include "common.h"
#include "quest_center/QuestRecord.h"
extern "C" {
s32 dataTableCompareRecordValues(const u16 *firstIndex, const u16 *secondIndex)
{
    QuestRecord *first = questDataGetRecord(*firstIndex);
    QuestRecord *second = questDataGetRecord(*secondIndex);
    if (first == NULL) {
        return 0;
    }
    if (second == NULL) {
        return 0;
    }
    return second->order - first->order;
}
}
