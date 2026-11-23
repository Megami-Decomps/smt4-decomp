/* NON_MATCHING: prefix-length argument setup adds an instruction; the prologue and literal pool differ. */
#include "ui/ButtonHelpGlobal.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

#include "AsdSDK/AsdMemCopy.h"

// Draw a fixed-width help line as normal, highlighted and normal text segments.
extern "C" void FUN_002acfc8(const char *text, s32 x, s32 y)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 prefixWidth = 0;
    char segment[64];
    if (work->text.highlightStart != 0) {
        u32 length = work->text.highlightStart;
        __aeabi_memcpy(segment, text, length);
        segment[length] = '\0';
        textDrawString((f32)x, (f32)y, 0.93f, 2, 0.0f, work->text.style, 1.0f, segment);
        prefixWidth = fontMeasureLineAdvance(segment, 2);
    }
    u32 length = work->text.highlightLength;
    __aeabi_memcpy(segment, text + work->text.highlightStart, length);
    segment[length] = '\0';
    textDrawString((f32)(x + prefixWidth), (f32)y, 0.93f, 2, 0.0f, work->text.highlightStyle, 1.0f, segment);
    s32 highlightWidth = fontMeasureLineAdvance(segment, 2);
    __aeabi_memcpy(segment, text + work->text.highlightStart + work->text.highlightLength, 64 - work->text.highlightStart - work->text.highlightLength);
    textDrawString((f32)(x + highlightWidth), (f32)y, 0.93f, 2, 0.0f, work->text.style, 1.0f, segment);
}
