/* NON_MATCHING: prologue scheduling, floating constants and centered-label arithmetic/conversion registers differ; 91 instructions each. */
#include "shard/S1ListPanel.h"

namespace {
struct ConfigurationChoices {
    char heading[30];
    char labels[3][10];
};
}
extern "C" {
extern const char DAT_004028ec[];
const SpriteInfo *FUN_002bf4f8(u32 archive, s32 index);
void FUN_002bf380(s32 layer, u32 archive, u32 image, s32 x, s32 y, s32 priority);
s32 textFormatBuffer(char *destination, const char *format, ...);
s32 FUN_002b6dd8(const char *text, s32 font);
void FUN_002be5a4(s32 font, u32 color, const char *text, f32 x, f32 y, f32, f32, f32);

// Draw configuration choices with the selected background and horizontally centered labels.
void FUN_00196fe8(s32 count, s32 x, s32 y, s32 selected, const ConfigurationChoices *choices)
{
    s32 firstPosition = 0x42;
    if (count > 2)
        firstPosition = 0x44;
    for (s32 index = 0; index < count; ++index) {
        const SpriteInfo *position = FUN_002bf4f8(0x2f, firstPosition + index);
        u32 color;
        if (selected == index) {
            color = 0xff;
            FUN_002bf380(2, 0x2f, 9, position->x + x, position->y + y, 0x1f);
        } else {
            color = 0xffffffff;
            FUN_002bf380(2, 0x2f, 8, position->x + x, position->y + y, 0x1f);
        }
        char text[64];
        textFormatBuffer(text, DAT_004028ec, choices->labels[index]);
        const SpriteInfo *label = FUN_002bf4f8(0x2f, 0x41);
        s32 width = FUN_002b6dd8(text, 2);
        s32 labelX = position->x + (x + (label->x + (label->size[0] - width) / 2));
        s32 labelY = position->y + label->y + y;
        FUN_002be5a4(2, color, text, static_cast<f32>(labelX), static_cast<f32>(labelY), 0.0f, 0.0f, 1.0f);
    }
}
}
