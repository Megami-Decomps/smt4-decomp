/* NON_MATCHING: category checks fold and outer switch blocks reorder; -O2 candidate. */
#include "shard/W6_W6Match6_ResourceId.h"

extern "C" {
// Resolve legacy resource identifiers through the shared replacement mapping.
u32 legacyResourceIdRemap(const PackedResourceId *resource)
{
    return remapLegacyResourceId(resource);
}
}
