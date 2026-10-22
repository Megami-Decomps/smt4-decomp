/* NON_MATCHING: packed-key temporaries use fewer saved registers and a different material-load schedule. */
/* Packs depth, material, raster mode and layer into a 64-bit model sorting key. */
#include "gfx/ModelSortKey.h"

extern "C" {
__softfp u64 FUN_00524fb4(f32 depth);

u64 FUN_00516820(u32 unused, const ModelSortEntry *entry, u32 priority,
                 f32 start, f32 end, f32 scale)
{
    u64 key = FUN_00524fb4((end - start) * scale) & 0xFFFFFF;
    ModelSortNode *node = entry->node;
    ModelSortModel *model = entry->model;
    if (node != NULL && model != NULL) {
        ModelSortMaterial *material = model->materials[node->materialIndex];
        u64 state = material->state->flags & 0xFC3FFFFF;
        u64 materialPriority = ((u64)material->flags >> 2) & 7;
        key |= ((materialPriority | (state << 3)) & 0x1FFFFFFF) << 24;
        key |= (u64)(material->raster->flags & 3) << 54;
        key |= (u64)(node->layer & 15) << 49;
    }
    return key | ((u64)priority << 56);
}
}
