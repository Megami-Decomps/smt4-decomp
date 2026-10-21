/* NON_MATCHING: retail keeps zero in s16 across strlen and x/y in d9; compiler materializes zero after the call and packs x/y into d8. Candidate O2. */
#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {
extern TextDrawState DAT_00464a70;
u32 libc_strlen(const char*);
void FUN_002b2b88(TextRenderer*, TextFont*, const char*, u32,
                  f32, f32, f32, f32, f32, f32, f32, f32);

// Draw with the current font, black RGB and the supplied alpha.
void debugDrawText(TextRenderer* renderer, const char* text, f32 x, f32 y, f32 alpha)
{
    FUN_002b2b88(renderer, DAT_00464a70.font, text, libc_strlen(text),
                  x, y, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, alpha);
}
}
