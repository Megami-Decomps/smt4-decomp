/* NON_MATCHING: retail repeats an already-decided button-type test and duplicates offset drawing paths; the readable version shares those paths. */
#include "common.h"
#include "shard/TextureDrawCall.h"

struct GridButtonSlide {
    u8 unk00[0xc];
    s32 x, y; // fixed-point coordinates
    u8 unk14[0xc];
    f32 alpha;
};
struct LargeGridButtonDraw {
    u8 unk000[0x44];
    f32 alpha;
    u8 unk048[0x68];
    GridButtonSlide slide; // 0xb0
    u8 unk0d4[0x364];
    s16 touches[145]; // 0x438
};
extern "C" {
void efctSetSpeed(f32);
s32 recordGetModeForId(s32);
s32 vec2GetYInt(GridButtonSlide *);
s32 vec2GetXInt(GridButtonSlide *);

void largeGridDrawButtonStrip(LargeGridButtonDraw *work, s32 x, s32 y, s32 button, f32 scale)
{
    efctSetSpeed(work->alpha * scale);
    FUN_001835b4(2, 26, 408, x, y, 121);
    FUN_001835b4(2, 26, 409, x, y, 121);
    FUN_001835b4(2, 26, 410, x, y, 121);
    efctSetSpeed(scale);
    FUN_001835b4(2, 26, 411, x, y, 126);
    s32 type = recordGetModeForId(work->touches[button]);
    bool highlighted = type == 1 || type == 2 || type == 6;
    if (highlighted) {
        FUN_001835b4(2, 26, 660, x, y, 126);
        FUN_001835b4(2, 26, 657, x, y, 126);
        FUN_001835b4(2, 26, 658, x, y, 126);
    } else {
        FUN_001835b4(2, 26, 587, x, y, 126);
        FUN_001835b4(2, 26, 412, x, y, 126);
        FUN_001835b4(2, 26, 413, x, y, 126);
    }
    efctSetSpeed(work->slide.alpha * scale);
    s32 offsetY = vec2GetYInt(&work->slide);
    s32 offsetX = vec2GetXInt(&work->slide);
    FUN_001835b4(2, 26, highlighted ? 659 : 414, x + offsetX, y + offsetY, 131);
    efctSetSpeed(scale);
}
}
