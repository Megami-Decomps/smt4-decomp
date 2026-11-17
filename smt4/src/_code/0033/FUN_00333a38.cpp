/* NON_MATCHING: retail predicates the index conversion (`cmp r7,#0; uxthne r0,r4; beq`) ahead of the questGetRuntimeStatus call; the build converts after the branch. */
#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {

extern u8 *questGetRuntimeStatus(u16 index);

/* Counts the records (of 400) that reference `id` through either id field and, when `checkFlag` is set, whose flag byte has bit 0. */
int FUN_00333a38(u32 id, int checkFlag)
{
    int count = 0;
    int i;

    for (i = 0; i < 400; i++) {
        QuestRecord *record = dataTable1bOr1cGetRecord((u16)i);

        if (record != NULL && (record->excludedQuests[0] == id || record->excludedQuests[1] == id)
            && (checkFlag == 0 || (*questGetRuntimeStatus(i) & 1) != 0)) {
            count++;
        }
    }
    return count;
}

} /* extern "C" */
