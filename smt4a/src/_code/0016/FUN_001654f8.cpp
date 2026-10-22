/* NON_MATCHING: armcc peels the first loop pass (nine saved registers); retail keeps one plain do-while body (seven). */
#include "common.h"

extern "C" {
extern char DAT_0063d008[];              /* default 0x100-byte output buffer */
extern const char DAT_0053d2e8[][2];     /* two-byte code of each single-byte character */

/* Converts `text` to two-byte character codes in `out` (default buffer and 0x100 bytes when not given):
 * double-byte characters are copied, a newline becomes F8 01, others go through the code table. */
char *FUN_001654f8(const char *text, char *out, s32 size)
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
