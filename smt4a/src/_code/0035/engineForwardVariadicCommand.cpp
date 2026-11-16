/* NON_MATCHING: retail uses `mov r1, r0` where armcc emits `mov r2, #14`. */
#include "common.h"
#include <stdarg.h>

extern "C" {

void memcpySrcFirst(va_list args, u32 value, s32 kind);

void engineForwardVariadicCommand(u32 value, ...)
{
    va_list arguments;
    va_start(arguments, value);
    memcpySrcFirst(arguments, value, 14);
    va_end(arguments);
}

} /* extern "C" */
