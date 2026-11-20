#include "common.h"
#include "runtime/Stdio.h"
#include "sys/FilePaths.h"

extern "C" {
extern const char *g_processResultState[4];
extern const char g_pathFormatString[];
u32 libc_strlen(const char *text);
void rt_aeabi_memclr(void *memory, u32 size);

// Prefix a path with its selected archive root and widen its bounded byte representation.
u32 pathBuildWide(const char *input, s16 *output, s32 root)
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
    case 0: __2sprintf(reinterpret_cast<char *>(path), g_pathFormatString, g_processResultState[0], input); break;
    case 1: __2sprintf(reinterpret_cast<char *>(path), g_pathFormatString, g_processResultState[1], input); break;
    case 2: __2sprintf(reinterpret_cast<char *>(path), g_pathFormatString, g_processResultState[2], input); break;
    case 3: __2sprintf(reinterpret_cast<char *>(path), g_pathFormatString, g_processResultState[3], input); break;
    }
    u32 length = libc_strlen(reinterpret_cast<const char *>(path));
    if ((s32)length > 248)
        return 0;
    for (s32 index = 0; index < (s32)length; ++index)
        output[index] = path[index];
    return 1;
}
}
