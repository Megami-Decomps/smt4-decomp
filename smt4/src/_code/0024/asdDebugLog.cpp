#include "shard/W6_W6Match2_DebugLog.h"
#include <stdarg.h>

extern "C" s32 FUN_00100b64(char* destination, const char* format, va_list arguments);

// Format a message for the optional engine debug output hook.
extern "C" void asdDebugLog(const char* file, s32 line, s32 category, const char* format, ...)
{
    char message[512];
    va_list arguments;
    va_start(arguments, format);
    FUN_00100b64(message, format, arguments);
    asdDebugLogFormatted(file, line, category, message);
    va_end(arguments);
}
