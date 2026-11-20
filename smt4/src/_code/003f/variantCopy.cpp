#include "gfx/Variant.h"

extern "C" {
    u32 variantCopyWithToken(Variant *destination, const Variant *source, const u32 *token, void *allocator);
}

extern "C" {

// Copy a complete tagged value without replacing its token.
u32 variantCopy(Variant *destination, const Variant *source, void *allocator)
{
    u32 token = source->value;
    return variantCopyWithToken(destination, source, &token, allocator);
}
}
