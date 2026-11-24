/* NON_MATCHING: 50 lines: retail materialises archivePathDeviceCreateFile's zero high size word in a saved register
 * before fileSystemRequireReady (one more saved register, a 496-byte frame), clears the stream with a fresh zero in
 * r0 and passes the handle address through r3. A single-use `const u64 fileSize = size;` widened before
 * fileSystemRequireReady gives 21 lines (wave 91 review: steering, not kept). */
#include "shard/RomFileOpenState.h"
#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "nn/fs/ArchiveCreateFile.h"
#include "nn/Result.h"

extern "C" {
u32 fileSystemRequireReady(void);

/* Records `result` as the process result and hands it back. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    processResultSetValue(result);
    return result;
}

/* Creates a file in archive root 2 and opens it for writing. */
nn::Result FUN_00359608(RomFileOpenState *owner, u32 path, u32 size)
{
    s16 buffer[248];
    nn::Result result;
    if (!pathBuildWide((const char *)path, buffer, 2)) {
        result = FILE_RESULT_PATH_TOO_LONG;
        processResultSetValue(result);
        return result;
    }
    fileSystemRequireReady();
    result = archivePathDeviceCreateFile((const u16 *)buffer, size);
    if ((s32)(result & 0x80000000) < 0) {
        processResultSetValue(result);
        return result;
    }
    s32 openCode = romOpenFileOpen(&owner->file, buffer, ROM_FILE_OPEN_WRITE);
    if ((s32)(openCode & 0x80000000) < 0) {
        processResultSetValue(openCode);
        return openCode;
    }
    return fileRecordResult(0);
}
} /* extern "C" */
