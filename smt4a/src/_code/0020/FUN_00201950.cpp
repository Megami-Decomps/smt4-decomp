/* NON_MATCHING: retail uses ldr r1, [pc, #28] where the compiled block uses ldr r1, [pc, #32]. */
#include "common.h"

struct Vector3 {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};

extern "C" {
extern const Vector3 DAT_005e1c38[4];

Vector3 FUN_00201950(u32 index)
{
    if (index < 4) {
        return DAT_005e1c38[index];
    }

    Vector3 result = { 0.0f, 0.0f, 0.0f };
    return result;
}
}
