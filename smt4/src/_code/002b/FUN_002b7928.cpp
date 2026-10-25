/* NON_MATCHING: the retained format pointer and the va_list pointer swap saved registers (r4/r5) and the format load is scheduled after the pool load. */
#include "font/FormattedText.h"
#include <stdarg.h>

extern "C" {
extern FormattedTextContext DAT_00464a70;
extern char DAT_004d9780[256];
s32 FUN_002b23bc(char *buffer, u32 bytes, const char *format, va_list arguments);
f32 FUN_002b2b88(u32 color, u32 font, const char *text, s32 length,
                 f32 x, f32 y, f32 z, f32 rotation, f32 width, f32 height, f32 spacing, f32 scale);
void rt_memclr(void *buffer, u32 bytes);

// Format and draw text with the current font and color at the supplied position.
f32 FUN_002b7928(f32 x, f32 y, const char *format, ...)
{
    va_list arguments;
    va_start(arguments, format);
    f32 result = 0.0f;
    const char *text = format;
    rt_memclr(DAT_004d9780, sizeof(DAT_004d9780));
    s32 length = FUN_002b23bc(DAT_004d9780, sizeof(DAT_004d9780), text, arguments);
    if (length == 0)
        return result;
    return FUN_002b2b88(DAT_00464a70.color, DAT_00464a70.font, DAT_004d9780, length,
                        x, y, 0.0f, 0.0f, 10.0f, 13.0f, 0.0f, 1.0f);
}
}
