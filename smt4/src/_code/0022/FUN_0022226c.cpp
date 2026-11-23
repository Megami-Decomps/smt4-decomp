#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sequenceRequestClearDeferred(void);
void sequenceRequestKind5(s32 value);

/* Script command: clears the deferred sequence request, then runs sequenceRequestKind5 on argument zero. Returns 2. */
s32 FUN_0022226c(void)
{
    s32 value = scrGetArg(0);
    sequenceRequestClearDeferred();
    sequenceRequestKind5(value);
    return 2;
}

} /* extern "C" */
