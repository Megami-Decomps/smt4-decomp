/* NON_MATCHING: retail's zero-vector additions are omitted; VFP constants and position loads differ. */
#include "Model/ModelActivationGroup.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

extern "C" {

/* Activate all loaded models, reset their common scale, and apply local positions. */
u32 FUN_00401440(ModelActivationGroup *group)
{
    for (s32 index = 0; index < 3; ++index) {
        if (group->models[index] != NULL && !FUN_0040ab8c(group->models[index])) {
            return 0;
        }
    }
    for (s32 index = 0; index < 3; ++index) {
        if (group->models[index] != NULL) {
            FUN_0040a908(group->models[index], 0x10000);
            FUN_0040a918(group->models[index], 0x30000);
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
    for (s32 index = 0; index < 3; ++index) {
        if (group->models[index] != NULL) {
            controllerSetPositionXyz(group->models[index]->body,
                group->positions[index].x,
                group->positions[index].y,
                group->positions[index].z);
        }
    }
    return 1;
}
}
