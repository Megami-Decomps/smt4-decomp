#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

/* Draws the text at (left, top) with the given opacity and returns the drawn width (0 when nothing drew). */
static __inline f32 asdTextDrawAt(AsdText *text, f32 left, f32 top, f32 alpha)
{
    f32 width = 0.0f;
    if (text->unk54 == 0)
        return 0.0f;
    if (text->text[0] == '\0')
        return 0.0f;
    u8 alphaByte;
    if (alpha == 0.0f) {
        alphaByte = 0;
    } else if (alpha == 1.0f) {
        alphaByte = 255;
    } else {
        alphaByte = (u8)(u32)(alpha * 255.0f);
    }
    u32 color = g_asdTextDefaults.flags | alphaByte;
    f32 advance = textDrawString(left, top, 0.0f, text->drawLayer, text->scale, color, alpha, text->text);
    f32 drawn = (advance + left) - left;
    if (drawn > 0.0f) {
        width = drawn;
    }
    return width;
}

/* Draws the text at an integer position; the layer its caller passes is not used. */
f32 asdTextDrawAtInt(AsdText *text, s32 x, s32 y, s32 layer, f32 alpha)
{
    return asdTextDrawAt(text, (f32)x, (f32)y, alpha);
}

} /* extern "C" */
