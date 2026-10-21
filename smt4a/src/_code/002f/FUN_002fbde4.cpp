/* NON_MATCHING: callback literal 0x00100d79 has no function symbol; Thumb callback boundary recovery is required. */
#include "common.h"
#include <stdarg.h>
extern "C" {
extern const u8 LAB_00100d79;
struct Bounds { char *current; char *end; };
s32 FUN_002e31ba(const char *format, Bounds *bounds, va_list arguments, const void *callback);
void FUN_002e31e0(s32 value, Bounds *bounds);
s32 FUN_002fbde4(char *output, u32 capacity, const char *format, ...) {
    Bounds bounds;
    bounds.current = output;
    bounds.end = output + (capacity ? capacity - 1 : 0);
    va_list arguments;
    va_start(arguments, format);
    s32 result = FUN_002e31ba(format, &bounds, arguments, &LAB_00100d79);
    if (capacity) FUN_002e31e0(0, &bounds);
    va_end(arguments);
    return result;
}
}
