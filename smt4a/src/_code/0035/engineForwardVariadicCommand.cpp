/* NON_MATCHING: retail uses `mov r1, r0` where armcc emits `mov r2, #14`. */
#include "common.h"
#include <stdarg.h>

extern "C" {

void FUN_002e59f8(va_list args, u32 value, s32 kind);

void engineForwardVariadicCommand(u32 value, ...)
{
    va_list arguments;
    va_start(arguments, value);
    FUN_002e59f8(arguments, value, 14);
    va_end(arguments);
}

} /* extern "C" */
