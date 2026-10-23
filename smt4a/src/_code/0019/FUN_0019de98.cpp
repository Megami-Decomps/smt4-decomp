/* NON_MATCHING: line-buffer clear bases and parser scratch registers differ; 78 versus retail 79 instructions. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
void *rt_memcpy(void *destination, const void *source, u32 size);

// Set the button-help text color and split at most two newline-delimited display lines.
void FUN_0019de98(const s8 *text, u32 color)
{
    // The shared byte-aligned padding starts one byte before this aligned color word.
    struct TextColorView {
        u8 unk000[0x5ec];
        u32 color;
    };
    typedef char TextColorOffsetCheck[__INTADDR__(&((TextColorView *)0)->color) == 0x5ec ? 1 : -1];
    ButtonHelpWorkA *work = g_buttonHelp.work;
    reinterpret_cast<TextColorView *>(work)->color = color;
    work->unk670 = 0;
    work->unk674 = 0xff;
    if (!text) {
        work->mode = 0;
        return;
    }
    for (s32 line = 0; line < 2; ++line) {
        u32 *words = reinterpret_cast<u32 *>(work->entries[line].data);
        for (s32 word = 0; word < 16; ++word)
            words[word] = 0;
    }
    s32 line = 0;
    s32 start = 0;
    s32 offset = 0;
    do {
        if (text[offset] == '\0') {
            rt_memcpy(work->entries[line].data, text + start, offset - start);
            break;
        }
        if (text[offset] == '\n') {
            rt_memcpy(work->entries[line].data, text + start, offset - start);
            start = offset + 1;
            ++line;
        }
    } while (line <= 1 && ++offset < 128);
    work->helpState = 0;
    work->mode = 1;
}
}
