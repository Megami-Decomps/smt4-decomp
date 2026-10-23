/* NON_MATCHING: packed-color channel insertion and floating-point clamp scheduling differ. */
#include "battle/btlStage.h"
#include "shard/Shard0036.h"

struct StageColorRegistry {
    u32 unk00;
    void *context;
};
extern "C" {
extern StageColorRegistry *g_handleRegistry;
void FUN_00406768(void *context, s32 handle, u32 color);
}

static __inline f32 clampStageColor(f32 value)
{
    if (value >= 1.0f)
        return 1.0f;
    if (value <= 0.0f)
        return 0.0f;
    return value;
}

/* Set an opaque RGB tint on the stage's registered model. */
extern "C" void FUN_004d8bf8(BtlStage *stage, f32 red, f32 green, f32 blue)
{
    if (stage->apocalypse.selection < 0)
        return;
    RgbaWord color;
    color.rgba.r = static_cast<u8>(clampStageColor(red) * 255.0f + 0.5f);
    color.rgba.g = static_cast<u8>(clampStageColor(green) * 255.0f + 0.5f);
    color.rgba.b = static_cast<u8>(clampStageColor(blue) * 255.0f + 0.5f);
    color.rgba.a = 255;
    u32 packed = (static_cast<u32>(color.rgba.r) << 24) |
                 (static_cast<u32>(color.rgba.g) << 16) |
                 (static_cast<u32>(color.rgba.b) << 8) | color.rgba.a;
    FUN_00406768(g_handleRegistry->context, stage->apocalypse.selection, packed);
}
