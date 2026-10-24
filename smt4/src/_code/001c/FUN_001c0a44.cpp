/* NON_MATCHING: light argument stays in r7 instead of its stack home, and saved global/index tail registers differ. */
#include "gfx/LightRegistry.h"
#include "shard/S1Light.h"

extern "C" {
extern LightRegistry *sceneGroup1Root[2];
extern LightRegistry *sceneGroup2Root[2];
extern void *g_asdModelTransformBuilder[2];
extern void *DAT_00464b7c[2];
extern LightCount g_asdLightCount[2];
void asdLightActivate(s32 index);
void FUN_002abbe8(void *list, LightRegistration *light);
void nw_gfx_SceneNode_AttachChild(void *parent, LightRegistry *child);
void sceneTraverserVisit(void *traverser, void *root);

// Remove a scene light, restoring an empty auxiliary root before refreshing transforms.
void FUN_001c0a44(LightRegistration *light, s32 group)
{
    LightRegistry *selected;
    switch (group) {
    case 1: selected = sceneGroup1Root[0]; break;
    case 2: selected = sceneGroup2Root[0]; asdLightActivate(0); break;
    case 4: selected = sceneGroup1Root[1]; break;
    case 5: selected = sceneGroup2Root[1]; asdLightActivate(1); break;
    default: return;
    }
    if (selected == NULL)
        return;
    LightRegistry *registry = light->registry;
    s32 index = -1;
    if (registry == sceneGroup2Root[0])
        index = 0;
    else if (registry == sceneGroup2Root[1])
        index = 1;
    FUN_002abbe8(registry->children.childListPrefix, light);
    if (index >= 0) {
        if (registry->begin == registry->end) {
            g_asdLightCount[index].render.active = 0;
            g_asdLightCount[index].render.dirty = 0;
            nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[index], sceneGroup2Root[index]);
            sceneTraverserVisit(DAT_00464b7c[index], g_asdModelTransformBuilder[index]);
        }
    } else {
        index = group >= 3;
    }
    if (index == 0) {
        sceneTraverserVisit(DAT_00464b7c[0], g_asdModelTransformBuilder[0]);
        --g_asdLightCount[0].count;
    } else {
        sceneTraverserVisit(DAT_00464b7c[1], g_asdModelTransformBuilder[1]);
        --g_asdLightCount[1].count;
    }
}
}
