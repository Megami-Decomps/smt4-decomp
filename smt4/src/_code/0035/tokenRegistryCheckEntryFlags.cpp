/* Built with --fpu=softvfp, as the token-registry module around it (FUN_00427ff4 / FUN_003531dc before it,
 * recordQueryAndValidatePairWithKey after it, in both games). */
#include "nn/Result.h"
#include "sys/TokenRegistry.h"
#include "code/Code003d_Smt4.h"

extern "C" s32 tokenRegistryCopyEntries(u32 *token, TokenRegistryEntry *output, const TokenRegistryEntry *requests,
                                        u32 count);

// Checks the flags of the token's registry entry matching `request` once per registered entry,
// propagating error statuses.
extern "C" s32 tokenRegistryCheckEntryFlags(u32 *token, const TokenRegistryEntry *request, u32 expectedFlags)
{
    u32 count;
    TokenRegistryEntry entry;

    s32 result = tokenRegistryGetValue(token, &count);
    if (nnResultIsFailure(result)) {
        return result;
    }

    for (u32 index = 0; index < count; ++index) {
        result = tokenRegistryCopyEntries(token, &entry, request, 1);
        if (nnResultIsFailure(result)) {
            return result;
        }
        if (entry.flags != expectedFlags) {
            return -0x36bec740;
        }
    }

    return 0;
}
