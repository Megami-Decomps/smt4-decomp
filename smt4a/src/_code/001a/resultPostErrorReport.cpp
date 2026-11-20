#include "common.h"
#include "sys/PlatformFault.h"

extern "C" {

extern FaultRecord DAT_0062d200;
void FUN_00189a80(FaultRecord *record);

/* Fills the pending fault record with a report of the given kind and runs the fault handler on it. */
void resultPostErrorReport(u32 key, u8 kind, u32 address)
{
    FaultRecord *record = &DAT_0062d200;
    record->flags = 0;
    record->kind = kind;
    record->magic = 0xEDAC;
    record->address = address;
    record->key = key;
    FUN_00189a80(record);
}

} /* extern "C" */
