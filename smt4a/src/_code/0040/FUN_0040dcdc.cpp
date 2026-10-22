/* NON_MATCHING: direct RGB extraction omits native's redundant word swap; VFP scheduling differs. */
#include "battle/btlMain.h"
#include "battle/btlStage.h"

extern "C" {
extern BtlStage* g_btlStageModel;
extern void* g_handleRegistry;
BtlMainStateA* btlGetMainState(void);
const u32* table108Owner(void* owner, s32 selection, s32 frame);
void FUN_003e7840(BtlMainStateA* battle, f32 red, f32 green, f32 blue);

void FUN_0040dcdc(u32, void* owner)
{
    struct ColorJobView {
        u16 unk00;
        u16 state;
        u8 unk04[0x24];
        s32 duration;
        u8 unk2C[0x20];
        s32 elapsed;
    };
    struct RegistryView {
        u32 unk00;
        void* owner;
    };
    ColorJobView* work = static_cast<ColorJobView*>(owner);
    if (work->duration > 0) {
        BtlMainStateA* battle = btlGetMainState();
        f32 remaining = (f32)(work->duration - work->elapsed);
        const RegistryView* registry = static_cast<const RegistryView*>(g_handleRegistry);
        u32 color = *table108Owner(registry->owner, g_btlStageModel->apocalypse.selection, work->elapsed);
        // The table stores RGBA from the most-significant byte to the least-significant byte.
        s32 redByte = color >> 24;
        s32 greenByte = (color >> 16) & 0xFF;
        s32 blueByte = (color >> 8) & 0xFF;
        const f32 scale = 1.0f / 255.0f;
        f32 red = (f32)redByte * scale;
        f32 green = (f32)greenByte * scale;
        f32 blue = (f32)blueByte * scale;
        FUN_003e7840(battle,
            red - (red - 0.5f) / remaining,
            green - (green - 0.5f) / remaining,
            blue - (blue - 0.5f) / remaining);
        ++work->elapsed;
        if (work->elapsed < work->duration) {
            work->state = 1;
        }
    }
}
}
