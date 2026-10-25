#include "common.h"
#include "shard/W6_W6Match7_UnitHeapModule.h"

extern "C" {

extern void eventCommandGetPendingCleanup(void);
extern void rangeIsValid(void);
void FUN_0022724c(void)
{
    eventCommandGetPendingCleanup();
    rangeIsValid();
}

} /* extern "C" */
