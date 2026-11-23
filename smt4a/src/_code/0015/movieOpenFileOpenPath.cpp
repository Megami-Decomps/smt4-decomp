/* NON_MATCHING: only the final call's argument setup order differs (retail sets r1, r0, then r2 = options; built sets r2 first). */
#include "common.h"
#include "nn/fs/ArchivePath.h"
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"

extern "C" {
void refIsNullOrZero(MoviePathConversionState *conversion);
u32 FUN_00100836(const char *text, u32 encoding, MoviePathConversionState *conversion);
s32 FUN_002e3c44(u16 *output, const char *text, u32 bytes, MoviePathConversionState *conversion);

/* Converts a multibyte path to UTF-16, clears the file's position and size and opens it (the conversion and open
 * FUN_001748a0 inlines); returns the open's result. */
s32 movieOpenFileOpenPath(MovieOpenFile *file, const char *path, u32 mode)
{
    u16 text[264];
    MoviePathConversionState state = {0, 0};
    const char *cursor = path;
    u16 *output = text;

    refIsNullOrZero(&state);
    for (;;) {
        u32 byteCount = FUN_00100836(cursor, 0x105, &state);
        if (byteCount == 0) {
            break;
        }
        if (FUN_002e3c44(output, cursor, byteCount, &state) == 0) {
            break;
        }
        ++output;
        cursor += byteCount;
    }

    *output = 0;
    file->sizeLow = 0;
    file->sizeHigh = 0;
    file->positionLow = 0;
    file->positionHigh = 0;
    return archivePathDeviceOpen(&file->handle, text, mode);
}
}
