/* Builds a 256-byte zeroed text buffer from `text`, hands it to libc_mbstowcs with the target value, then forwards that target and `arg` to asdNgcCheckWords. */
#include "common.h"

extern "C" {

void asdNgcCheckWords(s32 *target, u32 arg);
void libc_mbstowcs(s32 target, u8 *buffer, s32 size);
void libc_strcpy(u8 *buffer, u32 text);
void rt_aeabi_memclr(u8 *buffer, s32 size);

void logFormatBuffer(u32 text, s32 target, u32 arg)
{
    u8 buffer[256];

    rt_aeabi_memclr(buffer, sizeof(buffer));
    libc_strcpy(buffer, text);
    libc_mbstowcs(target, buffer, sizeof(buffer));
    asdNgcCheckWords(&target, arg);
}

} /* extern "C" */
