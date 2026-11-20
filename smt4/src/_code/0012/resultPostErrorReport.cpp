#include "common.h"
#include "sys/PlatformFault.h"

extern "C" {

extern FaultRecord DAT_004d4200;
void FUN_002ad4f8(FaultRecord *record);

/* Fills the pending fault record with a report of the given kind and runs the fault handler on it. */
void resultPostErrorReport(u32 key, u8 kind, u32 address)
{
    FaultRecord *record = &DAT_004d4200;
    record->flags = 0;
    record->kind = kind;
    record->magic = 0xBCA3;
    record->address = address;
    record->key = key;
    FUN_002ad4f8(record);
}

} /* extern "C" */
