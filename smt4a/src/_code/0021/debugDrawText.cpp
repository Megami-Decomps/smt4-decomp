/* NON_MATCHING: retail moves the strlen result into r3 right after the call and loads the font through r0 (the state address in r0, font into r1); the build keeps the length in r0 until the end and uses r1 for both. */
#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {
extern TextDrawState DAT_005b3bc0;
u32 libc_strlen(const char*);
void FUN_00181ae0(TextRenderer*, TextFont*, const char*, u32,
                  f32, f32, f32, f32, f32, f32, f32, f32);

// Draw with the current font, black RGB and the supplied alpha.
void debugDrawText(TextRenderer* renderer, const char* text, f32 x, f32 y, f32 alpha)
{
    f32 zero = 0.0f;
    FUN_00181ae0(renderer, DAT_005b3bc0.font, text, libc_strlen(text), x, y, zero, 1.0f, zero, zero, zero, alpha);
}
}
