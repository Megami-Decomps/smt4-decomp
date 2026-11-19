#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
/* NON_MATCHING: the placement and show/hide tail match; in the camera-distance test retail reloads `flags` after the square root (the build keeps it in r1) and allocates the deltas to s1/s2/s0, and the rise step's float registers differ. */
#include "classes/Obj42233c.h"
#include "map/LmapGlobals.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "game/GameState.h"

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
        f32 dx = basePosition.x - g_lmapScene->pose.position.x;
        f32 dy = basePosition.y - g_lmapScene->pose.position.y;
        f32 dz = basePosition.z - g_lmapScene->pose.position.z;
        if (sqrtf(dx * dx + dy * dy + dz * dz) > 300.0f) {
            flags = (flags & ~4) | 1;
        }
    }
    if ((flags & 1) != 0) {
        offset[1] += 50.0f;
        if (offset[1] > 0) {
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
