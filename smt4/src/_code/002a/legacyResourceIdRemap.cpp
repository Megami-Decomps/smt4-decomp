/* NON_MATCHING: 155 lines (shape 27): retail keeps the pointer (mov r1, r0), reloads resource->value for the category switch and default return and re-derives the category inside the 0x34/0x11 range tests; this build shares one load, so case 0x20 lands inline and every offset shifts. */
#include "shard/W6_W6Match6_ResourceId.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {
// Resolve legacy resource identifiers through the shared replacement mapping.
u32 legacyResourceIdRemap(const PackedResourceId *resource)
{
    return remapLegacyResourceId(resource);
}
}
