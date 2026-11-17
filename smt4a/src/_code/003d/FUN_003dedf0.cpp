#include "quest_center/QuestRecordA.h"

extern "C" {
u32 partyEntryFlagsBit3(s32);
u32 partyEntryBitsBit3(s32);

/* 1 when item `id` has a category and flag bit 3 set but its bit-3 entry bit is still clear. */
s32 FUN_003dedf0(u32 id)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(id);
    if (record == NULL)
        return 0;
    if (record->category == 0)
        return 0;
    if (partyEntryFlagsBit3(id) == 0)
        return 0;
    if (dataTable1bOr1cGetRecord(id) != NULL && partyEntryBitsBit3(id) != 0)
        return 0;
    return 1;
}
}
