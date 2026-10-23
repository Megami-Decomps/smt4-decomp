/* NON_MATCHING: only motion comparison load scheduling differs; built reuses the resource pointer across the test. */
#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

/* The selected motion lies past NodeEnableResource's recovered prefix. */
struct MapMarkerMotionResourceView {
    NodeEnableResource resource;
    u8 unk30[8];
    u32 secondaryMotion; /* 0x38 */
};

extern "C" {
extern GameState g_gameState;
void nodeSetTranslation(NodeEnableResource *, s32, const f32 *);
void FUN_0028c618(NodeEnableResource *, s32, f32, f32, f32);
void modelSelectPrimaryMotion(NodeEnableResource *, f32);
void modelSelectSecondaryMotion(NodeEnableResource *, u32, f32);

/* Keep marker visibility, position, heading and animation synchronized with map state. */
void FUN_002531bc(MapIfModelMarker *marker)
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
            if (reinterpret_cast<MapMarkerMotionResourceView *>(marker->model->resource)->secondaryMotion != marker->motionIndex) {
                modelSelectPrimaryMotion(marker->model->resource, 0.0f);
                modelSelectSecondaryMotion(marker->model->resource, marker->motionIndex, 0.0f);
            }
        }
    }
}
}
