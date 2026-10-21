#include "common.h"
#include <stdarg.h>
extern "C" {
void FUN_00102870(void *output, u32 capacity, const void *format, va_list arguments);
void FUN_002f76ca(void *output, const void *text);
void onlineFormatWideString(void *output, const void *format, ...) {
    u16 buffer[256];
    va_list arguments;
    va_start(arguments, format);
    FUN_00102870(buffer, 256, format, arguments);
    FUN_002f76ca(output, buffer);
    va_end(arguments);
}
}
