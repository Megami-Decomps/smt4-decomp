/* NON_MATCHING: variadic argument-pointer lifetime and terminator-byte register allocation differ. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include <stdarg.h>

extern "C" {
void *asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void asdMemFree(void *);
u32 libc_strlen(const char *);
s32 FUN_00100348(char *, u32, const char *, va_list);
void FUN_0036bea0(u32, u32, u32, u32, u32, const char *);

// Format a bounded string, terminate its text stream, and submit it to the renderer.
void FUN_0023723c(u32 first, u32 second, u32 third, u32 fourth, u32 fifth,
                  const char *format, ...)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Text\\AsdText.cpp", 220);
    char *buffer = static_cast<char *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x1000, 0));
    va_list arguments;
    va_start(arguments, format);
    libc_strlen(format);
    FUN_00100348(buffer, 0x1000, format, arguments);
    va_end(arguments);
    buffer[0xfff] = 0;
    u32 length = libc_strlen(buffer);
    if (length >= 0xffd) {
        buffer[0xffc] = -1;
        buffer[0xffd] = -1;
        buffer[0xffe] = -1;
        buffer[0xfff] = 0;
    } else {
        buffer[length] = -1;
        buffer[length + 1] = -1;
        buffer[length + 2] = -1;
        buffer[length + 3] = 0;
    }
    FUN_0036bea0(first, second, third, fourth, fifth, buffer);
    asdMemFree(buffer);
}
}
