#include "common.h"

extern "C" {
extern s32 g_nnCecdHandle;
s32 svcCloseHandle(s32 handle);

s32 FUN_00358f74(void)
{
    if (g_nnCecdHandle != 0) {
        return svcCloseHandle(g_nnCecdHandle);
    }
    return 0xE0810BF8;
}
}
