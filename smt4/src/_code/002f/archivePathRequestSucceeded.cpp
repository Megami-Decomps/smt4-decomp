#include "common.h"
#include "sys/FilePaths.h"
#include "shard/Sys4651e8.h"
#include "shard/W6_W6Match3_EmitterRecord.h"

extern "C" {

nn::Result fileSendPathRequestRoot0(const char *path);
nn::Result archivePathRequestRoot1(const char *path);

/* Runs the path request for `path` under archive root `root` (0-2) and returns whether it
 * succeeded; a NULL path fails with the file system's not-found result, recorded as the last
 * result. */
u8 archivePathRequestSucceeded(s32 root, s32 path)
{
    u32 result = 0xE7E3FFFF; /* nn::Result's invalid default */

    if (path == 0) {
        g_processResultState.lastResult = 0xC8804464; /* file system (module 17), not found (description 100) */
        return 0;
    }
    if (root == 0) {
        result = fileSendPathRequestRoot0((const char *)path);
    } else if (root == 1) {
        result = archivePathRequestRoot1((const char *)path);
    } else if (root == 2) {
        result = archivePathRequestRoot2((const char *)path);
    }
    if (!nnResultIsSuccess(result))
        return 0;
    return 1;
}

} /* extern "C" */
