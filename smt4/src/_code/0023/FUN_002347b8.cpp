/* NON_MATCHING: byte swap is REV16 now; control-code branches, the spilled `lines` pointer and loop registers differ. */
#include "common.h"

extern "C" {
s32 wstrlenU16(const u16 *text);
void rt_memclr(void *memory, u32 size);

// Split encoded text into at most eight 64-character lines, stopping at the terminal tags.
s32 FUN_002347b8(void *, const u16 *text, u16 (*lines)[64])
{
    s32 length = wstrlenU16(text);
    if (length == 0)
        return 0;
    rt_memclr(lines, sizeof(*lines));
    s32 lineCount = 1;
    s32 column = 0;
    for (s32 i = 0; i < length; ++i) {
        u16 character = text[i];
        u32 code = (u16)(((character & 0xff) << 8) | ((character >> 8) & 0xff));
        if (code == 0xf890 || code == 0xffff)
            return column ? lineCount : lineCount - 1;
        if (code == 0xf801) {
            if (lineCount >= 8)
                return lineCount;
            ++lines;
            column = 0;
            ++lineCount;
            rt_memclr(lines, sizeof(*lines));
        } else {
            (*lines)[column++] = character;
        }
    }
    return lineCount;
}
}
