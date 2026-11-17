#include "common.h"
#include "quest_center/QuestRecord.h"
#include "script/ScriptArgs.h"

extern "C" {

int scrGetArg(int index);

/* Script command: looks up entry (script argument 1) in the value table of record (argument 0) and passes it to scrSetResult. */
u32 scrComm_Data_GetRecordValue(void)
{
    u16 id = scrGetArg(0);
    int index = scrGetArg(1);

    scrSetResult(dataTable1bOr1cGetRecord(id)->values[index]);
    return 1;
}

} /* extern "C" */
