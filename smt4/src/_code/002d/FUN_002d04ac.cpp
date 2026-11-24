#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {

u32 questIsReported(u16 id);

/* Orders two ids: a flag superset sorts first, then by the records' sort value (descending). */
s32 FUN_002d04ac(const u16 *idA, const u16 *idB)
{
    u32 flagsA = questIsReported(*idA);
    s32 result = 0;
    u32 flagsB = questIsReported(*idB);

    if ((flagsA & ~flagsB) != 0) {
        result = 1;
    }
    if ((flagsB & ~flagsA) != 0) {
        result = -1;
    }
    if (result == 0) {
        QuestRecord *recordA = questDataGetRecord(*idA);
        QuestRecord *recordB = questDataGetRecord(*idB);
        s32 diff = 0;
        if (recordA != NULL && recordB != NULL) {
            diff = recordB->order - recordA->order;
        }
        result = diff;
    }
    return result;
}

} /* extern "C" */
