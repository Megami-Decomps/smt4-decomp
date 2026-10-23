/* NON_MATCHING: second-line clear base register and parser counter initialization scheduling differ. */
#include "ui/ButtonHelp.h"
#include <string.h>

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
void *rt_memcpy(void *destination, const void *source, u32 bytes);

/* Split help text into two lines and reset its display state. */
void FUN_0029ee6c(const char *text, u32 style)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    work->text.style = style;
    work->unk550 = 0;
    work->unk554 = 255;
    if (text == NULL) {
        work->unk4CB = 0;
    } else {
        memset(work->text.lines[0], 0, sizeof(work->text.lines[0]));
        memset(work->text.lines[1], 0, sizeof(work->text.lines[1]));
        s32 line = 0;
        s32 start = 0;
        s32 index = 0;
        do {
            s8 character = static_cast<s8>(text[index]);
            if (character == '\0') {
                rt_memcpy(work->text.lines[line], text + start, index - start);
                break;
            }
            if (character == '\n') {
                rt_memcpy(work->text.lines[line], text + start, index - start);
                start = index + 1;
                ++line;
            }
        } while (line <= 1 && ++index < 128);
        work->unk55C = 0;
        work->unk4CB = 1;
    }
}
}
