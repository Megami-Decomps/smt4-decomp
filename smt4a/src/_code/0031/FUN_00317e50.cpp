#include "sys/ProcessResult.h"
#include "common.h"
#include "nn/Result.h"
#include "sys/FilePaths.h"

extern "C" {
u32 libc_strlen(const char *text);
void FUN_001886bc();
s32 FUN_00188444(const u16 *path);
s32 FUN_0042b32c(const u16 *path);
}

/* Converts the path to a wide archive path and runs the file request on it (the directory request when the path ends in '/'); records and returns the result. */
extern "C" nn::Result FUN_00317e50(const char *path)
{
    u16 resolved[248];
    nn::Result result;

    if (!pathBuildWide(path, reinterpret_cast<s16 *>(resolved), 1)) {
        result = 0xe0e046bc;
        FUN_0013ebd8(result);
        return result;
    }
    u32 length = libc_strlen(path);
    if (length && path[length - 1] == '/') {
        FUN_001886bc();
        result = FUN_0042b32c(resolved);
    } else {
        FUN_001886bc();
        result = FUN_00188444(resolved);
    }
    FUN_0013ebd8(result);
    return result;
}
