#ifndef SMT4_ASDSDK_SOURCE_SYS_FILE_ASDFILEPATH_H
#define SMT4_ASDSDK_SOURCE_SYS_FILE_ASDFILEPATH_H

#include "classes/Obj420c60.h"

/* State shared by the multibyte length and conversion routines. */
struct AsdPathMbState {
    s32 state;
    u32 pending;
};

extern "C" {
u32 refIsNullOrZero(s32 *object);
u32 FUN_002b90c8(const char *text, u32 count, AsdPathMbState *state);
u32 FUN_002c618c(wchar_t *destination, const char *text, u32 count, AsdPathMbState *state);
}

/* Converts an archive-qualified path to UTF-16 and opens it for the requested mode. */
static __inline s32 fileTryInitializeNarrow(Obj420c60File &file, const char *path, s32 mode)
{
    wchar_t widePath[264];
    wchar_t *wide = widePath;
    const char *narrow = path;
    AsdPathMbState state = {0, 0};
    refIsNullOrZero(&state.state);
    u32 length;
    while ((length = FUN_002b90c8(narrow, 0x105, &state)) != 0 &&
           FUN_002c618c(wide, narrow, length, &state) != 0) {
        ++wide;
        narrow += length;
    }
    *wide = 0;
    return file.TryInitialize(widePath, mode);
}

#endif
