#include "common.h"

extern "C" {
extern s8 DAT_0063d008[];                /* default 0x100-byte output buffer */
extern const u8 DAT_0053d2e8[][2];       /* two-byte code of each single-byte character */

/* Expands single-byte glyphs into two-byte codes, keeping multibyte characters (the body of
 * textExpandSingleByteGlyphs). */
static __inline void expandGlyphs(const u8 *source, s8 *destination, s32 capacity)
{
    s32 written = 0;
    s32 read = 0;
    for (;;) {
        u8 character = source[read++];
        if (character == 0) {
            destination[written] = 0;
            destination[written + 1] = 0;
            return;
        }
        if (character & 0x80) {
            destination[written] = character;
            destination[written + 1] = source[read++];
        } else if (character == '\n') {
            destination[written] = -8;
            destination[written + 1] = 1;
        } else {
            destination[written] = DAT_0053d2e8[character][0];
            destination[written + 1] = DAT_0053d2e8[character][1];
        }
        written += 2;
        if (written >= capacity) {
            destination[capacity - 1] = 0;
            return;
        }
    }
}

/* Converts `text` to two-byte character codes in `out` (default buffer and 0x100 bytes when not given):
 * double-byte characters are copied, a newline becomes F8 01, others go through the code table. */
s8 *FUN_001654f8(const char *text, s8 *out, s32 size)
{
    if (out == NULL) {
        out = DAT_0063d008;
    }
    if (size == 0) {
        size = 0x100;
    }
    expandGlyphs((const u8 *)text, out, size);
    return DAT_0063d008;
}

} /* extern "C" */
