#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "shard/mapMarkerSynchronizeModelState.h"


extern "C" {
extern GameState g_gameState;
void nodeSetTranslation(NodeEnableResource *, s32, const f32 *);
void FUN_0028c618(NodeEnableResource *, s32, f32, f32, f32);
u32 modelGetCurrentMotion(void *model);
void modelSelectPrimaryMotion(NodeEnableResource *, u32 motionIndex, f32 blend);
void modelSelectSecondaryMotion(NodeEnableResource *, u32, f32);

/* Keep marker visibility, position, heading and animation synchronized with map state. */
void mapMarkerSynchronizeModelState(MapIfModelMarker *marker)
{
    if (marker->active) {
        if (g_gameState.controllerFlags.mapRangeModelsHidden) {
            NodeEnableNode *node = marker->model;
            if (!(node->flags & 2)) {
                node->flags |= 2;
                node->resource->target->enabled = 0;
            }
        } else if (marker->flags) {
            NodeEnableNode *node = marker->model;
            if (marker->state) {
                if (node->flags & 2) {
                    node->flags &= ~2u;
                    node->resource->target->enabled = 1;
                }
            } else if (!(node->flags & 2)) {
                node->flags |= 2;
                node->resource->target->enabled = 0;
            }
            nodeSetTranslation(marker->model->resource, 0, marker->position);
            FUN_0028c618(marker->model->resource, 0, 0.0f, marker->heading, 0.0f);
            if (modelGetCurrentMotion(marker->model->resource) != marker->motionIndex) {
                modelSelectPrimaryMotion(marker->model->resource, marker->motionIndex, 0.0f);
                modelSelectSecondaryMotion(marker->model->resource, marker->motionIndex, 0.0f);
            }
        }
    }
}
}
