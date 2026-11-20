#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
/* NON_MATCHING: the placement and show/hide tail match; the distance deltas and the rise step still use different VFP registers, and retail reloads flags after the distance test. */
#include "classes/Obj42233c.h"
#include "map/LmapGlobals.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "game/GameState.h"

/* Computes the distance between two points, as in distSpatial. */
static __inline f32 mapMotionDistance(MapVector from, NodeVec3 to)
{
    f32 dx = to.x - from.x;
    f32 dy = to.y - from.y;
    f32 dz = to.z - from.z;
    return __sqrtf(dx * dx + dy * dy + dz * dz);
}

extern "C" {
f32 sqrtf(f32 value);
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
}

/* Starts sinking once the player is more than 300 units away, raises the model back by 50 a frame
 * until it is level again, then places the model and shows or hides it with the map range. */
void Obj42233c::stop()
{
    if ((flags & 4) != 0) {
        if (mapMotionDistance(g_lmapScene->pose.position, basePosition) > 300.0f) {
            flags = (flags & ~4) | 1;
        }
    }
    if ((flags & 1) != 0) {
        f32 nextHeight = offset[1] + 50.0f;
        offset[1] = nextHeight;
        if (nextHeight > 0.0f) {
            offset[1] = 0;
            flags &= ~1;
            timerFlags &= ~4;
        }
    }
    if (handle != 0) {
        f32 translated[3] = {
            basePosition.x + offset[0],
            basePosition.y + offset[1],
            basePosition.z + offset[2]
        };
        AsdMdlObject *node = (AsdMdlObject *)handle;
        nodeSetTranslation(node->node, 0, translated);
        modelPartSetRotationDegrees(((AsdMdlObject *)handle)->node, 0, rotation.x, rotation.y, rotation.z);
        nodeSetScale(((AsdMdlObject *)handle)->node, 0, scale.x, scale.y, scale.z);
        if ((flags & 4) != 0) {
            node = (AsdMdlObject *)handle;
            if ((node->flags & 2) == 0) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
        } else if (g_gameState.loading) {
            node = (AsdMdlObject *)handle;
            if ((node->flags & 2) == 0) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
        } else {
            node = (AsdMdlObject *)handle;
            if ((node->flags & 2) != 0) {
                node->flags &= ~2;
                node->node->sceneNode->positionFollowed = 1;
            }
        }
    }
}
