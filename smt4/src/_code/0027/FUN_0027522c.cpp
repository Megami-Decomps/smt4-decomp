/* NON_MATCHING: visibility flag registers and zero/one VFP registers differ; motion resource comparison retains its pointer. */
#include "map/MapObjects.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {
extern MapObjectWork *g_mapObj;
extern GameState g_gameState;
void nodeSetTranslation(NodeEnableResource *, s32, const MapVector *);
void FUN_0028c618(NodeEnableResource *, s32, f32, f32, f32);
void modelSelectPrimaryMotion(NodeEnableResource *, u32, f32);
void FUN_0029bb14(NodeEnableResource *, f32);

// Synchronize visible map-object models with their pending position and motion changes.
void FUN_0027522c(void)
{
    // The shared byte padding begins unaligned, so keep this typed state payload local.
    struct ObjectStateView {
        u8 active;
        u8 changed;
        u8 positionChanged;
        u8 unk03;
        MapVector position;
        u8 unk10[0xC];
        f32 heading;
        u32 motion;
        u8 unk24[4];
        NodeEnableNode *node;
        u8 unk2C[8];
    };
    struct ObjectView { u8 prefix[0x14]; ObjectStateView state; };
    struct MotionView { u8 prefix[0x38]; u32 motion; };
    for (s32 i = 0; i < 24; ++i) {
        ObjectStateView *object = &reinterpret_cast<ObjectView *>(g_mapObj)[i].state;
        if (object->active) {
            NodeEnableNode *node = object->node;
            if (g_gameState.controllerFlags.mapRangeModelsHidden) {
                if ((node->flags & 2) == 0) {
                    node->flags |= 2;
                    node->resource->target->enabled = 0;
                }
            } else {
                if (node->flags & 2) {
                    node->flags &= ~2;
                    node->resource->target->enabled = 1;
                }
                if (object->changed) {
                    if (object->positionChanged) {
                        nodeSetTranslation(object->node->resource, 0, &object->position);
                        FUN_0028c618(object->node->resource, 0, 0.0f, object->heading, 0.0f);
                    }
                    if (reinterpret_cast<MotionView *>(object->node->resource)->motion != object->motion) {
                        modelSelectPrimaryMotion(object->node->resource, object->motion, 0.0f);
                        FUN_0029bb14(object->node->resource, 1.0f);
                    }
                    object->changed = 0;
                }
            }
        }
    }
}
}
