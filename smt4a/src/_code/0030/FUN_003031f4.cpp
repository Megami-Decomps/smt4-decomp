/* NON_MATCHING: compiler uses a larger variadic register-save area and return sequence. */
#include "common.h"
#include <stdarg.h>
extern "C" {
extern const char DAT_00538920[];
void FUN_002e9498(va_list arguments, void *context, const char *format, u32 mode);
/* Formats the variable arguments using the module's default format. */
void FUN_003031f4(void *context, ...) {
    va_list arguments;
    va_start(arguments, context);
    FUN_002e9498(arguments, context, DAT_00538920, 1);
    va_end(arguments);
}
}
