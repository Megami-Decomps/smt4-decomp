/* Records a failed check (a key and the address it was detected at; `failed` is the caller's failure bit, unused here) in the global fault record, then runs the fault handler. */
#include "common.h"
#include "sys/FaultReport.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "code/Code002b_Smt4.h"

extern "C" {

void sysReportCheckFailure(s32 key, u32 address, ...)
{
    FaultRecord *record = &DAT_004d4200;
    record->flags = 0;
    record->magic = 0xBCA3;
    record->kind = 0;
    record->address = address;
    record->key = key;
    FUN_002ad4f8(record);
}
}
