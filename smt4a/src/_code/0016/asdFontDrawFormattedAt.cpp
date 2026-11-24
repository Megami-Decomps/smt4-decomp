/* NON_MATCHING: as in the IV twin, the retained format and va_list pointers swap r4/r5, and the format load precedes the buffer address load. */
#include "font/FormattedText.h"
#include <stdarg.h>

extern "C" {
extern FormattedTextContext g_asdFontGlyphSets;
extern char DAT_00635800[256];
s32 textFormatProcessRange(char *buffer, u32 bytes, const char *format, va_list arguments);
f32 textDrawCore(u32 color, u32 font, const char *text, s32 length,
                 f32 x, f32 y, f32 z, f32 rotation, f32 width, f32 height, f32 spacing, f32 scale);
void rt_memclr(void *buffer, u32 bytes);

/* Formats and draws text with the current font and color at the supplied position. */
f32 asdFontDrawFormattedAt(f32 x, f32 y, const char *format, ...)
{
    va_list arguments;
    va_start(arguments, format);
    f32 result = 0.0f;
    const char *text = format;
    rt_memclr(DAT_00635800, sizeof(DAT_00635800));
    s32 length = textFormatProcessRange(DAT_00635800, sizeof(DAT_00635800), text, arguments);
    va_end(arguments);
    if (length == 0)
        return result;
    return textDrawCore(g_asdFontGlyphSets.color, g_asdFontGlyphSets.font, DAT_00635800, length,
                        x, y, 0.0f, 0.0f, 10.0f, 13.0f, 0.0f, 1.0f);
}
}
