#include "shard/Shard0039.h"
#include "shard/convertToBufferAndStore.h"

extern "C" {

extern void rt_aeabi_memclr(u8 *buffer, s32 size);
extern void libc_strcpy(u8 *buffer, u32 src);
extern void libc_mbstowcs(u16 *dst, u8 *buffer, u32 size);
extern void FUN_00438944(u16 *dst);

void convertToBufferAndStore(u32 src, u16 *dst)
{
    u8 buffer[0x104];

    rt_aeabi_memclr(buffer, 0x100);
    libc_strcpy(buffer, src);
    libc_mbstowcs(dst, buffer, 0x100);
    FUN_00438944(dst);
}

} /* extern "C" */
