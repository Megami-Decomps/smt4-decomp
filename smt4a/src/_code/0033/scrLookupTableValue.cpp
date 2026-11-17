#include "common.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

u32 scrGetArg(int index);
int scrSetResult(u32 value);

/* Looks up entry (index 1) in the table of the object selected by entry 0; always reports success. */
u32 scrLookupTableValue(void)
{
    u16 key = scrGetArg(0);
    int index = scrGetArg(1);
    QuestRecordA *lookup = dataTable1bOr1cGetRecord(key);

    scrSetResult(lookup->values[index]);
    return 1;
}

} /* extern "C" */
