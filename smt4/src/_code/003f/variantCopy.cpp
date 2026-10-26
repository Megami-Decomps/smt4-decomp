#include "gfx/Variant.h"

extern "C" {
    u32 FUN_003f718c(Variant *destination, const Variant *source, const u32 *token, void *allocator);
}

extern "C" {

// Copy a complete tagged value without replacing its token.
u32 variantCopy(Variant *destination, const Variant *source, void *allocator)
{
    u32 token = source->value;
    return FUN_003f718c(destination, source, &token, allocator);
}
}
