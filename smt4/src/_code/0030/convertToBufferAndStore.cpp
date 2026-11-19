#include "common.h"
#include "name/nameMain.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

int libc_mbstowcs(u16 *wide, u8 *buffer, int size);
int rt_aeabi_memclr(u8 *buffer, int size);
int FUN_0035eabc(const u16 *text);

/* Converts the multibyte `text` into the wide string `wide` and returns how many of its characters are digits. */
s32 convertToBufferAndStore(const char *text, u16 *wide)
{
    u8 buffer[260];

    rt_aeabi_memclr(buffer, 0x100);
    libc_strcpy(reinterpret_cast<unsigned int *>(buffer), (unsigned int *)text);
    libc_mbstowcs(wide, buffer, 0x100);
    return FUN_0035eabc(wide);
}

} /* extern "C" */
