#include "classes/ResourceLookup.h"
#include "sys/WindowStatusCheck.h"

extern "C" {

void asdGxWaitForPreviousFrame(void);
WindowStatusResult FUN_00428a58(const u32 *a, const u32 *b, const void *c, const void *d, const void *e, s32 flag);
WindowStatusResult FUN_001b576c(const void *entries, u32 count);
void jyoucyuGetTableEntry(s32 index);

/* Resolves the resource ID, then looks it up in the entry table. On failure, requests entry 0
 * and returns the partially resolved ID. */
WindowStatusResult FUN_00473acc(ResourceLookup *lookup)
{
    asdGxWaitForPreviousFrame();
    WindowStatusResult result;
    result = FUN_00428a58(&lookup->unk7c, &lookup->count, lookup->second, lookup->first, lookup->third, 1);
    if (!windowStatusFailed(result)) {
        result = FUN_001b576c(lookup->entries, lookup->count);
        if (!windowStatusFailed(result)) {
            return result;
        }
    }
    jyoucyuGetTableEntry(0);
    return result;
}

} /* extern "C" */
