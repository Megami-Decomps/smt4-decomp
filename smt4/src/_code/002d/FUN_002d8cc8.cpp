/* NON_MATCHING: digit arithmetic and payload arithmetic now match retail; remaining is the same r2/r3 swap as FUN_00348ee8 (retail keeps the first digit in r3 and the 1300 limit in r2). */
#include "shard/VersionedResource.h"

extern "C" {
const u8 *FUN_002d8cc8(const VersionedResourceHeader *header)
{
    s32 version = (header->version[0] - '0') * 1000;
    version += (header->version[1] - '0') * 100;
    version += (header->version[2] - '0') * 10;
    version += header->version[3] - '0';
    if (header->format == 0) {
        if (version >= 1300) {
            const u8 *base = (const u8 *)header + header->payloadOffset;
            return base + sizeof(*header);
        }
    } else if (header->format == 1) {
        const u8 *base = (const u8 *)header + header->payloadOffset;
        if (version >= 1300) {
            return base + sizeof(*header);
        }
    }
    return NULL;
}
}
