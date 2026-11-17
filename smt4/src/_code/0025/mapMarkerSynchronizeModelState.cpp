#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "shard/W6_W6Match2_GeometryResources.h"
#include "game/GameState.h"

extern "C" {
void modelPartSetRotationDegrees(AsdMdlNode *, s32, f32, f32, f32);
u32 modelGetCurrentMotion(void *model);
void modelSelectPrimaryMotion(AsdMdlNode *, u32 motionIndex, f32 blend);
void modelSelectSecondaryMotion(AsdMdlNode *, u32, f32);

/* Keep marker visibility, position, heading and animation synchronized with map state. */
void mapMarkerSynchronizeModelState(MapIfModelMarker *marker)
{
    if (marker->active) {
        if (g_gameState.loading) {
            AsdMdlObject *node = marker->model;
            if (!(node->flags & 2)) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
        } else if (marker->flags) {
            AsdMdlObject *node = marker->model;
            if (marker->state) {
                if (node->flags & 2) {
                    node->flags &= ~2u;
                    node->node->sceneNode->positionFollowed = 1;
                }
            } else if (!(node->flags & 2)) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
            nodeSetTranslation(marker->model->node, 0, marker->position);
            modelPartSetRotationDegrees(marker->model->node, 0, 0.0f, marker->heading, 0.0f);
            if (modelGetCurrentMotion(marker->model->node) != marker->motionIndex) {
                modelSelectPrimaryMotion(marker->model->node, marker->motionIndex, 0.0f);
                modelSelectSecondaryMotion(marker->model->node, marker->motionIndex, 0.0f);
            }
        }
    }
}
}
