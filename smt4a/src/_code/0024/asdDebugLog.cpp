#include "shard/W6_W6Match2_DebugLog.h"
#include <stdarg.h>

extern "C" s32 FUN_0010284c(char* destination, const char* format, va_list arguments);

// Format a message for the optional engine debug output hook.
extern "C" void asdDebugLog(const char* file, s32 line, s32 category, const char* format, ...)
{
    char message[512];
    va_list arguments;
    va_start(arguments, format);
    FUN_0010284c(message, format, arguments);
    asdDebugLogFormatted(file, line, category, message);
    va_end(arguments);
}
