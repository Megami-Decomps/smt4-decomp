#ifndef SMT4_ASDSDK_SOURCE_SYS_FILE_ASDFILEPATH_H
#define SMT4_ASDSDK_SOURCE_SYS_FILE_ASDFILEPATH_H

#include "AsdSDK/Source/Sys/File/AsdPathMbState.h"
#include "classes/Obj420c60.h"


extern "C" {
u32 refIsNullOrZero(u32 *state);
u32 FUN_002b90c8(const char *text, u32 count, AsdPathMbState *state);
u32 FUN_002c618c(wchar_t *destination, const char *text, u32 count, AsdPathMbState *state);
}

enum {
    ASD_FILE_PATH_WIDE_LENGTH = 0x105 /* the UTF-16 path buffer, and the byte limit of each character read */
};

/* Converts an archive-qualified path to UTF-16 and opens it for the requested mode. */
static __inline s32 fileTryInitializeNarrow(Obj420c60File &file, const char *path, s32 mode)
{
    wchar_t widePath[ASD_FILE_PATH_WIDE_LENGTH];
    wchar_t *wide = widePath;
    AsdPathMbState state;
    refIsNullOrZero(&state.state);
    for (;;) {
        u32 length = FUN_002b90c8(path, ASD_FILE_PATH_WIDE_LENGTH, &state);
        if (length == 0 || FUN_002c618c(wide, path, length, &state) == 0)
            break;
        ++wide;
        path += length;
    }
    *wide = 0;
    return file.TryInitialize(widePath, mode);
}

#endif
