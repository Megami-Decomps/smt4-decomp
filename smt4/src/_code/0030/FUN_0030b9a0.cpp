#include "common.h"

extern "C" {

int FUN_00295c08(u32 value);
extern u32 DAT_00434228;
extern int FUN_0029c3ec(void);

int FUN_0030b9a0(void)
{
    int result = FUN_0029c3ec();

    if (result == 1) {
        FUN_00295c08(DAT_00434228);
        DAT_00434228 = 0;
    }
    return result;
}

} /* extern "C" */
