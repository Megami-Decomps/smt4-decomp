#include "camp/CampState.h"

extern "C" {
extern CampStateA *g_camp;
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 scale);
f32 vec2GetSpeed(const void *vector);
void FUN_001835b4(u32 style, u32 bank, u32 resource, u32 first, u32 second, u32 layer);

void campDrawFrame(u32 first, u32 second, s32 alternate, f32 scale)
{
    CampStateA *camp = g_camp;
    f32 savedScale = jobGetScalarValue();
    efctSetSpeed(vec2GetSpeed(&camp->primaryAnimation.properties) * scale);
    FUN_001835b4(2, 18, 0x46D, first, second, 0xBF);
    FUN_001835b4(2, 18, 0x46E, first, second, 0xBF);
    FUN_001835b4(2, 18, 0x46F, first, second, 0xBF);
    efctSetSpeed(savedScale);
    FUN_001835b4(2, 18, 0x470, first, second, 0xC4);
    if (alternate != 0) {
        FUN_001835b4(2, 18, 0x5A9, first, second, 0xC4);
        FUN_001835b4(2, 18, 0x5AA, first, second, 0xC4);
        FUN_001835b4(2, 18, 0x5AB, first, second, 0xC5);
        efctSetSpeed(vec2GetSpeed(&camp->primaryAnimation.properties));
        FUN_001835b4(2, 18, 0x5AC, first, second, 0xC6);
        efctSetSpeed(savedScale);
    } else {
        FUN_001835b4(2, 18, 0x471, first, second, 0xC4);
        FUN_001835b4(2, 18, 0x472, first, second, 0xC4);
        FUN_001835b4(2, 18, 0x473, first, second, 0xC5);
        efctSetSpeed(vec2GetSpeed(&camp->primaryAnimation.properties));
        FUN_001835b4(2, 18, 0x59D, first, second, 0xC6);
        efctSetSpeed(savedScale);
    }
}
}
