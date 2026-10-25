#include "common.h"

struct Vector3 {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};

extern "C" {
extern const Vector3 DAT_005e1c68[4];

Vector3 FUN_00201984(u32 index)
{
    if (index < 4) {
        return DAT_005e1c68[index];
    }

    Vector3 result;
    result.x = result.y = result.z = 0.0f;
    return result;
}
}
