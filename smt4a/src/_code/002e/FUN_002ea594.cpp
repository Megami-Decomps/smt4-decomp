/* Reads a status word through the pointer, reporting a failure for negative values; returns 0 when the low 10 bits equal 0x3fe, else 1. */
#include "common.h"
#include "sys/ResultReport.h"

extern "C" {

s32 svcWaitSynchronization1(u32 value);

s32 FUN_002ea594(const u32 *source)
{
    s32 status = svcWaitSynchronization1(*source);

    if (status < 0) {
        FUN_002e3140(status);
    }
    if ((status & 0x3ff) != 0x3fe) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
