/* NON_MATCHING: error-result test now matches; the table pointer and the request fields are loaded differently around the entry search (retail loads the table once before the loop) and saved registers are allocated differently. */
#include "nn/Result.h"
#include "sys/TokenRegistry.h"

extern "C" {
void* FUN_0016ccfc(void);
s32 tokenResolveAddress(void* manager, TokenRegistryTable** table, u32 token);

/* Copies the table entry matching the request's kind, id and subtype; false when there is none. */
static __inline bool tokenRegistryCopyEntry(const TokenRegistryTable* table, const TokenRegistryEntry* request,
                                            TokenRegistryEntry* output)
{
    for (u32 entry = 0; entry < table->count; ++entry) {
        const TokenRegistryEntry* candidate = &table->entries[entry];
        if (request->kind == candidate->kind && request->id == candidate->id &&
            request->subtype == candidate->subtype) {
            *output = *candidate;
            return true;
        }
    }
    return false;
}

// Resolve a token table and copy each requested id/kind/subtype entry to the output.
s32 FUN_0050028c(const u32* token, TokenRegistryEntry* output,
                 const TokenRegistryEntry* requests, u32 count)
{
    TokenRegistryTable* table;
    s32 result = tokenResolveAddress(FUN_0016ccfc(), &table, *token);
    if (nnResultIsFailure(result)) {
        return result;
    }
    for (u32 i = 0; i < count; ++i) {
        if (!tokenRegistryCopyEntry(table, &requests[i], &output[i])) {
            return (s32)0xC8813890;
        }
    }
    return 0;
}
}
