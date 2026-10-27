/* NON_MATCHING: loop shape and the signed -8 constant (s8 output buffer) now match retail; remaining: retail copies the zero (mov r5, r3), compares `written < size` signed without peeling (an s32 size peels the loop here), and shares one epilogue. */
#include "common.h"

extern "C" {
extern s8 DAT_0063d008[];                /* default 0x100-byte output buffer */
extern const char DAT_0053d2e8[][2];     /* two-byte code of each single-byte character */

/* Converts `text` to two-byte character codes in `out` (default buffer and 0x100 bytes when not given):
 * double-byte characters are copied, a newline becomes F8 01, others go through the code table. */
s8 *FUN_001654f8(const char *text, s8 *out, u32 size)
{
    s32 written = 0;
    s32 read = 0;

    if (out == NULL) {
        out = DAT_0063d008;
    }
    if (size == 0) {
        size = 0x100;
    }
    do {
        u8 c = text[read++];

        if (c == 0) {
            out[written] = 0;
            out[written + 1] = 0;
            return DAT_0063d008;
        }
        if (c & 0x80) {
            out[written] = c;
            out[written + 1] = text[read++];
        } else if (c == '\n') {
            out[written] = (char)0xF8;
            out[written + 1] = 1;
        } else {
            out[written] = DAT_0053d2e8[c][0];
            out[written + 1] = DAT_0053d2e8[c][1];
        }
        written += 2;
    } while (written < size);
    out[size - 1] = 0;
    return DAT_0063d008;
}

} /* extern "C" */
