#include "text/TextDraw.h"
#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include <string.h>

/* Draws the prefix, highlighted range and suffix of a fixed-width help line. */
extern "C" void buttonHelpDrawHighlightedLine(const char *text, s32 x, s32 y)
{
    ButtonHelpWorkA *work = g_buttonHelp.work;
    s32 prefixWidth = 0;
    char segment[64];
    enum { HELP_LINE_LAYER = 2 };
    if (work->text.highlightStart != 0) {
        memcpy(segment, text, work->text.highlightStart);
        segment[work->text.highlightStart] = '\0';
        textDrawString((f32)x, (f32)y, 0.93f, HELP_LINE_LAYER, 0.0f, work->text.style, 1.0f, segment);
        prefixWidth = fontMeasureLineAdvance(segment, HELP_LINE_LAYER);
    }
    memcpy(segment, text + work->text.highlightStart, work->text.highlightLength);
    segment[work->text.highlightLength] = '\0';
    textDrawString((f32)(x + prefixWidth), (f32)y, 0.93f,
                   HELP_LINE_LAYER, 0.0f, work->text.highlightStyle, 1.0f, segment);
    s32 highlightedWidth = fontMeasureLineAdvance(segment, HELP_LINE_LAYER);
    memcpy(segment, text + work->text.highlightStart + work->text.highlightLength,
           sizeof(segment) - work->text.highlightStart - work->text.highlightLength);
    textDrawString((f32)(x + highlightedWidth), (f32)y, 0.93f,
                   HELP_LINE_LAYER, 0.0f, work->text.style, 1.0f, segment);
}
