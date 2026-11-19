/* NON_MATCHING: prologue scheduling, floating constants and centered-label arithmetic/conversion registers differ; 91 instructions each. */
#include "runtime/Stdio.h"
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#include "camp/Config/Config.h"
extern "C" {
extern const char DAT_004028ec[];
void texDrawCompositeSprite(s32 layer, u32 archive, u32 image, s32 x, s32 y, s32 priority);

// Draw configuration choices with the selected background and horizontally centered labels.
void configDrawChoices(s32 count, s32 x, s32 y, s32 selected, const ConfigurationChoices *choices)
{
    s32 firstPosition = 0x42;
    if (count > 2)
        firstPosition = 0x44;
    for (s32 index = 0; index < count; ++index) {
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(0x2f, firstPosition + index);
        u32 color;
        if (selected == index) {
            color = 0xff;
            texDrawCompositeSprite(2, 0x2f, 9, position->x + x, position->y + y, 0x1f);
        } else {
            color = 0xffffffff;
            texDrawCompositeSprite(2, 0x2f, 8, position->x + x, position->y + y, 0x1f);
        }
        char text[64];
        __2sprintf(text, DAT_004028ec, choices->labels[index]);
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x2f, 0x41);
        s32 width = fontMeasureLineAdvance(text, 2);
        s32 labelX = position->x + (x + (label->x + (label->placement->width - width) / 2));
        s32 labelY = position->y + label->y + y;
        textDrawString(2, color, text, static_cast<f32>(labelX), static_cast<f32>(labelY), 0.0f, 0.0f, 1.0f);
    }
}
}
