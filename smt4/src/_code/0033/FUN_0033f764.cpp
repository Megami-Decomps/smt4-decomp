#include "common.h"

extern "C" {

int rt_memcpy(void *dst, void *src, int size);
extern u8 *gameGetFlagBlock(void);

void FUN_0033f764(void *record)
{
    u8 *base = gameGetFlagBlock();

    rt_memcpy(base + 0x100, record, 0x44);
}

} /* extern "C" */
