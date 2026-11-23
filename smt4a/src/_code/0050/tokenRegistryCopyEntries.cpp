/* NON_MATCHING: 61 lines with the token-registry module's --fpu=softvfp (wave 82); before it: the search loop now has retail shape (found flag, copy after the loop); retail allocates the arguments to r4/r7/r8/r9 and the outer index to r3 where armcc picks other registers. */
#include "nn/Result.h"
#include "sys/TokenRegistry.h"

extern "C" {
void* tokenTableGet(void);
s32 tokenResolveAddress(void* manager, TokenRegistryTable** table, u32 token);

// Resolve a token table and copy each requested id/kind/subtype entry to the output.
s32 tokenRegistryCopyEntries(const u32* token, TokenRegistryEntry* output,
                 const TokenRegistryEntry* requests, u32 count)
{
    TokenRegistryTable* table;
    s32 result = tokenResolveAddress(tokenTableGet(), &table, *token);
    if (nnResultIsFailure(result)) {
        return result;
    }
    u32 i;
    u32 entry;
    for (i = 0; i < count; ++i) {
        const TokenRegistryEntry* candidate;
        bool found = false;
        for (entry = 0; entry < table->count; ++entry) {
            candidate = &table->entries[entry];
            if (requests[i].kind == candidate->kind && requests[i].id == candidate->id &&
                requests[i].subtype == candidate->subtype) {
                found = true;
                break;
            }
        }
        if (!found) {
            return (s32)0xC8813890;
        }
        output[i] = *candidate;
    }
    return 0;
}
}
