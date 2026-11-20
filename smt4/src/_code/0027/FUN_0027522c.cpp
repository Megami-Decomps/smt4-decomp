/* NON_MATCHING: the motion test now calls modelGetCurrentMotion (linker-inlined) as retail; the 0.0/1.0 constants swap s16/s17 and
 * the loop base and node-flag temporaries swap r0/r1. */
#include "map/MapObjects.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "game/GameState.h"

extern "C" {
extern MapObjectWork *g_mapObj;
void modelPartSetRotationDegrees(AsdMdlNode *, s32, f32, f32, f32);
void modelSelectPrimaryMotion(AsdMdlNode *, u32, f32);
void modelSetScale(AsdMdlNode *, f32);
u32 modelGetCurrentMotion(AsdMdlNode *model);

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
        AsdMdlObject *node;
        u8 unk2C[8];
    };
    struct ObjectView { u8 prefix[0x14]; ObjectStateView state; };
    for (s32 i = 0; i < 24; ++i) {
        ObjectStateView *object = &reinterpret_cast<ObjectView *>(g_mapObj)[i].state;
        if (object->active) {
            AsdMdlObject *node = object->node;
            if (g_gameState.loading) {
                if ((node->flags & 2) == 0) {
                    node->flags |= 2;
                    node->node->sceneNode->positionFollowed = 0;
                }
            } else {
                if (node->flags & 2) {
                    node->flags &= ~2;
                    node->node->sceneNode->positionFollowed = 1;
                }
                if (object->changed) {
                    if (object->positionChanged) {
                        nodeSetTranslation(object->node->node, 0, &object->position.x);
                        modelPartSetRotationDegrees(object->node->node, 0, 0.0f, object->heading, 0.0f);
                    }
                    if (modelGetCurrentMotion(object->node->node) != object->motion) {
                        modelSelectPrimaryMotion(object->node->node, object->motion, 0.0f);
                        modelSetScale(object->node->node, 1.0f);
                    }
                    object->changed = 0;
                }
            }
        }
    }
}
}
