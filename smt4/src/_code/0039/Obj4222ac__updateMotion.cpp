#include "classes/Obj4222ac.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

struct Obj4222acTransition {
    u8 unk00[0x18];
    f32 heading;
    u8 unk1c[0x2A0];
    f32 progress;
};
extern "C" {
extern Obj4222acTransition *DAT_004474f4;
extern GameState g_gameState;
void nodeSetTranslation(NodeEnableResource *node, s32 index, const f32 *position);
void FUN_0028c618(NodeEnableResource *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(NodeEnableResource *node, s32 index, f32 x, f32 y, f32 z);
}

static __inline NodeEnableNode *modelOf(u32 handle)
{
    return (NodeEnableNode *)handle;
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
        if (DAT_004474f4->progress > 0.9f) {
            f32 amount = (DAT_004474f4->progress - 0.9f) * 10.0f;
            if (amount < 0) {
                amount = 0;
            } else if (amount > 1) {
                amount = 1;
            }
            translated[1] += amount * 100.0f;
            nodeSetTranslation(modelOf(handle)->resource, 0, translated);
            FUN_0028c618(modelOf(handle)->resource, 0, amount * -60.0f, DAT_004474f4->heading + 180.0f, 0);
        } else {
            nodeSetTranslation(modelOf(handle)->resource, 0, translated);
            FUN_0028c618(modelOf(handle)->resource, 0, rotation[0], rotation[1], rotation[2]);
        }
        nodeSetScale(modelOf(handle)->resource, 0, scale[0], scale[1], scale[2]);
        NodeEnableNode *node = modelOf(handle);
        if (g_gameState.controllerFlags.mapRangeModelsHidden) {
            if ((node->flags & 2) == 0) {
                node->flags |= 2;
                node->resource->target->enabled = 0;
            }
        } else if ((node->flags & 2) != 0) {
            node->flags &= ~2;
            node->resource->target->enabled = 1;
        }
    }
}
