#include "common.h"
struct Vector3 { f32 x; f32 y; f32 z; };
extern "C" {
extern const Vector3 DAT_005e1c38[4];

Vector3 FUN_00201950(u32 index)
{
    if (index < 4)
        return DAT_005e1c38[index];
    Vector3 result;
    result.x = result.y = result.z = 0.0f;
    return result;
}
}
