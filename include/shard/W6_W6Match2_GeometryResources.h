#ifndef SHARD_W6_W6MATCH2_GEOMETRY_RESOURCES_H
#define SHARD_W6_W6MATCH2_GEOMETRY_RESOURCES_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

#include <stddef.h>
#include "AsdSDK/Source/Util/AsdListBox.h"
#include "map/mapIf.h"

struct OwnedBufferPair {
    u8 unk00[0x48];
    u16 *indices;           // 0x48
};
typedef char OwnedBufferPairLayoutCheck[sizeof(OwnedBufferPair) == 0x4C &&
    offsetof(OwnedBufferPair, indices) == 0x48 ? 1 : -1];
struct GeometryResources {
    u16 flags;              // 0x00
    union {
        u16 unk02;          // 0x02
        u16 vertexCount;
    };
    AsdTexture* texture;    // 0x04
    OwnedBufferPair* buffers; // 0x08
    void* special;          // 0x0c
};
typedef char GeometryResourcesLayoutCheck[sizeof(GeometryResources) == 0x10 &&
    offsetof(GeometryResources, vertexCount) == 2 ? 1 : -1];

extern "C" void bufferReleaseOwnedPair(OwnedBufferPair* buffers);
extern "C" OwnedBufferPair* bufferDestroyOwnedPair(OwnedBufferPair* buffers);

#ifdef __cplusplus
extern "C" {
#endif

AsdListBoxItem* asdListBoxFindItem(u32 job, u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void mapMarkerSynchronizeModelState(MapIfModelMarker *marker);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void gameFlagSlotAdvanceCounter(u32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdMemoryFreeLocked(void *block);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void aocRecordLookup83(u16 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void effectSpawnPositionDefault(f32 x, f32 y, f32 z);

#ifdef __cplusplus
}
#endif

#endif
