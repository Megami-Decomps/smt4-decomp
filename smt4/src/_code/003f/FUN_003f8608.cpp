/* NON_MATCHING: the depth conversion matches (a (u64) cast of depth * 16777215.0f, which armcc compiles to a call of armlib's __aeabi_f2ulz); the entry's node/model pair loads with ldrd instead of retail's add+ldm and the 64-bit packing allocation differs. */
#include "gfx/ModelSortKey.h"

extern "C" {
// Build the render sorting key from depth, material state and layer priorities.
u64 FUN_003f8608(u32 unused, const ModelSortEntry* entry, u32 layer, float depth)
{
    u64 key = (u64)(depth * 16777215.0f) & 0xFFFFFF;
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
