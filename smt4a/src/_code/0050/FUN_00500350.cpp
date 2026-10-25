/* NON_MATCHING: saved argument registers and block-load scheduling differ; all 25 native operations are present. */
#include "common.h"
#include "nn/Result.h"

struct TokenEntry {
    u32 words[2];
};

struct TokenEntryBlock {
    TokenEntry *entries; // 0x00
    u32 unk04;
    u32 count; // 0x08
};

extern "C" {
u8 *FUN_0016ccfc(void);
u32 tokenResolveAddress(const u32 *owner, void **result, u32 token);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);

// Copy a bounded slice of the token's eight-byte records, preserving resolver failures.
s32 FUN_00500350(const u32 *token, u32 *copied, TokenEntry *destination,
                 u32 requested, u32 start)
{
    void *resolved;
    const u32 *context = reinterpret_cast<const u32 *>(FUN_0016ccfc());
    s32 status = tokenResolveAddress(context, &resolved, *token);
    if (!nnResultIsFailure(status)) {
        const TokenEntryBlock *block = static_cast<const TokenEntryBlock *>(resolved);
        u32 available = block->count - start;
        requested = available <= requested ? available : requested;
        __aeabi_memcpy4(destination, block->entries + start, requested * sizeof(TokenEntry));
        status = 0;
        *copied = requested;
    }
    return status;
}
}
