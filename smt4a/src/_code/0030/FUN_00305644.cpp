/* NON_MATCHING: compiler uses a larger variadic register-save area and return sequence. */
#include "common.h"
#include <stdarg.h>
extern "C" {
extern const char DAT_00539e8a[];
void FUN_002e9498(va_list arguments, void *context, const char *format, u32 mode);
/* Formats the variable arguments, using the leading value as its mode. */
void FUN_00305644(void *context, ...) {
    va_list arguments;
    va_start(arguments, context);
    va_list current = arguments;
    u32 mode = va_arg(current, u32);
    FUN_002e9498(arguments, context, DAT_00539e8a, mode);
    va_end(arguments);
}
}
