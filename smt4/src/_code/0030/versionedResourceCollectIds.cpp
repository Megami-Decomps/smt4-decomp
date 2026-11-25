/* NON_MATCHING: 12 lines: retail loads the first version digit into r4 before materialising the 1300 limit (the
 * register swap of encounterArrangementFindStagePosition), compares the stored id against the record's (cmp r7, ip), and in the single-payload
 * case compares the version before loading the payload offset. */
#include "shard/VersionedResource.h"

/* Enumerates the distinct identifiers of a versioned resource's single or indexed payload. */
extern "C" s32 versionedResourceCollectIds(u32 *ids, s32 capacity, const VersionedResourceHeader *resource)
{
    struct HeaderView { VersionedResourceHeader header; u32 payloadSize; };
    struct LegacyPayload { u32 id; u8 unk04[0xd4]; };
    struct ModernPayload { u8 unk00[0x18]; u32 id; u8 unk1c[0xd4]; };
    struct IndexRecord { u32 id; u8 unk04[0x1c]; };
    const HeaderView *header = reinterpret_cast<const HeaderView *>(resource);
    s32 version = (resource->version[0] - '0') * 1000;
    version += (resource->version[1] - '0') * 100;
    version += (resource->version[2] - '0') * 10;
    version += resource->version[3] - '0';
    switch (resource->format) {
    case 0: {
        const u8 *payload = reinterpret_cast<const u8 *>(resource) + resource->payloadOffset;
        if (version >= 1300)
            ids[0] = reinterpret_cast<const ModernPayload *>(payload)->id;
        else
            ids[0] = reinterpret_cast<const LegacyPayload *>(payload)->id;
        return 1;
    }
    case 1: {
        const u8 *payload = reinterpret_cast<const u8 *>(resource) + resource->payloadOffset;
        u32 size;
        const u8 *indexData;
        if (version >= 1300) {
            indexData = payload + sizeof(ModernPayload);
            size = header->payloadSize - sizeof(ModernPayload);
        } else {
            indexData = payload + sizeof(LegacyPayload);
            size = header->payloadSize - sizeof(LegacyPayload);
        }
        if (version >= 1100) {
            indexData += sizeof(u32);
            if (version >= 1200)
                size -= sizeof(u32);
        }
        const IndexRecord *records = reinterpret_cast<const IndexRecord *>(indexData);
        s32 total = size / sizeof(IndexRecord);
        s32 count = 0;
        for (s32 index = 0; index < total; ++index) {
            if (count >= capacity)
                return count;
            bool found = false;
            for (s32 previous = 0; previous < count; ++previous) {
                if (records[index].id == ids[previous]) {
                    found = true;
                    break;
                }
            }
            if (!found)
                ids[count++] = records[index].id;
        }
        return count;
    }
    }
    return 0;
}
