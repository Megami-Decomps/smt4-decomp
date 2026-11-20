#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {
extern TextDrawState g_asdFontGlyphSets;
u32 libc_strlen(const char* text);
void textDrawCore(TextRenderer* renderer, TextFont* font, const char* text, u32 length,
                  f32 x, f32 y, f32 z, f32 scale, f32 offsetX, f32 offsetY, f32 width, f32 height);

// Draw the complete string with the current font at unit scale, depth 0 and a final factor of 1.
void textDrawDefaultString(const char* text, f32 x, f32 y)
{
    f32 zero = 0.0f;
    u32 length = libc_strlen(text);
    TextDrawState *state = &g_asdFontGlyphSets;
    textDrawCore(state->renderer, state->font, text, length,
                  x, y, zero, 1.0f, zero, zero, zero, 1.0f);
}
}
