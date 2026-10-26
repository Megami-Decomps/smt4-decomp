/* NON_MATCHING: retail moves the text pointer into r2 before the blue/scaleY copies (`mov r2, r5` ahead of `vmov s6/s3, s2`); everything else matches since the result is returned. */
#include "shard/W6_W6Match2_TextDrawState.h"

extern "C" {

extern TextDrawState DAT_005b3bc0;
extern TextRenderer *DAT_0053d130[9]; /* the text renderers by slot */
u32 libc_strlen(const char *text);
f32 FUN_00181ae0(TextRenderer *renderer, u32 font, const char *text, u32 length,
                 f32 x, f32 y, f32 scaleX, f32 scaleY, f32 red, f32 green, f32 blue, f32 alpha);

/* Draws `text` at (x, y) with the renderer of slot `slot` (0-8) and returns what the draw returned
   (the drawn width); empty text and bad slots draw nothing and return 0. */
f32 FUN_00182884(u32 slot, const char *text, f32 x, f32 y)
{
    f32 zero = 0.0f;
    if (slot < 9) {
        u32 length = libc_strlen(text);
        if (length != 0) {
            TextRenderer *renderer = DAT_0053d130[slot];
            return FUN_00181ae0(renderer, DAT_005b3bc0.unk0c, text, length,
                                x, y, zero, zero, 10.0f, 13.0f, 0.0f, 1.0f);
        }
    }
    return zero;
}

} /* extern "C" */
