/* Button-help text setter: stores the color and splits the text at its first newline into two display lines. */
#include "ui/ButtonHelpGlobal.h"
#include <string.h>

extern "C" {
void *__aeabi_memcpy(void *destination, const void *source, u32 size);

// Set the button-help text color and split at most two newline-delimited display lines.
void buttonHelpSetText(const s8 *text, u32 color)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    work->text.style = color;
    work->text.highlightStyle = 0;
    work->text.highlightLine = 0xff;
    if (!text) {
        work->textVisible = 0;
        return;
    }
    memset(work->text.lines[0].text, 0, sizeof(work->text.lines[0].text));
    memset(work->text.lines[1].text, 0, sizeof(work->text.lines[1].text));
    s32 line;
    s32 start = 0;
    s32 offset = line = 0;
    do {
        if (text[offset] == '\0') {
            __aeabi_memcpy(work->text.lines[line].text, text + start, offset - start);
            break;
        }
        if (text[offset] == '\n') {
            __aeabi_memcpy(work->text.lines[line].text, text + start, offset - start);
            start = offset + 1;
            ++line;
        }
    } while (line <= 1 && ++offset < 128);
    work->text.useDirectoryText = 0;
    work->textVisible = 1;
}
}
