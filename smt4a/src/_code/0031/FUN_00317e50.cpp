/* NON_MATCHING: path-operation return paths share cleanup instead of retaining retail's duplicated epilogues. */
#include "sys/ProcessResult.h"
#include "common.h"

extern "C" {
bool FUN_002e0e04(const char *path, u16 *resolved, u32 mode);
u32 libc_strlen(const char *text);
void FUN_001886bc();
s32 FUN_00188444(const u16 *path);
s32 FUN_0042b32c(const u16 *path);

s32 FUN_00317e50(const char *path)
{
    u16 resolved[248];
    s32 result;
    if (FUN_002e0e04(path, resolved, 1)) {
        u32 length = libc_strlen(path);
        if (length && path[length - 1] == '/') {
            FUN_001886bc();
            result = FUN_0042b32c(resolved);
        } else {
            FUN_001886bc();
            result = FUN_00188444(resolved);
        }
    } else {
        result = 0xe0e046bc;
    }
    FUN_0013ebd8(result);
    return result;
}
}
