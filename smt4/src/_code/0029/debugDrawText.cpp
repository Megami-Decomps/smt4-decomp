#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {
extern TextDrawState DAT_00464a70;
u32 libc_strlen(const char*);
void FUN_002b2b88(TextRenderer*, TextFont*, const char*, u32,
                  f32, f32, f32, f32, f32, f32, f32, f32);

// Draw with the current font at depth 0 and unit scale; `alpha` is the last argument.
void debugDrawText(TextRenderer* renderer, const char* text, f32 x, f32 y, f32 alpha)
{
    f32 zero = 0.0f;
    u32 length = libc_strlen(text);
    TextDrawState *state = &DAT_00464a70;
    FUN_002b2b88(renderer, state->font, text, length,
                  x, y, zero, 1.0f, zero, zero, zero, alpha);
}
}
