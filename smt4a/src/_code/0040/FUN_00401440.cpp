/* NON_MATCHING: retail's zero-vector additions are omitted; VFP constants and position loads differ. */
#include "Model/ModelActivationGroup.h"

extern "C" {
extern void *g_handleRegistry;
u8 FUN_0040ab8c(LockedObj *object);
void FUN_0040a908(LockedObj *object, u32 flags);
void FUN_0040a918(LockedObj *object, u32 flags);
void FUN_0040aad4(LockedObj *object, s32 mode);
void FUN_003fe86c(u32 model, s32 first, s32 second, f32 x, f32 y);
void controllerSetPosition(u32 model, f32 x, f32 y, f32 z);
void handleRegistryRegisterObject(void *registry, u32 model);
void FUN_003fd7b4(u32 model, f32 x, f32 y, f32 z);

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
            FUN_0040aad4(group->models[index], 0);
            u32 model = group->models[index]->locked;
            FUN_003fe86c(model, 0, 2, 0.0f, 0.0f);
            controllerSetPosition(model, 1.0f, 1.0f, 1.0f);
            handleRegistryRegisterObject(g_handleRegistry, model);
        }
    }
    group->scale.x = 1.0f;
    group->scale.y = 1.0f;
    group->scale.z = 1.0f;
    for (s32 index = 0; index < 3; ++index) {
        if (group->models[index] != NULL) {
            FUN_003fd7b4(group->models[index]->locked,
                group->positions[index].x,
                group->positions[index].y,
                group->positions[index].z);
        }
    }
    return 1;
}
}
