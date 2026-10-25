#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

void jyoucyuGetTableEntry(u32 index);

/* Script command: touches table entry 0 and returns 100. */
u32 FUN_002e2974(void)
{
    jyoucyuGetTableEntry(0);
    scrSetResult(100);
    return 1;
}

} /* extern "C" */
