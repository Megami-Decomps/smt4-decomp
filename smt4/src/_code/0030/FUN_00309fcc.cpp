#include "common.h"

extern "C" {

int libc_mbstowcs(u32 a, u8 *buffer, int size);
int libc_strcpy(u8 *buffer, u32 value);
int rt_aeabi_memclr(u8 *buffer, int size);
int FUN_0035eabc(u32 value);

void FUN_00309fcc(u32 a, u32 b)
{
    u8 buffer[260];

    rt_aeabi_memclr(buffer, 0x100);
    libc_strcpy(buffer, a);
    libc_mbstowcs(b, buffer, 0x100);
    FUN_0035eabc(b);
}

} /* extern "C" */
