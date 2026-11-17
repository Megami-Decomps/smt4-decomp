/* NON_MATCHING: visible-node flag clear uses r1/r0 instead of retail r0/r1. */
#include "map/SingleModelState.h"
#include "game/GameState.h"

extern "C" {
extern MapSingleModelWork *g_mapModelWork;
void modelPartSetRotationDegrees(AsdMdlNode *, s32, f32, f32, f32);
void modelSelectPrimaryMotion(AsdMdlNode *, u32, f32);
void modelSelectSecondaryMotion(AsdMdlNode *, u32, f32);

void FUN_001b4b54(void)
{
    MapSingleModelState *state = &g_mapModelWork->model;
    if (state && state->node) {
        AsdMdlObject *node = state->node;
        if (g_gameState.loading) {
            if (!(node->flags & 2)) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
        } else {
            if (state->active) {
                if (node->flags & 2) {
                    node->flags &= ~2;
                    node->node->sceneNode->positionFollowed = 1;
                }
            } else if (!(node->flags & 2)) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
            if (state->changed) {
                nodeSetTranslation(node->node, 0, &state->position.x);
                modelPartSetRotationDegrees(node->node, 0, 0.0f, state->heading, 0.0f);
                modelSelectPrimaryMotion(node->node, state->motion, 0.0f);
                modelSelectSecondaryMotion(node->node, state->motion, 0.0f);
                state->changed = 0;
            }
        }
    }
}
}
