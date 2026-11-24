/* NON_MATCHING: register allocation only: the opacity temp (retail r0, built r1) and the 0.0f constant (retail s0, built s2) differ. */
#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;


/* Draws the text at (left, top) with the given opacity and returns the drawn width (0 when nothing drew). */
static __inline f32 asdTextDrawAt(AsdText *text, f32 left, f32 top, f32 alpha)
{
    f32 width = 0.0f;

    if (text->unk54 != 0 && text->text[0] != '\0') {
        u8 opacity;
        if (alpha == 0.0f) {
            opacity = 0;
        } else if (alpha == 1.0f) {
            opacity = 255;
        } else {
            opacity = (u8)(u32)(alpha * 255.0f);
        }
        f32 right = textDrawString(left, top, 0.0f, text->unk50,
                                 text->scale, g_asdTextDefaults.flags | opacity, alpha, text->text);
        f32 drawn = right + left - left;
        if (drawn > 0.0f) {
            width = drawn;
        }
    }
    return width;
}

/* Draws the text at an integer position; the layer its caller passes is not used. */
f32 asdTextDrawAtInt(AsdText *text, s32 x, s32 y, s32 layer, f32 alpha)
{
    return asdTextDrawAt(text, (f32)x, (f32)y, alpha);
}

} /* extern "C" */
