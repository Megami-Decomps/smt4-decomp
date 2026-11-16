/* NON_MATCHING: scheduling only: retail stores the two zero stack arguments after the register arguments are set (zero in ip), the build stores them first. */
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

/* Script body for a plain message associated with the given unit. */
void scrCommMessageShowPlainBody(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();
    FUN_0021bdac(unit, arg, value, 7, 0, 0);
}
}
