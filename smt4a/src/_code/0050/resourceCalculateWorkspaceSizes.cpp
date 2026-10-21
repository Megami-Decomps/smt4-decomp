/* NON_MATCHING: typed workspace fields enable accumulator folding and two-way group-loop unrolling, increasing saved registers; -O2 candidate. */
#include "common.h"

struct WorkspaceResourceGroup {
    u32 unk00, entryCount;
    u8 unk08[0xc];
    u32 packedCount, unk18;
};
struct WorkspaceResource {
    u8 unk00, type;
    u8 unk02[0x36];
    u16 nodeCount;
    u8 unk3a[0x2e];
    WorkspaceResourceGroup *groups;
    u32 groupCount;
    u8 unk70[4];
    u16 partCount;
    u8 unk76[0xa];
    u32 bitCount;
};
struct WorkspaceArraySize { u32 count, bytes; };
struct ResourceWorkspaceSizes { u32 totals[6]; WorkspaceArraySize arrays[9]; };

extern "C" void resourceCalculateWorkspaceSizes(const WorkspaceResource *resource, ResourceWorkspaceSizes *sizes, const u32 *parameters)
{
    for (u32 i = 0; i < 6; ++i)
        sizes->totals[i] = 0;
    u32 variantCount = parameters[0];
    u32 count = resource->nodeCount;
    u32 bytes = count * 0x158;
    sizes->totals[0] = bytes + 3;
    sizes->arrays[0].count = count;
    sizes->arrays[0].bytes = bytes;
    count = resource->nodeCount;
    u32 stride = ((variantCount * 14 + 35) & ~3U) * 8;
    bytes = 0;
    if (count && stride) {
        bytes = count * stride;
        sizes->totals[1] += bytes + 15;
    } else {
        count = 0;
    }
    sizes->arrays[1].bytes = bytes;
    sizes->arrays[1].count = count;
    count = resource->partCount;
    bytes = count * 2;
    sizes->totals[2] += bytes + 3;
    sizes->arrays[2].count = count;
    sizes->arrays[2].bytes = bytes;
    count = resource->partCount;
    bytes = count * 0x40;
    sizes->totals[2] += bytes + 3;
    sizes->arrays[3].count = count;
    sizes->arrays[3].bytes = bytes;
    count = resource->partCount;
    bytes = count * 0x30;
    sizes->arrays[4].bytes = bytes;
    sizes->arrays[4].count = count;
    sizes->totals[2] += bytes + 3;
    if (resource->type == 2) {
        count = resource->partCount;
        bytes = count * 12;
        sizes->arrays[5].bytes = bytes;
        sizes->arrays[5].count = count;
        sizes->totals[2] += bytes + 3;
    }
    bytes = (resource->bitCount + 7) >> 3;
    if (bytes)
        sizes->totals[3] += bytes + 3;
    sizes->arrays[6].count = bytes;
    sizes->arrays[6].bytes = bytes;
    count = resource->groupCount;
    bytes = count * 8;
    sizes->totals[4] += bytes + 3;
    sizes->arrays[7].count = count;
    sizes->arrays[7].bytes = bytes;
    for (u32 i = 0; i < resource->groupCount; ++i)
        sizes->totals[4] += resource->groups[i].entryCount * 24 + 3;
    count = resource->groupCount;
    bytes = count * 12;
    sizes->totals[5] += bytes + 3;
    sizes->arrays[8].count = count;
    sizes->arrays[8].bytes = bytes;
    for (u32 i = 0; i < resource->groupCount; ++i) {
        u32 packed = resource->groups[i].packedCount;
        count = (packed & 0x1ff) >> 1;
        if (packed & 1)
            ++count;
        sizes->totals[5] += (count & 0xff) * 8 + 3;
    }
}
