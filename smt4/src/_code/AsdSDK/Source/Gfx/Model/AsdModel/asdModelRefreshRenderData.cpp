/* NON_MATCHING: same code and row count as retail (including its unreachable negative node-count clamp); armcc stores the two command words as one strd where retail stores them separately, and keeps the node pointer/clamp in different registers (retail also hoists the constant 1 for the texture update). */
#include "shard/W6_W6Match8_ModelRefresh.h"

extern "C" {
extern u32 *g_commandBufferCursor;
extern u32 DAT_00472100;
extern u32 DAT_00472104;
extern u32 DAT_00472108;
extern u32 DAT_0047210c;
void FUN_0015b430(void *binding, u32 value);
void FUN_0015ab84(ModelRefreshState *state, s32 index, u32 material);
void shaderEmitLightVectors(ModelRefreshState *state);
void FUN_0015a8b4(ModelRefreshState *state, s32 index, u32 node);
void FUN_0015a714(ModelRefreshState *state);

// Refresh changed material/node bindings and emit the aggregate material color command.
void asdModelRefreshRenderData(ModelRefreshState *state)
{
    if (!state->hasFlags(4)) {
        ModelRefreshProperties *properties = state->resource->properties;
        FUN_0015b430(state->binding, properties->binding);
        if (state->materialsDirty) {
            DAT_00472100 = 0;
            DAT_00472104 = 255;
            DAT_00472108 = 255;
            DAT_0047210c = 255;
            s32 count = state->materialCount;
            for (s32 index = 0; index < count; ++index) {
                FUN_0015ab84(state, index, state->materials[index]);
            }
            u32 color = DAT_00472104 | (DAT_00472108 << 8) | (DAT_0047210c << 24);
            u32 *cursor = g_commandBufferCursor;
            cursor[1] = 0xb01c4;
            cursor[0] = color;
            g_commandBufferCursor = cursor + 2;
        }
        if (state->stateDirty) {
            shaderEmitLightVectors(state);
        }
        if (state->nodesDirty && state->nodeCount > 0) {
            s32 count = state->nodeCount;
            if (state->node->info->count > 0) {
                s32 last = count - 1;
                s32 clamped = last >= 0 ? last : 0;
                state->node->commandFlags = (clamped & 0xff) | 0x10000;
            }
            s32 index = 0;
            do {
                FUN_0015a8b4(state, index, state->nodes[index]);
                ++index;
            } while (index < count);
        }
        u32 texture = state->textures[properties->textureIndex];
        if (state->texture != texture) {
            state->texture = texture;
            state->textureDirty = 1;
        }
        if (state->textureDirty) {
            FUN_0015a714(state);
        }
    }
}
}
