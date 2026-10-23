/* NON_MATCHING: visible-node flag clear uses r1/r0 instead of retail r0/r1. */
#include "map/SingleModelState.h"

extern "C" {
extern MapSingleModelWork *g_mapModelWork;
extern GameState g_gameState;
void nodeSetTranslation(NodeEnableResource *, s32, const MapVector *);
void FUN_0028c618(NodeEnableResource *, s32, f32, f32, f32);
void modelSelectPrimaryMotion(NodeEnableResource *, u32, f32);
void modelSelectSecondaryMotion(NodeEnableResource *, u32, f32);

void FUN_001b4b54(void)
{
    MapSingleModelState *state = &g_mapModelWork->model;
    if (state && state->node) {
        NodeEnableNode *node = state->node;
        if (g_gameState.controllerFlags.mapRangeModelsHidden) {
            if (!(node->flags & 2)) {
                node->flags |= 2;
                node->resource->target->enabled = 0;
            }
        } else {
            if (state->active) {
                if (node->flags & 2) {
                    node->flags &= ~2;
                    node->resource->target->enabled = 1;
                }
            } else if (!(node->flags & 2)) {
                node->flags |= 2;
                node->resource->target->enabled = 0;
            }
            if (state->changed) {
                nodeSetTranslation(node->resource, 0, &state->position);
                FUN_0028c618(node->resource, 0, 0.0f, state->heading, 0.0f);
                modelSelectPrimaryMotion(node->resource, state->motion, 0.0f);
                modelSelectSecondaryMotion(node->resource, state->motion, 0.0f);
                state->changed = 0;
            }
        }
    }
}
}
