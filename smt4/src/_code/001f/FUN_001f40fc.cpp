/* NON_MATCHING: highlighted help segment register allocation and byte-count reloads differ. */
#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
void *rt_memcpy(void *destination, const void *source, u32 bytes);
s32 fontMeasureLineAdvance(const char *text, u32 style);
void FUN_002be5a4(u32 style, u32 color, const char *text,
                  f32 x, f32 y, f32 scale, f32 depth, f32 opacity);

/* Draw the prefix, highlighted range and suffix of a fixed-width help line. */
void FUN_001f40fc(const char *text, s32 x, s32 y)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    char segment[64];
    s32 prefixWidth = 0;
    u32 length = work->unk555;
    if (length != 0) {
        rt_memcpy(segment, text, length);
        segment[length] = '\0';
        FUN_002be5a4(3, work->text.style, segment,
            static_cast<f32>(x), static_cast<f32>(y), 0.93f, 0.0f, 1.0f);
        prefixWidth = fontMeasureLineAdvance(segment, 3);
    }
    length = work->unk556;
    rt_memcpy(segment, text + work->unk555, length);
    segment[length] = '\0';
    FUN_002be5a4(3, work->unk550, segment,
        static_cast<f32>(x + prefixWidth), static_cast<f32>(y), 0.93f, 0.0f, 1.0f);
    s32 highlightedWidth = fontMeasureLineAdvance(segment, 3);
    rt_memcpy(segment, text + work->unk555 + work->unk556, 64 - work->unk555 - work->unk556);
    FUN_002be5a4(3, work->text.style, segment,
        static_cast<f32>(x + highlightedWidth), static_cast<f32>(y), 0.93f, 0.0f, 1.0f);
}
}
