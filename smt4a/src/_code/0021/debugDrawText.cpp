/* NON_MATCHING: retail keeps zero in s16 across wstrlen and x/y in d9; compiler materializes zero after the call and packs x/y into d8. Candidate O2. */
#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {
extern TextDrawState DAT_005b3bc0;
u32 wstrlen(const char*);
void FUN_00181ae0(TextRenderer*, TextFont*, const char*, u32,
                  f32, f32, f32, f32, f32, f32, f32, f32);

// Draw with the current font, black RGB and the supplied alpha.
void debugDrawText(TextRenderer* renderer, const char* text, f32 x, f32 y, f32 alpha)
{
    FUN_00181ae0(renderer, DAT_005b3bc0.font, text, wstrlen(text),
                  x, y, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, alpha);
}
}
