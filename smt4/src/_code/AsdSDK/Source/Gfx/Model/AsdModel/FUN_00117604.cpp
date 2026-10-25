/* NON_MATCHING: retail shares a global-state base; source uses independent literals and different scene-removal branch scheduling. */
#include "shard/S1GfxModel.h"
#include "nw/gfx/SceneNode.h"
#include "shard/Sys464af0.h"
#include "shard/S1Light.h"

using nw::gfx::SceneNode;

extern "C" {
extern LightCount g_asdLightCount;
extern ModelOwner *g_asdModelSlotArray3[2];
extern SceneNode *g_asdModelTransformBuilder[2];
extern SceneNode *sceneGroup1Root[2];
extern u32 DAT_00464b7c[2];
extern u32 DAT_00464bbc[2];
extern u32 DAT_00464b10;
extern u32 DAT_00464b14;
extern u32 DAT_00464b18;
extern u32 DAT_00464b00;
extern u32 g_titleScene;
void FUN_001325c4(ModelOwner *slots, u32 traverser, u32 state, u32 flags);
void FUN_00131c98(ModelOwner *slots, u32 traverser, u32 flags);
void FUN_0013231c(ModelOwner *slots, u32 state, s32 mode, s32 flags);
void FUN_001326b4(ModelOwner *slots, u32 first, u32 second, s32 flags);
void sceneTraverserVisit(u32 traverser, SceneNode *root);
SceneNode **_ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(SceneNode **first, SceneNode **last,
    SceneNode **destination, SceneNode *const *value);
bool nw_gfx_SceneNode_AttachChild(SceneNode *parent, SceneNode *child);
s32 FUN_002c5210();
void nw_gfx_RenderContext_ResetState_2B7478(void *context);
s32 sceneQueryFalse();
void registerBlockRequestGroups(u32 groups);
void FUN_002c3a14(u32 scene);

/* Render the first model pass, temporarily excluding the light-only scene root when required. */
void FUN_00117604()
{
    if (g_gfxSettings.unk00[0] == 0 ||
        ((s32)g_asdLightCount.count <= 0 && (g_gfxSettings.slotFlags & 1) == 0)) {
        return;
    }
    void *context = g_asdModelSlotArray3[0]->slot;
    FUN_001325c4(g_asdModelSlotArray3[0], DAT_00464b7c[0], DAT_00464b10, DAT_00464bbc[0]);
    if (g_asdLightCount.render.active != 0 && g_asdLightCount.render.dirty == 0) {
        SceneNode *builder = g_asdModelTransformBuilder[0];
        SceneNode *root = sceneGroup1Root[0];
        SceneNode **last = builder->children.nodes.end;
        SceneNode **first = builder->children.nodes.begin;
        while (first != last && *first != root) {
            ++first;
        }
        SceneNode **newEnd = first;
        if (first != last) {
            newEnd = _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(first + 1, last, first, &root);
        }
        SceneNode **oldEnd = builder->children.nodes.end;
        builder->children.nodes.end = newEnd;
        if (oldEnd != newEnd) {
            root->parent = NULL;
        }
        sceneTraverserVisit(DAT_00464b7c[0], g_asdModelTransformBuilder[0]);
    }
    const u8 *skipPass = reinterpret_cast<const u8 *>(&g_asdLightCount.render.unk14);
    if (*skipPass == 0) {
        FUN_00131c98(g_asdModelSlotArray3[0], DAT_00464b7c[0], DAT_00464bbc[0]);
    }
    if (g_asdLightCount.render.active != 0 && g_asdLightCount.render.dirty == 0) {
        nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[0], sceneGroup1Root[0]);
        sceneTraverserVisit(DAT_00464b7c[0], g_asdModelTransformBuilder[0]);
    }
    if (FUN_002c5210() != 1) {
        FUN_0013231c(g_asdModelSlotArray3[0], DAT_00464b10, 1, 0);
    } else {
        FUN_001326b4(g_asdModelSlotArray3[0], DAT_00464b14, DAT_00464b18, 0);
        nw_gfx_RenderContext_ResetState_2B7478(context);
    }
    if (sceneQueryFalse() != 0) {
        registerBlockRequestGroups(0x3fff);
    }
    FUN_002c3a14(g_titleScene);
    DAT_00464b00 = 0;
}
}
