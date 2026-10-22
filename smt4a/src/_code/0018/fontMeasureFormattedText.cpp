#include "common.h"
#include <stdarg.h>

extern "C" s32 FUN_00100348(char* buffer, u32 capacity, const char* format, va_list arguments);

// Format the variadic text and scale its reported length by the category's width.
extern "C" s32 fontMeasureFormattedText(u32 category, const char* format, ...)
{
    char buffer[32];
    va_list arguments;
    va_start(arguments, format);
    s32 length = FUN_00100348(buffer, sizeof(buffer), format, arguments);
    va_end(arguments);

    s32 width;
    switch (category) {
    case 0:
        width = 7;
        break;
    case 4:
    case 5:
        width = 13;
        break;
    case 6:
        width = 8;
        break;
    case 7:
    case 8:
        width = 10;
        break;
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 11:
        width = 4;
        break;
    default:
        width = 0;
        break;
    }

    return width * length;
}
