#include "common.h"

extern "C" {

u32 FUN_0030a2c0(u32 a, u32 b, u32 c, u32 d);
extern u32 DAT_0043df58;
extern u32 scrGetArgString(u32 index);
extern int scrGetCommandFrame(void);
extern u32 scrGetArg(u32 index);
extern int jobIsValid(u32 job);

u32 FUN_002220ac(void)
{
    u32 a = scrGetArgString(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);
    u32 d = scrGetArg(3);

    if (scrGetCommandFrame() != 0) {
        if (jobIsValid(DAT_0043df58) == 0) {
            return 1;
        }
    } else {
        DAT_0043df58 = FUN_0030a2c0(a, b, c, d);
    }
    return 0;
}

} /* extern "C" */
