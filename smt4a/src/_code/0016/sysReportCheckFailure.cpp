/* Records a failed check (a key and the address it was detected at; `failed` is the caller's failure bit, unused here) in the global fault record, then runs the fault handler. */
#include "common.h"
#include "sys/FaultReport.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "code/Code0016_Smt4a.h"

extern "C" {

void sysReportCheckFailure(s32 key, u32 address, ...)
{
    FaultRecord *record = &DAT_0062d200;
    record->flags = 0;
    record->magic = 0xEDAC;
    record->kind = 0;
    record->address = address;
    record->key = key;
    FUN_00189a80(record);
}
}
