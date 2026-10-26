/* NON_MATCHING: ARMCC merges highlighted/plain draw calls and does not reproduce retail's branch hints or final setter tail call. */
#include "shard/W6_W6Match7_FontResource.h"
#include "text/TextDraw.h"
#include "shard/W6_W6Match2_HelpResources.h"

extern "C" {
void efctSetSpeed(f32 alpha);

/* Draw a two-byte glyph, substituting the fallback when the font lacks it. */
void textDrawEncodedGlyph(void *, u32 code, s32 x, s32 y, s32 dim, s32 highlighted, f32 alpha)
{
    if (code == 0xFFFFFFFF) {
        return;
    }
    FontGlyphResourceOwner *resource = FUN_0019dc44(3);
    FontGlyphLookup *font = resource->font;
    if (!font->vtable->hasGlyph(font, (u16)code) && code != 0) {
        code = 0xFFFF8140;
    }
    f32 drawAlpha = alpha;
    u32 color = 0xFFFFFFFF;
    if (highlighted != 0) {
        color = 0x57D8FFFF;
    }
    if (dim != 0) {
        drawAlpha -= 0.7f;
        if (drawAlpha < 0.0f) {
            drawAlpha = 0.0f;
        }
    }
    char text[3];
    text[0] = (char)(code >> 8);
    text[1] = (char)code;
    text[2] = 0;
    if (highlighted != 0) {
        textDrawString(4, color, text, (f32)x, (f32)y, 0.0f, 0.0f, drawAlpha);
    } else {
        textDrawString(3, color, text, (f32)x, (f32)y, 0.0f, 0.0f, drawAlpha);
    }
    efctSetSpeed(alpha);
}
}
