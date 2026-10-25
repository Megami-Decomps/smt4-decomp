/* NON_MATCHING: retail keeps x/y in s17/s18 and zero in s16 across strlen (saves d8-d9); the build packs x/y into d8. Arguments now follow the retail pool (zero, zero, 10, 13, zero, 1). */
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
    f32 zero = 0.0f;
    if (slot < 9) {
        u32 length = libc_strlen(text);
        if (length != 0) {
            TextDrawState *state = &DAT_00464a70;
            FUN_002b2b88(DAT_004093bc[slot], state->unk0c, text, length,
                         x, y, zero, zero, 10.0f, 13.0f, zero, 1.0f);
        }
    }
}

} /* extern "C" */
