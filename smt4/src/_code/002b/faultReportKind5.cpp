#include "common.h"
#include "sys/FaultReport.h"

extern "C" {

void FUN_002ad614(void);

/* Posts a kind-5 fault report of `key` detected at `address`, then runs FUN_002ad614. */
void faultReportKind5(u32 key, u32 address)
{
    faultPostReport(key, 5, address);
    FUN_002ad614();
}

} /* extern "C" */
