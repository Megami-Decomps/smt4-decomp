/* NON_MATCHING: zero/one literals are pooled in reverse order, and range-address/color-byte stores use different GPR scheduling/registers. */
#include "common.h"

struct MoriSceneConfig;
struct MoriSceneDefaults {
    u8 unk000[0x17c];
    f32 fogStart; // 0x17c
    f32 fogEnd; // 0x180
    f32 fogOffset; // 0x184
    f32 fogScale; // 0x188
    f32 fogPower; // 0x18c
    u8 fogColor[4]; // 0x190
};

extern "C" {
void FUN_004063b0(MoriSceneDefaults *scene, const MoriSceneConfig *config);
void FUN_00406ad4(MoriSceneDefaults *scene);

// Initialize the model scene and its default blue-gray distance fog.
void moriSceneSetFogDefaults(MoriSceneDefaults *scene, const MoriSceneConfig *config)
{
    FUN_004063b0(scene, config);
    FUN_00406ad4(scene);
    scene->fogOffset = 0.0f;
    scene->fogScale = 1.0f;
    scene->fogPower = 1.0f;
    scene->fogStart = 30000.0f;
    scene->fogEnd = 35000.0f;
    scene->fogColor[0] = 77;
    scene->fogColor[1] = 166;
    scene->fogColor[2] = 200;
    scene->fogColor[3] = 0;
}
}
