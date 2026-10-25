/* NON_MATCHING: register allocation differs: retail moves the text pointer to r3 and alpha to s4 up front and loads the font handle last. */
#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;


/* Draws the text at (x, y) with the given opacity and returns the drawn width (0 when nothing drew). */
f32 FUN_00124c60(AsdText *text, s32 x, s32 y, f32 alpha)
{
    f32 width = 0.0f;
    f32 left = (f32)x;
    f32 top = (f32)y;

    if (text->unk54 != 0 && text->text[0] != '\0') {
        u8 opacity;
        if (alpha == 0.0f) {
            opacity = 0;
        } else if (alpha == 1.0f) {
            opacity = 255;
        } else {
            opacity = (u8)(u32)(alpha * 255.0f);
        }
        f32 right = textDrawString(text->unk50, g_asdTextDefaults.flags | opacity, text->text, left,
                                 top, 0.0f, text->scale, alpha);
        f32 drawn = right + left - left;
        if (drawn > 0.0f) {
            width = drawn;
        }
    }
    return width;
}

} /* extern "C" */
