#include "common.h"

extern "C" {
extern const char *DAT_004651e8[4];
extern const char DAT_00409ca4[];
u32 libc_strlen(const char *text);
void rt_aeabi_memclr(void *memory, u32 size);
void textFormatBuffer(char *output, const char *format, ...);

// Prefix a path with its selected archive root and widen its bounded byte representation.
u32 FUN_00254884(const char *input, s16 *output, s32 root)
{
    if (root != 3) {
        s32 length = libc_strlen(input);
        if (length >= 248)
            return 0;
        s32 componentLength = 0;
        for (s32 index = 0; index < length; ++index) {
            if (input[index] == '/')
                componentLength = 0;
            else if (++componentLength > 16)
                return 0;
        }
    }
    s8 path[280];
    rt_aeabi_memclr(output, 496);
    rt_aeabi_memclr(path, sizeof(path));
    switch (root) {
    case 0: textFormatBuffer(reinterpret_cast<char *>(path), DAT_00409ca4, DAT_004651e8[0], input); break;
    case 1: textFormatBuffer(reinterpret_cast<char *>(path), DAT_00409ca4, DAT_004651e8[1], input); break;
    case 2: textFormatBuffer(reinterpret_cast<char *>(path), DAT_00409ca4, DAT_004651e8[2], input); break;
    case 3: textFormatBuffer(reinterpret_cast<char *>(path), DAT_00409ca4, DAT_004651e8[3], input); break;
    }
    s32 length = libc_strlen(reinterpret_cast<const char *>(path));
    if (length > 248)
        return 0;
    for (s32 index = 0; index < length; ++index)
        output[index] = path[index];
    return 1;
}
}
