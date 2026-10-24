/* NON_MATCHING: VFP allocation: retail keeps the 1.0f constant in s16 across the strlen call and x/y in s17/s18 (saves d8-d9) and loads s7/s5/s4 from the pool; the build packs x/y into d8 and derives s7 from s2. Same pattern as debugDrawText (candidate -O2). */
#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {

extern TextDrawState DAT_00464a70;
extern TextRenderer *DAT_004093bc[9]; /* the text renderers by slot */
u32 libc_strlen(const char *text);
void FUN_002b2b88(TextRenderer *renderer, u32 font, const char *text, u32 length,
                  f32 x, f32 y, f32 scaleX, f32 scaleY, f32 red, f32 green, f32 blue, f32 alpha);

/* Draws `text` at (x, y) with the renderer of slot `slot` (0-8); empty text and bad slots draw nothing. */
void FUN_002aed34(u32 slot, const char *text, f32 x, f32 y)
{
    if (slot < 9) {
        u32 length = libc_strlen(text);
        if (length != 0) {
            FUN_002b2b88(DAT_004093bc[slot], DAT_00464a70.unk0c, text, length,
                         x, y, 1.0f, 1.0f, 10.0f, 13.0f, 1.0f, 1.0f);
        }
    }
}

} /* extern "C" */
