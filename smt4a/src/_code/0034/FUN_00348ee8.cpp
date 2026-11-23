/* NON_MATCHING: register allocation only: retail keeps the first digit and the 1300 limit in swapped registers (r3/r2), as in FUN_002d8cc8. */
#include "shard/VersionedResource.h"

extern "C" {
/* The payload of a format 0 or 1 versioned resource whose version is at least 1300, else NULL. */
const u8 *FUN_00348ee8(const VersionedResourceHeader *header)
{
    s32 version = (header->version[0] - '0') * 1000;
    version += (header->version[1] - '0') * 100;
    version += (header->version[2] - '0') * 10;
    version += header->version[3] - '0';
    if (header->format == 0) {
        if (version >= 1300) {
            return (const u8 *)header + header->payloadOffset;
        }
    } else if (header->format == 1) {
        const u8 *payload = (const u8 *)header + header->payloadOffset;
        if (version >= 1300) {
            return payload;
        }
    }
    return NULL;
}
}
