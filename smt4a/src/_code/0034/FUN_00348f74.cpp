/* NON_MATCHING: format cases now match retail's separate case 0/case 1 arms; decimal-digit arithmetic is still reassociated (retail multiplies the first digit with smulbb by 1000). */
#include "shard/VersionedResource.h"

extern "C" {
const u8 *FUN_00348f74(const VersionedResourceHeader *header)
{
    s32 version = (header->version[0] - '0') * 1000 +
                  (header->version[1] - '0') * 100 +
                  (header->version[2] - '0') * 10 +
                  header->version[3] - '0';
    switch (header->format) {
    case 0:
        if (version >= 1300) {
            return (const u8 *)header + sizeof(*header) + header->payloadOffset;
        }
        break;
    case 1:
        if (version >= 1300) {
            return (const u8 *)header + sizeof(*header) + header->payloadOffset;
        }
        break;
    }
    return NULL;
}
}
