#include "common.h"

extern "C" {

struct CleanupOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
};
extern CleanupOwner g_engineCleanupOwner;
void FUN_0041748c(u32 handle);

void engineReleaseCleanupHandle(void)
{
    FUN_0041748c(g_engineCleanupOwner.handle);
}

} /* extern "C" */
