#include "shard/W6_W6Match2_TextDrawState.h"
#include "code/Code0029_Smt4.h"

extern "C" {
extern TextDrawState g_asdFontGlyphSets;
u32 libc_strlen(const char*);
void textDrawCore(u32 color, TextFont*, const char*, u32,
                  f32, f32, f32, f32, f32, f32, f32, f32);

// Draw with the current font at depth 0 and unit scale; `alpha` is the last argument.
void debugDrawText(u32 color, f32 x, f32 y, f32 alpha, const char* text)
{
    f32 zero = 0.0f;
    u32 length = libc_strlen(text);
    TextDrawState *state = &g_asdFontGlyphSets;
    textDrawCore(color, state->font, text, length,
                  x, y, zero, 1.0f, zero, zero, zero, alpha);
}
}
