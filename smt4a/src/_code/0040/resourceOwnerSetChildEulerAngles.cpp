#include "common.h"

struct ChildResource {
    u32 unk00;
    u32 resource; // 0x04
};
struct ChildResourceOwner {
    u8 unk00[0x1c];
    ChildResource *children[3]; // 0x1c
};

extern "C" void controllerSetRotationEulerDegrees(u32, f32, f32, f32);

// Apply the three-component resource operation to each occupied child slot.
extern "C" void resourceOwnerSetChildEulerAngles(ChildResourceOwner *owner, f32 x, f32 y, f32 z)
{
    for (s32 i = 0; i < 3; ++i) {
        ChildResource *child = owner->children[i];
        if (child != NULL)
            controllerSetRotationEulerDegrees(child->resource, x, y, z);
    }
}
