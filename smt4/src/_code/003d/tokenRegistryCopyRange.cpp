#include "sys/TokenRegistry.h"
#include "nn/Result.h"
#include <string.h>

extern "C" {
u8 *tokenTableGet(void);
u32 tokenResolveAddress(const u32 *owner, void **result, u32 token);

/* Copies a bounded slice of the token registry, preserving resolver failures. */
s32 tokenRegistryCopyRange(const u32 *token, u32 *copied, TokenRegistryEntry *destination,
                 u32 requested, u32 start)
{
    void *resolved;
    s32 status = tokenResolveAddress((const u32 *)tokenTableGet(), &resolved, *token);
    if (!nnResultIsFailure(status)) {
        u32 available = ((const TokenRegistryTable *)resolved)->count - start;
        u32 count = available > requested ? requested : available;
        memcpy(destination, ((const TokenRegistryTable *)resolved)->entries + start,
               count * sizeof(TokenRegistryEntry));
        status = 0;
        *copied = count;
    }
    return status;
}

} /* extern "C" */
