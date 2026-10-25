#include "common.h"
#include "shard/FUN_002319c0.h"

extern "C" {

int uiPointerHitsRect(int a, int b, int width, int height, int c);

s32 FUN_002319c0(void)
{
    uiPointerHitsRect(0, 0, 0x140, 0xf0, 0);
}

} /* extern "C" */
