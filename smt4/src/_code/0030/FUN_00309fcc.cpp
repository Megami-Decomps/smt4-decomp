#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/FUN_00309fcc.h"

extern "C" {

int libc_mbstowcs(u32 a, u8 *buffer, int size);
int rt_aeabi_memclr(u8 *buffer, int size);
int FUN_0035eabc(u32 value);

void FUN_00309fcc(u32 a, u32 b)
{
    u8 buffer[260];

    rt_aeabi_memclr(buffer, 0x100);
    libc_strcpy(reinterpret_cast<unsigned int *>(buffer), reinterpret_cast<unsigned int *>(a));
    libc_mbstowcs(b, buffer, 0x100);
    FUN_0035eabc(b);
}

} /* extern "C" */
