/* NON_MATCHING: version arithmetic scheduling and duplicate-search loop unrolling differ. */
#include "shard/VersionedResource.h"

// Enumerate distinct identifiers from a versioned resource's single or indexed payload.
extern "C" s32 FUN_0039ba24(u32 *ids, s32 capacity, const VersionedResourceHeader *resource)
{
    struct HeaderView { VersionedResourceHeader header; u32 payloadSize; };
    struct LegacyPayload { u32 id; u8 unk04[0xd4]; };
    struct ModernPayload { u8 unk00[0x18]; u32 id; u8 unk1c[0xd4]; };
    struct IndexRecord { u32 id; u8 unk04[0x1c]; };
    const HeaderView *header = reinterpret_cast<const HeaderView *>(resource);
    s32 version = (s16)(resource->version[0] - '0') * 1000 + resource->version[1] * 100 +
                  resource->version[2] * 10 - 5328 + resource->version[3];
    const u8 *payload = reinterpret_cast<const u8 *>(resource) + resource->payloadOffset;
    if (resource->format == 0) {
        if (version >= 1300)
            ids[0] = reinterpret_cast<const ModernPayload *>(payload)->id;
        else
            ids[0] = reinterpret_cast<const LegacyPayload *>(payload)->id;
        return 1;
    }
    if (resource->format != 1)
        return 0;
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
    s32 count = 0;
    for (s32 index = 0; index < static_cast<s32>(size / sizeof(IndexRecord)); ++index) {
        if (count >= capacity)
            return count;
        s32 previous;
        for (previous = 0; previous < count; ++previous) {
            if (ids[previous] == records[index].id)
                break;
        }
        if (previous == count)
            ids[count++] = records[index].id;
    }
    return count;
}
