#include "shard/W5_W5Match7_ControllerPose.h"

struct PositionTarget {
    u32 unk00;
    ControllerPose *controller; // 0x04
};
struct PositionTargetGroup {
    u8 unk00[0x1c];
    PositionTarget *targets[3]; // 0x1c
};

extern "C" {
void controllerSetPosition(ControllerPose *controller, f32 x, f32 y, f32 z);

// Propagate the same position to every present target controller.
void controllerGroupSetPosition(PositionTargetGroup *group, f32 x, f32 y, f32 z)
{
    for (s32 index = 0; index < 3; ++index) {
        PositionTarget *target = group->targets[index];
        if (target != NULL) {
            controllerSetPosition(target->controller, x, y, z);
        }
    }
}
}
