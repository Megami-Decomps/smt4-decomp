/* NON_MATCHING: prefix-length argument setup adds an instruction; segment buffer/source and width saved registers differ. */
#include "ui/ButtonHelp.h"
#include <stddef.h>
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;
void *rt_memcpy(void *destination, const void *source, u32 size);
}

static inline u32 buttonHelpNormalTextStyle(ButtonHelpWorkA *work)
{
    // The word is inside the byte-aligned +0x5EB padding; inserting a union would shift the layout.
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
    u32 length = work->unk675;
    if (length != 0) {
        rt_memcpy(segment, text, length);
        segment[length] = '\0';
        textDrawString(2, buttonHelpNormalTextStyle(work), segment, (f32)x, (f32)y, 0.93f, 0.0f, 1.0f);
        prefixWidth = fontMeasureLineAdvance(segment, 2);
    }
    length = work->unk676;
    rt_memcpy(segment, text + work->unk675, length);
    segment[length] = '\0';
    textDrawString(2, work->unk670, segment, (f32)(x + prefixWidth), (f32)y, 0.93f, 0.0f, 1.0f);
    s32 highlightWidth = fontMeasureLineAdvance(segment, 2);
    rt_memcpy(segment, text + work->unk675 + work->unk676, 64 - work->unk675 - work->unk676);
    textDrawString(2, buttonHelpNormalTextStyle(work), segment, (f32)(x + highlightWidth), (f32)y, 0.93f, 0.0f, 1.0f);
}
