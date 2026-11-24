/* NON_MATCHING: 92 lines: retail sets the open mode 1 in each branch's own register (sl, r8) where armcc here hoists
 * it to the entry, so every loop register is renumbered. */
#include "nw/snd/SoundArchiveDisk.h"
#include "nn/fs/ArchivePath.h"
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"
#include "nn/Result.h"

extern "C" {
void sysReportCheckFailure(u32 result, const void *location);
}

static inline void reportNativeFileFailure(nn::Result result, const void *location)
{
    if (nnResultIsFailure(result))
        sysReportCheckFailure(result, location);
}

static inline s32 openNativeFile(MovieOpenFile *file, const char *path, u32 mode)
{
    u16 widePath[264];
    u16 *output = widePath;
    AsdPathMbState conversion;
    refIsNullOrZero(&conversion.state);
    u32 bytes;
    while ((bytes = FUN_00100836(path, 0x105, &conversion)) != 0 &&
        FUN_002e3c44(output, path, bytes, &conversion) != 0) {
        ++output;
        path += bytes;
    }
    *output = 0;
    file->sizeLow = 0;
    file->sizeHigh = 0;
    file->positionLow = 0;
    file->positionHigh = 0;
    return archivePathDeviceOpen(&file->handle, widePath, mode);
}

// Convert a multibyte path and open its native file, optionally retaining errors instead of asserting.
extern "C" s32 FUN_001748a0(NativeFileReader *reader, const char *path, s32 suppressErrors)
{
    reader->suppressErrors = suppressErrors;
    if (suppressErrors) {
        nn::Result result = openNativeFile(&reader->file, path, 1);
        reader->result = result;
        return nnResultIsSuccess(result);
    }
    nn::Result result = openNativeFile(&reader->file, path, 1);
    if (!nnResultIsSuccess(result))
        reportNativeFileFailure(result, (const void *)__current_pc());
    return 1;
}
