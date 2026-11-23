/* The fault report (smt4a): the pending fault record and the handler that runs on it. */
#ifndef SMT4A_SYS_FAULTREPORT_H
#define SMT4A_SYS_FAULTREPORT_H

#include "common.h"
#include "sys/PlatformFault.h"

extern "C" {

/* The pending fault record the reporters fill. */
extern FaultRecord DAT_0062d200;
/* Runs the fault handler on a filled record. */
void FUN_00189a80(FaultRecord *record);

} /* extern "C" */

/* Fills the pending fault record with a report of `kind` and runs the fault handler on it: the body of
 * resultPostErrorReport, which faultReportKind5 inlines (its twin, smt4 FUN_002bb648, the same). */
static __inline void faultPostReport(u32 key, u8 kind, u32 address)
{
    FaultRecord *record = &DAT_0062d200;
    record->flags = 0;
    record->kind = kind;
    record->magic = 0xEDAC;
    record->address = address;
    record->key = key;
    FUN_00189a80(record);
}

#endif
