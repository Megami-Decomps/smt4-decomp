#include "name/nameMain.h"

extern "C" {

extern void rt_aeabi_memclr(u8 *buffer, s32 size);
extern void libc_strcpy(u8 *buffer, u32 src);
extern void libc_mbstowcs(u16 *dst, u8 *buffer, u32 size);
extern int FUN_00438944(const u16 *text);

/* Converts the multibyte `text` into the wide string `wide` and returns how many of its characters are digits. */
s32 convertToBufferAndStore(const char *text, u16 *wide)
{
    u8 buffer[0x104];

    rt_aeabi_memclr(buffer, 0x100);
    libc_strcpy(buffer, reinterpret_cast<u32>(text));
    libc_mbstowcs(wide, buffer, 0x100);
    return FUN_00438944(wide);
}

} /* extern "C" */
