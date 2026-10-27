/* NON_MATCHING: argument swap is emitted with a different register shuffle (retail: mov r2,r0; mov r0,r1; mov r1,r2). */
#include "common.h"

extern "C" {

void FUN_00306ce4(void *first, void *second);

void FUN_001232f8(void *first, void *second)
{
    FUN_00306ce4(second, first);
}

} /* extern "C" */
