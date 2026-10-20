#include "common.h"

extern "C" {

int FUN_0037c280(u32 a, int b);
extern u32 nw_snd_internal_driver_SoundThread_GetInstance(void);

void FUN_0037f6b0(int obj)
{
    u32 a = nw_snd_internal_driver_SoundThread_GetInstance();

    FUN_0037c280(a, obj + 0x50);
    *(u8 *)(obj + 0xd) = 1;
}

} /* extern "C" */
