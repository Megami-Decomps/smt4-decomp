/* NON_MATCHING: 8 lines: text and its element pointer swap callee-saved registers (retail keeps text in r5, &text[i] in r6). */
#include "common.h"
#include "text/TextCode.h"

extern "C" {
s32 wstrlenU16(const u16 *text);
void rt_memclr(void *memory, u32 size);

/* Splits encoded text into at most eight 64-character lines, stopping at the terminal tags; returns the line count. */
s32 FUN_00473754(void *, const u16 *text, u16 (*lines)[64])
{
    s32 length = wstrlenU16(text);
    if (length == 0)
        return 0;
    rt_memclr(lines, sizeof(*lines));
    u16 *line = *lines;
    s32 lineCount = 1;
    s32 column = 0;
    for (s32 i = 0; i < length; ++i) {
        u16 code = textCodeSwapBytes(text[i]);
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
