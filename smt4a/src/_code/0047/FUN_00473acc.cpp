#include "classes/ResourceLookup.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {

void FUN_00161a10(void);
WindowStatusResult FUN_00428a58(const u32 *a, const u32 *b, const void *c, const void *d, const void *e, s32 flag);
WindowStatusResult FUN_001b576c(const void *entries, u32 count);
s32 legacyResourceIdRemap(WindowStatusResult *id);
void jyoucyuGetTableEntry(s32 index);

// Resolves the lookup's resource id: the id is looked up, then re-resolved through the entry table,
// each step remapped to its legacy id; on failure the table entry for 0 is requested and the
// partially resolved id is still returned.
WindowStatusResult FUN_00473acc(ResourceLookup *lookup)
{
    FUN_00161a10();
    WindowStatusResult result;
    result = FUN_00428a58(&lookup->unk7c, &lookup->count, lookup->second, lookup->first, lookup->third, 1);
    if (!nnResultIsFailure(legacyResourceIdRemap(&result))) {
        result = FUN_001b576c(lookup->entries, lookup->count);
        if (!nnResultIsFailure(legacyResourceIdRemap(&result))) {
            return result;
        }
    }
    jyoucyuGetTableEntry(0);
    return result;
}

}
