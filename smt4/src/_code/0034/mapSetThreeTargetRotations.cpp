#include "common.h"

struct RotationController;
struct RotationTarget {
    u8 unk00[8];
    RotationController *controller; // 0x08
};
struct RotationTargetGroup {
    u8 unk00[0x10];
    RotationTarget *targets[3]; // 0x10
};

extern "C" {
void FUN_0028c618(RotationController *controller, s32 mode, f32 x, f32 y, f32 z);

// Apply the same rotation to each present target controller, using mode zero.
void mapSetThreeTargetRotations(RotationTargetGroup *group, f32 x, f32 y, f32 z)
{
    for (s32 index = 0; index < 3; ++index) {
        RotationTarget *target = group->targets[index];
        if (target != NULL) {
            FUN_0028c618(target->controller, 0, x, y, z);
        }
    }
}
}
