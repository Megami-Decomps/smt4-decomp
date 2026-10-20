#include "common.h"

extern "C" {

int FUN_002a780c(u32 value);
int FUN_002b8cc8(void);
int asdMemFree(u32 *ptr);
int FUN_002c424c(u32 *dst, int size, u32 value);
int jobStop(u32 job, int mode);

extern u32 *DAT_0044e190;

void FUN_002f6590(void)
{
    u32 *block = DAT_0044e190;
    int i;

    for (i = 0; i < (int)(u32)*(u8 *)(block + 0x120); i++) {
        FUN_002b8cc8();
    }
    *(u8 *)(block + 0x120) = 0;
    FUN_002c424c(block + 0x10b, 0x29, 0xffffffff);
    FUN_002a780c(block[0x8a8]);
    jobStop(*block, 0);
    asdMemFree(block);
    DAT_0044e190 = NULL;
}

} /* extern "C" */
