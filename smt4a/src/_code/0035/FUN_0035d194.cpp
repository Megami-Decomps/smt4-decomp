#include "common.h"

extern "C" {

void jyoucyuGetTableEntry(u32 index);
s32 FUN_00467df8(void);
void scrSetResult(s32 result);

/* Script command: touches table entry 0 and returns FUN_00467df8's answer. */
u32 FUN_0035d194(void)
{
    jyoucyuGetTableEntry(0);
    scrSetResult(FUN_00467df8());
    return 1;
}

} /* extern "C" */
