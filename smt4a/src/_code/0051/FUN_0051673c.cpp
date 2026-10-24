/* NON_MATCHING: sort-key semantics and soft-float conversion ABI recovered; paired pointer loads and 64-bit packing allocation still differ. */
#include "gfx/ModelSortKey.h"

extern "C" {
__softfp u64 FUN_00524fb4(float depth);

// Build the render sorting key from depth, material state and layer priorities.
u64 FUN_0051673c(u32 unused, const ModelSortEntry* entry, u32 layer, float depth, float scale)
{
    u64 key = FUN_00524fb4(depth * scale) & 0xFFFFFF;
    ModelSortNode* node = entry->node;
    ModelSortModel* model = entry->model;
    if (node != NULL && model != NULL) {
        ModelSortMaterial* material = model->materials[node->materialIndex];
        u64 state = (material->state->flags & 0xFC3FFFFF);
        u64 priority = ((u64)material->flags >> 2) & 7;
        key |= ((priority | (state << 3)) & 0x1FFFFFFF) << 24;
        key |= (u64)(material->raster->flags & 3) << 54;
        key |= (u64)(node->layer & 0xF) << 49;
    }
    return key | ((u64)layer << 56);
}
}
