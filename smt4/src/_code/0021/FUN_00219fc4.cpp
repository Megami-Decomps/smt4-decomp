/* NON_MATCHING: zero-index-count branch and copy-loop scratch registers differ. */
#include "gfx/TiledIndexMesh.h"
#include "shard/W6_W6Match3_EffectColor.h"

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
EffectGeometryCloneView *FUN_00207498(s32, s32, s32, u16);
void refCountIncrement(s32 *);

EffectGeometryCloneView *FUN_00219fc4(EffectGeometryCloneView *source)
{
    EffectGeometryCloneView *copy = FUN_00207498(source->count, source->verticesPerItem,
                                               source->trianglesPerItem, source->flags);
    if (source->referenceCount) {
        copy->referenceCount = source->referenceCount;
        refCountIncrement(copy->referenceCount);
    }
    for (u32 i = 0; i < source->storage->counts.indexCount; ++i)
        copy->storage->indices[i] = source->storage->indices[i];
    for (s32 i = 0; i < source->count; ++i)
        copy->colors[i] = source->colors[i];
    return copy;
}
}
