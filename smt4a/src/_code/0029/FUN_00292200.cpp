/* NON_MATCHING: retail uses vldr s16, [pc, #44] where the compiled block uses vldr s16, [pc, #36]. */
#include "common.h"

struct Vector3 {
    f32 x; // 0x00
    f32 y; // 0x04
    f32 z; // 0x08
};

extern "C" {
extern s32 gameFlagIsSet(u32 flag);
extern Vector3 DAT_005f0c94;

Vector3 FUN_00292200(void)
{
    Vector3 fallback;
    fallback.x = 0.0f;
    fallback.y = 100000.0f;
    fallback.z = 0.0f;
    if (gameFlagIsSet(0x4D0) != 0) {
        return DAT_005f0c94;
    }
    return fallback;
}
}
