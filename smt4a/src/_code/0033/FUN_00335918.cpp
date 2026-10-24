#include "common.h"

extern "C" {

s32 FUN_0034919c(void);
s32 scrSetResult(s32 value);

/* Script command: returns whether FUN_0034919c reports a result. */
s32 FUN_00335918(void)
{
    scrSetResult(FUN_0034919c() != 0);
    return 1;
}

} /* extern "C" */
