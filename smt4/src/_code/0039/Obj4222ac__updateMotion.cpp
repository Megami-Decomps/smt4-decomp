#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "classes/Obj4222ac.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

extern "C" {
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
}

static __inline AsdMdlObject *modelOf(AsdMdlObject *handle)
{
    return (AsdMdlObject *)handle;
}

static __inline void flagsClear(u32 *flags, u32 mask)
{
    *flags &= ~mask;
}

static __inline void flagsSet(u32 *flags, u32 mask)
{
    *flags |= mask;
}

void Obj4222ac::updateMotion()
{
    if ((flags & 1) != 0) {
        position[1] += 50.0f;
        if (position[1] > 0) {
            position[1] = 0;
            flagsClear(&flags, 1);
        }
    }
    if ((u32)frames < 10) {
        position[1] -= 50.0f;
        flagsSet(&flags, 2);
    }
    if (handle != 0) {
        f32 translated[3] = {
            basePosition[0] + position[0],
            basePosition[1] + position[1],
            basePosition[2] + position[2]
        };
        if (g_mapCamera->weight > 0.9f) {
            f32 amount = (g_mapCamera->weight - 0.9f) * 10.0f;
            if (amount < 0) {
                amount = 0;
            } else if (amount > 1) {
                amount = 1;
            }
            translated[1] += amount * 100.0f;
            nodeSetTranslation(reinterpret_cast<AsdMdlNode *>(modelOf(handle)->node), 0, translated);
            modelPartSetRotationDegrees(modelOf(handle)->node, 0, amount * -60.0f, g_mapCamera->heading + 180.0f, 0);
        } else {
            nodeSetTranslation(reinterpret_cast<AsdMdlNode *>(modelOf(handle)->node), 0, translated);
            modelPartSetRotationDegrees(modelOf(handle)->node, 0, rotation[0], rotation[1], rotation[2]);
        }
        nodeSetScale(modelOf(handle)->node, 0, scale[0], scale[1], scale[2]);
        AsdMdlObject *node = modelOf(handle);
        if (g_gameState.loading) {
            if ((node->flags & 2) == 0) {
                node->flags |= 2;
                node->node->sceneNode->positionFollowed = 0;
            }
        } else if ((node->flags & 2) != 0) {
            node->flags &= ~2;
            node->node->sceneNode->positionFollowed = 1;
        }
    }
}
