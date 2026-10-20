#include "common.h"

extern "C" {

int FUN_0025011c(void);

extern struct {
    u8 unk00[0x48];
    int unk48;
} DAT_0044ea80;

void FUN_002f5ee4(void)
{
    if (DAT_0044ea80.unk48 != 0) {
        FUN_0025011c();
        DAT_0044ea80.unk48 = 0;
    }
}

} /* extern "C" */
