#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sequenceRequestClearDeferred(void);
void FUN_0026f960(s32 value);

/* Script command: clears the deferred sequence request, then runs FUN_0026f960 on argument zero. Returns 2. */
s32 FUN_0022226c(void)
{
    s32 value = scrGetArg(0);
    sequenceRequestClearDeferred();
    FUN_0026f960(value);
    return 2;
}

} /* extern "C" */
