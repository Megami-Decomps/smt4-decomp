#include "nn/Result.h"

struct AddressToken {
    u32 value; // 0x00
};
struct TokenTable;

extern "C" {
TokenTable* FUN_002b5c44(void);
u32 tokenResolveAddress(TokenTable* table, u32* address, u32 token);
u32 FUN_00353550(u32 address);
u32 windowGetOperationFailure(u32 address);

// Resolves a token and runs both address operations, preserving error results.
u32 FUN_00353948(const AddressToken* token)
{
    u32 address;
    u32 result = tokenResolveAddress(FUN_002b5c44(), &address, token->value);
    if (!nnResultIsFailure(result)) {
        result = FUN_00353550(address);
        if (!nnResultIsFailure(result)) {
            result = windowGetOperationFailure(address);
            if (!nnResultIsFailure(result)) {
                result = 0;
            }
        }
    }
    return result;
}
}
