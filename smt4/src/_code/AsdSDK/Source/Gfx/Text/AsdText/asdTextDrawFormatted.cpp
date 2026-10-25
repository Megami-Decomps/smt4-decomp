#include "AsdSDK/AsdDebug.h"
#include <stdarg.h>
#include "AsdSDK/asdTextDrawFormatted.h"

extern "C" {

void *asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void asdMemFree(void *ptr);
u32 libc_strlen(const void *text);
s32 FUN_002b23bc(s8 *buffer, u32 size, const char *format, va_list args);
void FUN_002869e8(u32 a0, u32 a1, u32 a2, u32 a3, s32 a4, s8 *text);

/* Formats a message into a temporary 4 KiB buffer, terminates it with the 0xFF 0xFF 0xFF end code, and draws it. */
void asdTextDrawFormatted(u32 a0, u32 a1, u32 a2, u32 a3, s32 a4, const char *format, ...)
{
    va_list args;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Text\\AsdText.cpp", 213);
    s8 *text = (s8 *)asdMemAlloc(0x100, 0x100, 0, 0x1000, 0);
    libc_strlen(format);
    va_start(args, format);
    FUN_002b23bc(text, 0x1000, format, args);
    va_end(args);
    text[0xfff] = 0;
    u32 length = libc_strlen(text);
    if (length >= 0xffd) {
        text[0xffc] = -1;
        text[0xffd] = -1;
        text[0xffe] = -1;
        text[0xfff] = 0;
    } else {
        text[length] = -1;
        text[length + 1] = -1;
        text[length + 2] = -1;
        text[length + 3] = 0;
    }
    FUN_002869e8(a0, a1, a2, a3, a4, text);
    asdMemFree(text);
}

} /* extern "C" */
