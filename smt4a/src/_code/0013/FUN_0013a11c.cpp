#include "common.h"

extern "C" {

void sysMemClear(void *block, s32 size);
extern u8 g_objectRegistry[];
extern u8 g_deferredEffectReleases[];

/* Clears the two 0x200-byte tables at 0x635370 and 0x635570. */
void FUN_0013a11c(void)
{
    sysMemClear(g_objectRegistry, 0x200);
    sysMemClear(g_deferredEffectReleases, 0x200);
}

} /* extern "C" */
