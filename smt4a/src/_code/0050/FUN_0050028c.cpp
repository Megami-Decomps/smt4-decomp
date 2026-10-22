/* NON_MATCHING: table selection recovered; nested search block placement, error-result sign test and saved-register allocation differ. */
#include "sys/TokenRegistry.h"

extern "C" {
void* FUN_0016ccfc(void);
s32 tokenResolveAddress(void* manager, TokenRegistryTable** table, u32 token);

// Resolve a token table and copy each requested id/kind/subtype entry to the output.
s32 FUN_0050028c(const u32* token, TokenRegistryEntry* output,
                 const TokenRegistryEntry* requests, u32 count)
{
    TokenRegistryTable* table;
    s32 result = tokenResolveAddress(FUN_0016ccfc(), &table, *token);
    if ((u32)result & 0x80000000) {
        return result;
    }
    for (u32 i = 0; i < count; ++i) {
        u32 entry = 0;
        u32 available = table->count;
        if (available == 0) {
            return (s32)0xC8813890;
        }
        const TokenRegistryEntry* request = &requests[i];
        TokenRegistryEntry* entries = table->entries;
        while (request->kind != entries[entry].kind ||
               request->id != entries[entry].id ||
               request->subtype != entries[entry].subtype) {
            if (++entry >= available) {
                return (s32)0xC8813890;
            }
        }
        output[i] = entries[entry];
    }
    return 0;
}
}
