/* NON_MATCHING: retail compares 0xFFFF by subtraction instead of a hoisted constant register, so it spills the current line pointer to the stack ([sp]) and numbers the loop registers differently. */
#include "common.h"

extern "C" {
s32 wstrlenU16(const u16 *text);
void rt_memclr(void *memory, u32 size);

// Split encoded text into at most eight 64-character lines, stopping at the terminal tags; returns the line count.
s32 FUN_002347b8(void *, const u16 *text, u16 (*lines)[64])
{
    s32 length = wstrlenU16(text);
    if (length == 0)
        return 0;
    rt_memclr(lines, sizeof(*lines));
    u16 *line = *lines;
    s32 lineCount = 1;
    s32 column = 0;
    for (s32 i = 0; i < length; ++i) {
        u16 character = text[i];
        u32 code = (u16)(((character & 0xff) << 8) | ((character >> 8) & 0xff));
        if (code == 0xf890 || code == 0xffff) {
            if (column == 0)
                --lineCount;
            break;
        }
        if (code == 0xf801) {
            if (lineCount >= 8)
                break;
            ++lines;
            column = 0;
            ++lineCount;
            rt_memclr(lines, sizeof(*lines));
            line = *lines;
        } else {
            line[column++] = text[i];
        }
    }
    return lineCount;
}
}
