/* NON_MATCHING: format-pointer retention and the zero/result VFP register allocation differ. */
#include "font/FormattedText.h"
#include <stdarg.h>

extern "C" {
extern FormattedTextContext DAT_005b3bc0;
extern char DAT_00635800[256];
s32 FUN_00100348(char *buffer, u32 bytes, const char *format, va_list arguments);
f32 FUN_00181ae0(u32 color, u32 font, const char *text, s32 length,
                 f32 x, f32 y, f32 z, f32 rotation, f32 width, f32 height, f32 spacing, f32 scale);
void rt_memclr(void *buffer, u32 bytes);

// Format and draw text with the current font and color at the supplied position.
f32 FUN_001655fc(f32 x, f32 y, const char *format, ...)
{
    va_list arguments;
    va_start(arguments, format);
    f32 result = 0.0f;
    rt_memclr(DAT_00635800, sizeof(DAT_00635800));
    s32 length = FUN_00100348(DAT_00635800, sizeof(DAT_00635800), format, arguments);
    if (length != 0)
        result = FUN_00181ae0(DAT_005b3bc0.color, DAT_005b3bc0.font, DAT_00635800, length,
                              x, y, 0.0f, 0.0f, 10.0f, 13.0f, 0.0f, 1.0f);
    va_end(arguments);
    return result;
}
}
