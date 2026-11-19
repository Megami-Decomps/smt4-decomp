/* NON_MATCHING: prefix-length argument setup adds an instruction; segment buffer/source and width saved registers differ. */
#include "ui/ButtonHelpGlobal.h"
#include <stddef.h>
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void *rt_memcpy(void *destination, const void *source, u32 size);
}

static inline u32 buttonHelpNormalTextStyle(ButtonHelpWorkA *work)
{
    // A private view of text.style: reading through it reproduces retail's register choice (the shared field gives 57 vs 37 diff lines).
    struct StyleView { u8 unk000[0x5EC]; u32 style; };
    typedef char StyleOffsetCheck[offsetof(StyleView, style) == 0x5EC ? 1 : -1];
    return ((StyleView *)work)->style;
}

// Draw a fixed-width help line as normal, highlighted and normal text segments.
extern "C" void FUN_002acfc8(const char *text, s32 x, s32 y)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 prefixWidth = 0;
    char segment[64];
    u32 length = work->text.highlightStart;
    if (length != 0) {
        rt_memcpy(segment, text, length);
        segment[length] = '\0';
        textDrawString((f32)x, (f32)y, 0.93f, 2, 0.0f, buttonHelpNormalTextStyle(work), 1.0f, segment);
        prefixWidth = fontMeasureLineAdvance(segment, 2);
    }
    length = work->text.highlightLength;
    rt_memcpy(segment, text + work->text.highlightStart, length);
    segment[length] = '\0';
    textDrawString((f32)(x + prefixWidth), (f32)y, 0.93f, 2, 0.0f, work->text.highlightStyle, 1.0f, segment);
    s32 highlightWidth = fontMeasureLineAdvance(segment, 2);
    rt_memcpy(segment, text + work->text.highlightStart + work->text.highlightLength, 64 - work->text.highlightStart - work->text.highlightLength);
    textDrawString((f32)(x + highlightWidth), (f32)y, 0.93f, 2, 0.0f, buttonHelpNormalTextStyle(work), 1.0f, segment);
}
