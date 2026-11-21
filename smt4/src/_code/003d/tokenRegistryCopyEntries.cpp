/* NON_MATCHING: the search loop now has retail shape (found flag, copy after the loop); retail allocates the arguments to r4/r7/r8/r9 and the outer index to r3 where armcc picks other registers. */
#include "nn/Result.h"
#include "common.h"
#include "sys/TokenRegistry.h"

extern "C" {

u32 tokenTableGet(void);
s32 tokenResolveAddress(u32 context, TokenRegistryTable **table, u32 token);

/* Look up each of `count` keys in the token's table and copy the matching entries to `out`;
 * returns 0, the resolve error, or 0xC8813890 when a key is missing. */
s32 tokenRegistryCopyEntries(u32 *token, TokenRegistryEntry *out, const TokenRegistryEntry *keys, u32 count)
{
    TokenRegistryTable *table;
    s32 result = tokenResolveAddress(tokenTableGet(), &table, *token);
    u32 i;
    u32 j;

    if (nnResultIsFailure(result)) {
        return result;
    }
    for (i = 0; i < count; i++) {
        const TokenRegistryEntry *entry;
        bool found = false;
        for (j = 0; j < table->count; j++) {
            entry = &table->entries[j];
            if (keys[i].kind == entry->kind && keys[i].id == entry->id && keys[i].subtype == entry->subtype) {
                found = true;
                break;
            }
        }
        if (!found) {
            return 0xC8813890;
        }
        out[i] = *entry;
    }
    return 0;
}

} /* extern "C" */
