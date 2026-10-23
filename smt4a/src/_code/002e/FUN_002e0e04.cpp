/* NON_MATCHING: final widening-loop length and byte temporaries use different registers. */
#include "common.h"

extern "C" {
extern const char *DAT_005b40b4[4];
extern const char DAT_0053d8d8[];
u32 wstrlen(const char *text);
void rt_aeabi_memclr(void *memory, u32 size);
void textFormatBuffer(char *output, const char *format, ...);

// Prefix a path with its selected archive root and widen its bounded byte representation.
u32 FUN_002e0e04(const char *input, u16 *output, s32 root)
{
    if (root != 3) {
        s32 length = wstrlen(input);
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
    case 0: textFormatBuffer(reinterpret_cast<char *>(path), DAT_0053d8d8, DAT_005b40b4[0], input); break;
    case 1: textFormatBuffer(reinterpret_cast<char *>(path), DAT_0053d8d8, DAT_005b40b4[1], input); break;
    case 2: textFormatBuffer(reinterpret_cast<char *>(path), DAT_0053d8d8, DAT_005b40b4[2], input); break;
    case 3: textFormatBuffer(reinterpret_cast<char *>(path), DAT_0053d8d8, DAT_005b40b4[3], input); break;
    }
    u32 length = wstrlen(reinterpret_cast<const char *>(path));
    if ((s32)length > 248)
        return 0;
    for (s32 index = 0; index < (s32)length; ++index)
        output[index] = path[index];
    return 1;
}
}
