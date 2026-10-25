#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct ValueTable {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ u16 values[1];
} ValueTable;

int scrGetArg(int index);
ValueTable *dataTable1bOr1cGetRecord(u16 id);

/* Script command: looks up entry (script argument 1) in the value table of record (argument 0) and passes it to scrSetResult. */
u32 scrComm_Data_GetRecordValue(void)
{
    u16 id = scrGetArg(0);
    int index = scrGetArg(1);

    scrSetResult(dataTable1bOr1cGetRecord(id)->values[index]);
    return 1;
}

} /* extern "C" */
