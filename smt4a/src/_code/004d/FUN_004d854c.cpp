/* NON_MATCHING: nullable-owner guards merge (retail keeps five separate guards) and transform constants are scheduled differently; FUN_003fd924 takes two floats. */
#include "battle/btlView.h"

extern "C" {
extern void *g_handleRegistry;
void FUN_0040aad4(BattleViewOwner *owner, BattleViewObject *parent);
void FUN_003fd924(BattleViewObject *object, u32 index, u32 kind, f32 x, f32 y);
void FUN_003fd7c0(BattleViewObject *object, u32 index, u32 kind, f32 value);
void controllerSetPosition(BattleViewObject *object, f32 x, f32 y, f32 z);
void FUN_003fd7b4(BattleViewObject *object, f32 x, f32 y, f32 z);
void controllerSetRotationEulerDegrees(BattleViewObject *object, f32 x, f32 y, f32 z);
void handleRegistryRegisterObject(void *registry, BattleViewObject *object);

void FUN_004d854c(BattleViewOwner **slot)
{
    FUN_0040aad4(*slot, 0);
    BattleViewObject *registered = (*slot)->object;
    if (*slot != 0) {
        FUN_003fd924((*slot)->object, 0, 1, 1.0f, 1.0f);
    }
    if (*slot != 0) {
        FUN_003fd7c0((*slot)->object, 0, 2, 1.0f);
    }
    if (*slot != 0) {
        controllerSetPosition((*slot)->object, 0.0f, 0.0f, 0.0f);
    }
    if (*slot != 0) {
        FUN_003fd7b4((*slot)->object, 1.0f, 1.0f, 1.0f);
    }
    if (*slot != 0) {
        controllerSetRotationEulerDegrees((*slot)->object, 1.0f, 1.0f, 1.0f);
    }
    handleRegistryRegisterObject(g_handleRegistry, registered);
}
}
