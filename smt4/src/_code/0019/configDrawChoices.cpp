/* NON_MATCHING: the prologue, loop and float constants match; armcc reassociates the centered label's x sum
 * ((position->x + label->x) + (x + offset) against retail's position->x + (x + (label->x + offset))) and schedules
 * the label's coordinate loads and the layer move differently. */
#include <stdio.h>
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#include "camp/Config/Config.h"
static const char s_labelFormat[] = "%s";
extern "C" {
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
        sprintf(text, s_labelFormat, choices->labels[index]);
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x2f, 0x41);
        s32 width = fontMeasureLineAdvance(text, 2);
        textDrawString(static_cast<f32>(position->x + (x + (label->x + (label->placement->width - width) / 2))),
                       static_cast<f32>(position->y + label->y + y), 0.0f, 2, 0.0f, color, 1.0f, text);
    }
}
}
