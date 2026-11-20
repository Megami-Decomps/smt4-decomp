/* NON_MATCHING: vldr+add vs add+vldmia for position x inside inlined updateNodePositions. */
#include "Model/ModelActivationGroup.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

/* Matches real sibling btlStageUpdateNodePositions in 0040/btlStageUpdateNodePositions.cpp. */
static __inline void updateNodePositions(ModelActivationGroup *group, ModelActivationPosition pos)
{
    for (s32 index = 0; index < 3; ++index) {
        MoriModelContent *node = group->models[index];
        if (node != NULL) {
            const ModelActivationPosition *offset = &group->positions[index];
            controllerSetPositionXyz(node->body,
                offset->x + pos.x,
                offset->y + pos.y,
                offset->z + pos.z);
        }
    }
}

extern "C" {

/* Activate all loaded models, reset their common scale, and apply local positions. */
u32 FUN_00401440(ModelActivationGroup *group)
{
    for (s32 index = 0; index < 3; ++index) {
        if (group->models[index] != NULL && !moriModelContentIsLoaded(group->models[index])) {
            return 0;
        }
    }
    for (s32 index = 0; index < 3; ++index) {
        if (group->models[index] != NULL) {
            moriModelContentSetRequestFirst(group->models[index], 0x10000);
            moriModelContentSetRequestSecond(group->models[index], 0x30000);
            moriModelContentLoadBody(group->models[index], 0);
            Obj557b18 *model = group->models[index]->body;
            modelPlayClip(model, 0, 2, 0.0f, 0.0f);
            controllerSetPosition(model, 1.0f, 1.0f, 1.0f);
            handleRegistryRegisterObject(g_handleRegistry, model);
        }
    }
    group->scale.x = 1.0f;
    group->scale.y = 1.0f;
    group->scale.z = 1.0f;
    ModelActivationPosition zero;
    zero.x = 0.0f;
    zero.y = 0.0f;
    zero.z = 0.0f;
    updateNodePositions(group, zero);
    return 1;
}
}
