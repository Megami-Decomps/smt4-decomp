#include "common.h"

struct Geometry;
struct GeometryEntry {
    Geometry *geometry; // 0x00
    u32 unk04;
    u32 unk08;
};
struct GeometryAllocation {
    GeometryEntry *entries; // 0x00
};
struct GeometryMetadata {
    u8 unk00[0x38];
    u32 count; // 0x38
};
struct GeometryOwner {
    u8 unk00[0x30];
    GeometryAllocation *allocation; // 0x30
    GeometryMetadata *metadata; // 0x34
};

extern "C" {
void geometryDestroy(Geometry *);
void asdMemFree(void *);

// Destroy each geometry and free the allocation that owns its entry array.
void geometryOwnerDestroyEntries(GeometryOwner *owner)
{
    GeometryAllocation *allocation = owner->allocation;
    GeometryEntry *entry = allocation->entries;
    u32 count = owner->metadata->count;
    for (u32 i = 0; i < count; ++i, ++entry)
        geometryDestroy(entry->geometry);
    asdMemFree(allocation);
}
}
