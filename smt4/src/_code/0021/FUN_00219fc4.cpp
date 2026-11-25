/* NON_MATCHING: signed index loop matches zero-count branch; copy-loop source/destination scratch registers differ. */
#include "classes/EffGeomRecord.h"
#include "gfx/TiledIndexMesh.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"

struct EffectGeometryCloneView {
    TiledIndexStorage *storage;
    EffectColor *colors;
    s16 count;
    s16 verticesPerItem;
    s16 trianglesPerItem;
    s16 vertexCount;
    s16 triangleCount;
    u16 flags;
    s32 *referenceCount;
};
extern "C" {
EffectGeometryCloneView *FUN_00219fc4(EffectGeometryCloneView *source)
{
    EffGeomPointHandle *copy = FUN_00207498(source->count, source->verticesPerItem,
                                           source->trianglesPerItem, source->flags);
    if (source->referenceCount) {
        copy->referenceCount = source->referenceCount;
        refCountIncrement(reinterpret_cast<int *>(copy->referenceCount));
    }
    for (s32 i = 0; i < source->storage->counts.indexCount; ++i)
        reinterpret_cast<u16 *>(copy->record->vertices)[i] = source->storage->indices[i];
    for (s32 i = 0; i < source->count; ++i)
        copy->points[i] = source->colors[i];
    return reinterpret_cast<EffectGeometryCloneView *>(copy);
}
}
