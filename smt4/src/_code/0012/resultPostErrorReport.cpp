#include "common.h"
#include "sys/FaultReport.h"

extern "C" {

/* Fills the pending fault record with a report of the given kind and runs the fault handler on it. */
void resultPostErrorReport(u32 key, u8 kind, u32 address)
{
    faultPostReport(key, kind, address);
}

} /* extern "C" */
