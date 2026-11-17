/* NON_MATCHING: nullable-owner guards merge (retail keeps five separate guards) and transform constants are scheduled differently; FUN_003fd924 takes two floats. */
#include "battle/btlView.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

extern "C" {

void FUN_004d854c(MoriModelContent **slot)
{
    moriModelContentLoadBody(*slot, 0);
    Obj557b18 *registered = (*slot)->body;
    if (*slot != 0) {
        FUN_003fd924((*slot)->body, 0, 1, 1.0f, 1.0f);
    }
    if (*slot != 0) {
        moriModelUnitStartMaterialAnimation((*slot)->body, 0, 2, 1.0f);
    }
    if (*slot != 0) {
        controllerSetPosition((*slot)->body, 0.0f, 0.0f, 0.0f);
    }
    if (*slot != 0) {
        controllerSetPositionXyz((*slot)->body, 1.0f, 1.0f, 1.0f);
    }
    if (*slot != 0) {
        controllerSetRotationEulerDegrees((*slot)->body, 1.0f, 1.0f, 1.0f);
    }
    handleRegistryRegisterObject(g_handleRegistry, registered);
}
}
