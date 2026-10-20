/* NON_MATCHING: the two argument constants are materialised in the order r1, r0 (retail: r0, r1). */
#include "common.h"

extern "C" {

int dataTableGet(int arg0, int arg1);
int dataTableGetCount(void);

/* Calls dataTableGet(0x29, 6), then dataTableGetCount(). */
void FUN_003c3154(void)
{
    dataTableGet(0x29, 6);
    dataTableGetCount();
}

} /* extern "C" */
