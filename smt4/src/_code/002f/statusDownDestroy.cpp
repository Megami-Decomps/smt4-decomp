#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

int asdMemFreeSlot(u32 value);
int ifTouchRegionRemove(void);
int asdMemFree(StatusDownState *ptr);
int __aeabi_memset4(void *dst, int size, u32 value);
int jobStop(u32 job, int mode);

void statusDownDestroy(void)
{
    StatusDownState *block = g_statusDown;
    int i;

    for (i = 0; i < (int)(u32)block->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    block->touchRegionCount = 0;
    __aeabi_memset4(block->slots, 0x29, 0xffffffff);
    asdMemFreeSlot(block->memorySlot);
    jobStop(block->job, 0);
    asdMemFree(block);
    g_statusDown = NULL;
}

} /* extern "C" */
