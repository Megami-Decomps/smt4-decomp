#include "common.h"

extern "C" {
extern s8 DAT_004656ca;
s32 FUN_00239a54(void);

u32 FUN_003577ec(void)
{
    if (DAT_004656ca != 0 || FUN_00239a54() != 0) {
        return 1;
    }
    return 0;
}
}
