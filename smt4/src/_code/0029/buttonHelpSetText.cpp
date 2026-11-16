/* Button-help text setter: stores the style and splits the text at its first newline into two display lines. */
#include "ui/ButtonHelp.h"
#include <string.h>

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
void *rt_memcpy(void *destination, const void *source, u32 bytes);

// Set the button-help text style and split at most two newline-delimited display lines.
void buttonHelpSetText(const s8 *text, u32 style)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->text.style = style;
    work->unk550 = 0;
    work->unk554 = 255;
    if (!text) {
        work->unk4CB = 0;
        return;
    }
    memset(work->text.lines[0], 0, sizeof(work->text.lines[0]));
    memset(work->text.lines[1], 0, sizeof(work->text.lines[1]));
    s32 line;
    s32 start = 0;
    s32 offset = line = 0;
    do {
        if (text[offset] == '\0') {
            rt_memcpy(work->text.lines[line], text + start, offset - start);
            break;
        }
        if (text[offset] == '\n') {
            rt_memcpy(work->text.lines[line], text + start, offset - start);
            start = offset + 1;
            ++line;
        }
    } while (line <= 1 && ++offset < 128);
    work->unk55C = 0;
    work->unk4CB = 1;
}
}
