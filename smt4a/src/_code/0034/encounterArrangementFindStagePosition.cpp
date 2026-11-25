#include "shard/VersionedResource.h"

/* Locates the stage-position vector in a supported encounter arrangement file. */
extern "C" const u8 *encounterArrangementFindStagePosition(const void *resource)
{
    const VersionedResourceHeader &header = *(const VersionedResourceHeader *)resource;
    s32 version = (header.version[0] - '0') * 1000;
    version += (header.version[1] - '0') * 100;
    version += (header.version[2] - '0') * 10;
    version += header.version[3] - '0';
    if (header.format == 0) {
        if (version >= VERSIONED_RESOURCE_MIN_VERSION) {
            const u8 *payload = (const u8 *)resource + header.payloadOffset;
            return payload + sizeof(header);
        }
    } else if (header.format == 1) {
        const u8 *payload = (const u8 *)resource + header.payloadOffset;
        if (version >= VERSIONED_RESOURCE_MIN_VERSION) {
            return payload + sizeof(header);
        }
    }
    return NULL;
}
