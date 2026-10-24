#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 saveIsRecordValueBounded(u16 value);

/* Script command: reports whether the record value given as argument is within bounds. */
u32 scrComm_Save_IsRecordValueBounded(void)
{
    scrSetResult(saveIsRecordValueBounded(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
