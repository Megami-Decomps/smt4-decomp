#ifndef SMT4A_ASDSDK_SOURCE_SYS_FILE_ASDFILEPATH_H
#define SMT4A_ASDSDK_SOURCE_SYS_FILE_ASDFILEPATH_H

#include "AsdSDK/Source/Sys/File/AsdPathMbState.h"
#include "classes/Obj55813c.h"


extern "C" {
u32 refIsNullOrZero(u32 *state);
u32 FUN_00100836(const char *text, u32 count, AsdPathMbState *state);
s32 FUN_002e3c44(u16 *destination, const char *text, u32 count, AsdPathMbState *state);
s32 movieOpenFileOpenPath(Obj55813cFile *file, const char *path, u32 mode);
} /* extern "C" */

enum {
    ASD_FILE_PATH_WIDE_LENGTH = 0x105 /* the UTF-16 path buffer, and the byte limit of each character read */
};

/* Converts an archive-qualified path to UTF-16 and opens it for the requested mode (smt4's
 * fileTryInitializeNarrow, AsdSDK/Source/Sys/File/AsdFilePath.h, over this game's stream class). */
static __inline s32 fileTryInitializeNarrow(Obj55813cFile &file, const char *path, s32 mode)
{
    wchar_t widePath[ASD_FILE_PATH_WIDE_LENGTH];
    wchar_t *wide = widePath;
    AsdPathMbState state;
    refIsNullOrZero(&state.state);
    for (;;) {
        u32 length = FUN_00100836(path, ASD_FILE_PATH_WIDE_LENGTH, &state);
        if (length == 0 || FUN_002e3c44((u16 *)wide, path, length, &state) == 0)
            break;
        ++wide;
        path += length;
    }
    *wide = 0;
    return file.TryInitialize(widePath, mode);
}

#endif
