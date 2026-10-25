/* NON_MATCHING: inlined conversion loops use fewer saved registers, and native result-assert macro lowering differs. */
#include "nw/snd/SoundArchiveDisk.h"
#include "nn/Result.h"

extern "C" {
void refIsNullOrZero(MoviePathConversionState *conversion);
u32 FUN_00100836(const char *text, u32 encoding, MoviePathConversionState *conversion);
s32 FUN_002e3c44(u16 *output, const char *text, u32 bytes, MoviePathConversionState *conversion);
s32 FUN_001883b0(MovieOpenFile *file, const u16 *path, u32 mode);
void FUN_0016e800(u32 result, const void *location);
}

static inline void reportNativeFileFailure(nn::Result result, const void *location)
{
    if (nnResultIsFailure(result))
        FUN_0016e800(result, location);
}

static inline s32 openNativeFile(MovieOpenFile *file, const char *path)
{
    u16 widePath[264];
    u16 *output = widePath;
    MoviePathConversionState conversion = {0, 0};
    refIsNullOrZero(&conversion);
    u32 bytes;
    while ((bytes = FUN_00100836(path, 0x105, &conversion)) != 0 &&
        FUN_002e3c44(output, path, bytes, &conversion)) {
        ++output;
        path += bytes;
    }
    *output = 0;
    file->sizeLow = 0;
    file->sizeHigh = 0;
    file->positionLow = 0;
    file->positionHigh = 0;
    return FUN_001883b0(file, widePath, 1);
}

// Convert a multibyte path and open its native file, optionally retaining errors instead of asserting.
extern "C" s32 FUN_001748a0(NativeFileReader *reader, const char *path, s32 suppressErrors)
{
    reader->suppressErrors = suppressErrors;
    if (suppressErrors) {
        nn::Result result = openNativeFile(&reader->file, path);
        reader->result = result;
        return nnResultIsSuccess(result);
    }
    nn::Result result = openNativeFile(&reader->file, path);
    if (!nnResultIsSuccess(result))
        reportNativeFileFailure(result, (const void *)__current_pc());
    return 1;
}
