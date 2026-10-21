/* NON_MATCHING: retail uses push {r2, r3, r4, lr} where the compiled block uses push {r3, r4, r5, lr}. */
#include "common.h"
#include <stdarg.h>

struct OutputCursor {
    u8* current; // 0x00
};

extern "C" {
s32 FUN_001e2e4c(u32 character, OutputCursor* output);
s32 FUN_002e31ba(const char* format, OutputCursor* output, va_list arguments,
                 s32 (*writeCharacter)(u32, OutputCursor*));
s32 FUN_002e31e0(u32 character, OutputCursor* output);

s32 textFormatBuffer(u8* destination, const char* format, ...)
{
    va_list arguments;
    va_start(arguments, format);

    OutputCursor output;
    output.current = destination;
    s32 result = FUN_002e31ba(format, &output, arguments, FUN_001e2e4c);
    FUN_002e31e0(0, &output);

    va_end(arguments);
    return result;
}
}
