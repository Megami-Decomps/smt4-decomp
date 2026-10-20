#include "common.h"

extern "C" {

int asdMemFreeSlot(u32 value);
int ifTouchRegionRemove(void);
int asdMemFree(u32 *ptr);
int __aeabi_memset4(u32 *dst, int size, u32 value);
int jobStop(u32 job, int mode);

extern u32 *g_statusDown;

void FUN_002f6590(void)
{
    u32 *block = g_statusDown;
    int i;

    for (i = 0; i < (int)(u32)*(u8 *)(block + 0x120); i++) {
        ifTouchRegionRemove();
    }
    *(u8 *)(block + 0x120) = 0;
    __aeabi_memset4(block + 0x10b, 0x29, 0xffffffff);
    asdMemFreeSlot(block[0x8a8]);
    jobStop(*block, 0);
    asdMemFree(block);
    g_statusDown = NULL;
}

} /* extern "C" */
