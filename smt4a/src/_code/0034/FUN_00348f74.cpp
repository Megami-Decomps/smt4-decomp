/* NON_MATCHING: decimal-digit arithmetic is reassociated and the equivalent format cases are merged. */
#include "shard/VersionedResource.h"

extern "C" {
const u8 *FUN_00348f74(const VersionedResourceHeader *header)
{
    s32 version = (header->version[0] - '0') * 1000 +
                  (header->version[1] - '0') * 100 +
                  (header->version[2] - '0') * 10 +
                  header->version[3] - '0';
    if (header->format <= 1 && version >= 1300) {
        return (const u8 *)header + sizeof(*header) + header->payloadOffset;
    }
    return NULL;
}
}
