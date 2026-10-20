#include "common.h"

extern "C" {

extern s32 appletIsExitRequested(void);
extern s32 FUN_0015a410(void);
extern void sysFatalBreak(void);
extern s32 FUN_0015a5fc(u32 a, u32 b, u32 c);

/* Breaks into the fatal handler when the applet is not exiting and FUN_0015a410 fails,
 * then runs the applet request (FUN_0015a5fc). */
s32 FUN_0015a5c0(u32 a, u32 b, u32 c)
{
    if (appletIsExitRequested() == 0 && FUN_0015a410() == 0) {
        sysFatalBreak();
    }
    return FUN_0015a5fc(a, b, c);
}

} /* extern "C" */
