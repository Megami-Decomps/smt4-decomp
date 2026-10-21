/* NON_MATCHING: retail preserves the unit constant across wstrlen and saves d8-d9; compiler packs x/y into d8 and materializes the constant afterward. */
#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {
extern TextDrawState DAT_005b3bc0;
u32 wstrlen(const char* text);
void FUN_00181ae0(TextRenderer* renderer, TextFont* font, const char* text, u32 length,
                  f32 x, f32 y, f32 scaleX, f32 scaleY, f32 red, f32 green, f32 blue, f32 alpha);

// Draw the complete string with the current font, unit scaling and opaque white color.
void textDrawDefaultString(const char* text, f32 x, f32 y)
{
    FUN_00181ae0(DAT_005b3bc0.renderer, DAT_005b3bc0.font, text, wstrlen(text),
                  x, y, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
}
}
