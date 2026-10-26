/* NON_MATCHING: flag booleanization, width expression and draw-argument scheduling differ. */
#include "shard/Shard0033.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern const char DAT_0052fa28[];
s32 fontMeasureLineAdvance(const char *text, s32 font);
s32 fontMeasureFormattedText(s32 font, const char *format, ...);
void FUN_00186008(s32 x, s32 y, s32 flags, s32 value);
void FUN_00185e84(s32 frame, s32 x, s32 group, s32 flags, s32 first, s32 second);
void effectDispatchSelector(s32 frame, s32 x, s32 group, s32 flags, f32 alpha);

// Center a label, icon and signed numeric value within the supplied layout width.
void FUN_0016631c(MenuState *menu, const TextureTableEntryIV *layout)
{
    // The value at 0x2B4 extends beyond MenuState's shared prefix.
    struct NumericCaptionView {
        u8 prefix[0x18];
        s16 icon;
        u8 padding1A[0x22];
        SpritePlaybackView sprite;
        u8 paddingC8[0x1A4];
        char label[0x40];
        u8 padding2AC[5];
        u8 showSign;
        u8 padding2B2[2];
        s32 value;
    };
    typedef char NumericCaptionOffsetsCheck[offsetof(NumericCaptionView, label) == 0x26C &&
        offsetof(NumericCaptionView, showSign) == 0x2B1 && offsetof(NumericCaptionView, value) == 0x2B4 ? 1 : -1];
    const NumericCaptionView *caption = reinterpret_cast<const NumericCaptionView *>(menu);
    s32 labelWidth = fontMeasureLineAdvance(caption->label, 4);
    s32 numberWidth = 0;
    s32 signWidth = 0;
    bool showPlus = false;
    if (caption->showSign) {
        showPlus = caption->value >= 0;
        if (showPlus)
            signWidth = asdTMTexTableEntryAt(8, 0x1A3)->placement->width + 12;
    }
    if (caption->value != 0) {
        labelWidth += asdTMTexTableEntryAt(8, 0x19C)->placement->width;
        numberWidth = fontMeasureFormattedText(7, DAT_0052fa28, caption->value);
    }
    s32 left = (layout->placement->width - (labelWidth + numberWidth + 13 + signWidth)) / 2;
    const TextureTableEntryIV *labelMetric = asdTMTexTableEntryAt(8, 0x68);
    textDrawString(4, -1, caption->label, (f32)(left + 13 + signWidth),
        (f32)labelMetric->y, 0.57f, 0.0f, caption->sprite.alpha);
    const TextureTableEntryIV *numberMetric = asdTMTexTableEntryAt(8, 0x19D);
    FUN_00186008(left + labelWidth + 13 + signWidth, numberMetric->y, 0x79, caption->value);
    FUN_00185e84(caption->icon, left + signWidth, 8, 0x79, 0, 0);
    if (showPlus)
        effectDispatchSelector(4, left, 8, 0x79, 1.0f);
}
}
