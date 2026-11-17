#include "common.h"
#include "result/Result.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: reports the value of the current entry (when there is a result screen). Returns 1. */
u32 scrCommResultGetCurrentEntryValue(void)
{
    ResultWork *result = g_result;

    if (result != NULL) {
        ResultEntry *entry = &result->entries[result->current];

        scrSetResult(entry->value);
    }
    return 1;
}

} /* extern "C" */
