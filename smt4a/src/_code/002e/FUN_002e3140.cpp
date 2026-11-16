#include "sys/ResultReport.h"

extern "C" {
extern s8 DAT_005894cc;
void FUN_001a1204(u32 result, u32 flag, u32 callerAddress);
void sysFatalBreak(void);

/* The result's signed 5-bit level (bits 27-31), sign-extended. */
static __inline s32 resultLevel(u32 result)
{
    s32 level = result >> 27;
    if (result & 0x80000000)
        level -= 32;
    return level;
}

/* Reports a failed result: on a development unit (or with the debug flag set) results at levels -7 and 1 are
 * ignored and any other is reported with the caller's address; otherwise only level -1 is reported before the
 * fatal error handler runs. */
void FUN_002e3140(u32 result, ...)
{
    s32 level = resultLevel(result);
    /* Bit 0 of the shared configuration page's unit-info byte marks a development unit. */
    u8 developmentUnit = *(const u8 *)0x1FF80014 & 1;

    if ((developmentUnit | DAT_005894cc) == 0) {
        if (level == -1) {
            FUN_001a1204(result, 0, (u32)__return_address());
        }
        sysFatalBreak();
        return;
    }
    if (level != -7 && level != 1) {
        FUN_001a1204(result, 0, (u32)__return_address());
    }
}
}
