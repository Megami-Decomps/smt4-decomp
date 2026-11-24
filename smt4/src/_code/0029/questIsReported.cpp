#include "common.h"
#include "quest_center/QuestRecord.h"
#include "code/Code0029_Smt4.h"

extern "C" {
/* Computes or forwards the requested value. */
u32 questIsReported(u32 id)
{
    QuestRecord *record = questDataGetRecord(id);
    return record != NULL ? (record->flags & 2) >> 1 : 0;
}
}
