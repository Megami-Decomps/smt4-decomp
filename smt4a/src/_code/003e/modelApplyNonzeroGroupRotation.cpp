#include "common.h"

struct RotationVector {
    /* 0x00 */ f32 x, y, z;
};

struct RotationChild {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *controller;
};

struct RotationSlot {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ RotationChild *child;
    /* 0x10 */ u8 unk10[0x4c];
};

struct RotationGroup {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RotationChild *main;
    /* 0x0C */ RotationVector rotation;
    /* 0x18 */ RotationSlot slots[3];
};

extern "C" void controllerSetRotationEulerDegrees(void *controller, f32 x, f32 y, f32 z);

static inline bool rotationIsZero(const RotationVector *rotation)
{
    return rotation->x == 0.0f && rotation->y == 0.0f && rotation->z == 0.0f;
}

// Apply a nonzero rotation to the main controller and each attached child.
extern "C" void modelApplyNonzeroGroupRotation(RotationGroup *group, const RotationVector *rotation)
{
    if (rotationIsZero(rotation))
        return;
    if (group->main->controller != NULL) {
        controllerSetRotationEulerDegrees(group->main->controller, rotation->x, rotation->y, rotation->z);
        group->rotation.x = rotation->x;
        group->rotation.y = rotation->y;
        group->rotation.z = rotation->z;
    }
    for (s32 index = 0; index < 3; ++index) {
        if (group->slots[index].child != NULL)
            controllerSetRotationEulerDegrees(group->slots[index].child->controller,
                                              rotation->x, rotation->y, rotation->z);
    }
}
