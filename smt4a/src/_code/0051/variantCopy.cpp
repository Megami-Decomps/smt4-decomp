#include "gfx/Variant.h"

extern "C" {

// Copy a complete tagged value without replacing its token.
u32 variantCopy(Variant *destination, const Variant *source, void *allocator)
{
    u32 token = source->value;
    return FUN_005153f0(destination, source, &token, allocator);
}
}
