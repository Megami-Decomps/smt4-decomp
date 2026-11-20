#include "shard/RomFileOpenState.h"
#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" void asdFatalError();
extern "C" void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Records `result` as the file operation's result and returns it. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    processResultSetValue(result);
    return result;
}

/* Creates the file `path` (opened for writing and creation) and sets its length to `size`, closing
 * it again when that fails; records and returns the result. */
extern "C" nn::Result romFileCreateSized(RomFileOpenState *state, const char *path, u32 size)
{
    char resolvedPath[500];
    nn::Result result;

    if (!pathBuildWide(path, (s16 *)resolvedPath, 0)) {
        result = FILE_RESULT_PATH_TOO_LONG;
        processResultSetValue(result);
        return result;
    }
    result = romOpenFileOpen(&state->file, resolvedPath, ROM_FILE_OPEN_WRITE | ROM_FILE_OPEN_CREATE);
    if ((s32)(result & 0x80000000) < 0) { /* failed */
        processResultSetValue(result);
        return result;
    }
    const PositionedResizeVtable *vtable = (PositionedResizeVtable *)state->interface.vtable;
    result = vtable->resize((PositionedStream *)state, (u64)size);
    processResultSetValue(result);
    if ((s32)(result & 0x80000000) < 0) { /* failed */
        if ((state->file.handle & ~1u) != 0) {
            if (state->file.handle & 1)
                asdFatalError();
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(state->file.handle & ~1u);
            state->file.handle = 0;
        }
        return result;
    }
    return fileRecordResult(0);
}
