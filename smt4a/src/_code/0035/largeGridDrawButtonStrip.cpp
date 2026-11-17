/* NON_MATCHING: retail repeats an already-decided button-type test and duplicates offset drawing paths; the readable version shares those paths. */
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "gamedata/GameDataAccess.h"
#include "shard/TextureDrawCall.h"

struct LargeGridButtonDraw {
    u8 unk000[0x44];
    f32 alpha;
    u8 unk048[0x68];
    UiSpriteState slide; // 0x0b0
    u8 unk13c[0x2fc];
    s16 touches[145]; // 0x438
};
extern "C" {
void efctSetSpeed(f32);

void largeGridDrawButtonStrip(LargeGridButtonDraw *work, s32 x, s32 y, s32 button, f32 scale)
{
    efctSetSpeed(work->alpha * scale);
    texDrawTableEntryAtStoredOrigin(2, 26, 408, x, y, 121);
    texDrawTableEntryAtStoredOrigin(2, 26, 409, x, y, 121);
    texDrawTableEntryAtStoredOrigin(2, 26, 410, x, y, 121);
    efctSetSpeed(scale);
    texDrawTableEntryAtStoredOrigin(2, 26, 411, x, y, 126);
    s32 type = recordGetModeForId(work->touches[button]);
    bool highlighted = type == 1 || type == 2 || type == 6;
    if (highlighted) {
        texDrawTableEntryAtStoredOrigin(2, 26, 660, x, y, 126);
        texDrawTableEntryAtStoredOrigin(2, 26, 657, x, y, 126);
        texDrawTableEntryAtStoredOrigin(2, 26, 658, x, y, 126);
    } else {
        texDrawTableEntryAtStoredOrigin(2, 26, 587, x, y, 126);
        texDrawTableEntryAtStoredOrigin(2, 26, 412, x, y, 126);
        texDrawTableEntryAtStoredOrigin(2, 26, 413, x, y, 126);
    }
    efctSetSpeed(work->slide.alpha * scale);
    s32 offsetY = vec2GetYInt(&work->slide);
    s32 offsetX = vec2GetXInt(&work->slide);
    texDrawTableEntryAtStoredOrigin(2, 26, highlighted ? 659 : 414, x + offsetX, y + offsetY, 131);
    efctSetSpeed(scale);
}
}
