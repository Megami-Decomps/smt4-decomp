#include "common.h"

extern "C" {

struct CleanupOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
};
extern CleanupOwner g_engineCleanupOwner;
void cleanupProcessUpdate(u32 handle);

void engineReleaseCleanupHandle(void)
{
    cleanupProcessUpdate(g_engineCleanupOwner.handle);
}

} /* extern "C" */
