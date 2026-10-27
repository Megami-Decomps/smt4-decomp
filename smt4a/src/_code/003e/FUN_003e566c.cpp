#include "shard/W8Match1_ControllerRotation.h"
extern "C" void controllerSetRotationEulerDegrees(void*, f32, f32, f32);

// Applies Euler angles to the primary controller and all attached child controllers.
extern "C" void FUN_003e566c(ControllerRotationOwner* owner, f32 x, f32 y, f32 z)
{
    if (owner->primary->controller != NULL) {
        controllerSetRotationEulerDegrees(owner->primary->controller, x, y, z);
        owner->rotation.x = x;
        owner->rotation.y = y;
        owner->rotation.z = z;
    }
    for (s32 index = 0; index < 3; ++index) {
        ControllerLink* link = owner->children[index].link;
        if (link != NULL && link->controller != NULL) {
            controllerSetRotationEulerDegrees(link->controller, x, y, z);
        }
    }
}
