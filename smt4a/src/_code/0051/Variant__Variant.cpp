/* NON_MATCHING: compiler combines the next-link and allocator stores into STM and chooses r3 for the type byte; retail keeps separate stores. */
#include "gfx/Variant.h"

Variant::Variant()
{
    value = 0;
    type = 1;
    children.previous = reinterpret_cast<VariantChildNode *>(&children);
    allocator = NULL;
    children.next = reinterpret_cast<VariantChildNode *>(&children);
}
