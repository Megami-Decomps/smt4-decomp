/* NON_MATCHING: prefix-length argument setup adds an instruction; the prologue and literal pool differ. */
#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdMemCopy.h"
#include "text/TextDraw.h"
#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
/* Draw the prefix, highlighted range and suffix of a fixed-width help line. */
void FUN_001f40fc(const char *text, s32 x, s32 y)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    char segment[64];
    s32 prefixWidth = 0;
    if (work->text.highlightStart != 0) {
        u32 length = work->text.highlightStart;
        rt_memcpy(segment, text, length);
        segment[length] = '\0';
        textDrawString(static_cast<f32>(x), static_cast<f32>(y), 0.93f,
            3, 0.0f, work->text.style, 1.0f, segment);
        prefixWidth = fontMeasureLineAdvance(segment, 3);
    }
    u32 length = work->text.highlightLength;
    rt_memcpy(segment, text + work->text.highlightStart, length);
    segment[length] = '\0';
    textDrawString(static_cast<f32>(x + prefixWidth), static_cast<f32>(y), 0.93f,
        3, 0.0f, work->text.highlightStyle, 1.0f, segment);
    s32 highlightedWidth = fontMeasureLineAdvance(segment, 3);
    rt_memcpy(segment, text + work->text.highlightStart + work->text.highlightLength, 64 - work->text.highlightStart - work->text.highlightLength);
    textDrawString(static_cast<f32>(x + highlightedWidth), static_cast<f32>(y), 0.93f,
        3, 0.0f, work->text.style, 1.0f, segment);
}
}
