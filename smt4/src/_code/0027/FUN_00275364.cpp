/* NON_MATCHING: retail reads the node motion via a linker-inlined getter after a nop-bodied call (nop, ldr r0,[r0,#56]) and loads the first loop model flags separately per branch; the callee pair is unidentified. */
#include "map/MapStateSlots.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

namespace {
// The node's motion id lives past the fields the shared header names.
struct MotionNode {
    AsdMdlNode node;
    u8 unk30[8];
    u32 motion;             // 0x38
};

// Three extra slots follow the shared state, as in the cleanup code.
struct StateWithExtraSlots {
    MapStateSlots common;
    MapStateSlot extraSlots[3];
};
}

extern "C" {
extern MapStateSlots *g_mapStateSlots;
extern GameState g_gameState;
void nodeSetTranslation(AsdMdlNode *node, u32 mode, const f32 *position);
void FUN_0028c618(AsdMdlNode *node, u32 mode, f32 x, f32 y, f32 z);
void modelSelectPrimaryMotion(AsdMdlNode *node, f32 blend);
void modelSelectSecondaryMotion(AsdMdlNode *node, u32 motion, f32 blend);

/* Per-frame update of every active map-state slot's model: show or hide it with the map range and push its pending transform and motion. */
void FUN_00275364(void)
{
    if (g_mapStateSlots->unk04 == 0x65) {
        for (s32 index = 0; index < 3; ++index) {
            MapStateSlot *slot = &((StateWithExtraSlots *)g_mapStateSlots)->extraSlots[index];
            if (slot->active != 0) {
                AsdMdlObject *model = (AsdMdlObject *)slot->resources.model;
                if (g_gameState.controllerFlags.mapRangeModelsHidden != 0) {
                    if ((model->flags & 2) == 0) {
                        model->flags |= 2;
                        model->node->resource->positionFollowed = 0;
                    }
                } else {
                    if ((model->flags & 2) != 0) {
                        model->flags &= ~2;
                        model->node->resource->positionFollowed = 1;
                    }
                    if (slot->motion.mode != 0) {
                        nodeSetTranslation(model->node, 0, slot->motion.position);
                        FUN_0028c618(model->node, 0, 0.0f, slot->motion.heading, 0.0f);
                        if (((MotionNode *)model->node)->motion != slot->motion.elapsed) {
                            modelSelectPrimaryMotion(model->node, 0.0f);
                            modelSelectSecondaryMotion(model->node, slot->motion.elapsed, 0.0f);
                        }
                        slot->motion.mode = 0;
                    }
                }
            }
        }
    }
    for (s32 index = 0; index < 32; ++index) {
        MapStateSlot *slot = &g_mapStateSlots->slots[index];
        s32 state = 0;
        bool active = slot->active != 0;
        if (active) {
            state = slot->state;
        }
        if (active && state != 3 && slot->ranking.eligible == 0) {
            AsdMdlObject *model;
            if (slot->motion.ready != 0) {
                model = (AsdMdlObject *)slot->motion.model;
            } else {
                model = (AsdMdlObject *)g_mapStateSlots->references.models[slot->motion.sourceIndex].model;
            }
            u32 flags = model->flags;
            if (g_gameState.controllerFlags.mapRangeModelsHidden != 0) {
                if ((flags & 2) == 0) {
                    model->flags = flags | 2;
                    model->node->resource->positionFollowed = 0;
                }
            } else {
                if ((flags & 2) != 0) {
                    model->flags = flags & ~2;
                    model->node->resource->positionFollowed = 1;
                }
                if (slot->motion.mode != 0) {
                    nodeSetTranslation(model->node, 0, slot->motion.position);
                    FUN_0028c618(model->node, 0, 0.0f, slot->motion.heading, 0.0f);
                    if (((MotionNode *)model->node)->motion != slot->motion.elapsed) {
                        modelSelectPrimaryMotion(model->node, 0.0f);
                        modelSelectSecondaryMotion(model->node, slot->motion.elapsed, 0.0f);
                    }
                    slot->motion.mode = 0;
                }
            }
        }
    }
}
}
