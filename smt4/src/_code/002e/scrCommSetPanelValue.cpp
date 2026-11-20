#include "common.h"

extern "C" {

int messageBannerSetCountdown(u32 value, int flag);
extern u32 DAT_00434228;
extern int FUN_002485b8(void);
extern u32 scrGetArg(u32 index);

u32 scrCommSetPanelValue(void)
{
    DAT_00434228 = scrGetArg(0);
    if (FUN_002485b8() != 0) {
        messageBannerSetCountdown(DAT_00434228, 0);
    }
    return 1;
}

} /* extern "C" */
