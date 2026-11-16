#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 saveIsRecordValueBounded(u16 value);

/* Script command: returns saveIsRecordValueBounded of the argument. */
u32 FUN_0039dd1c(void)
{
    scrSetResult(saveIsRecordValueBounded(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
