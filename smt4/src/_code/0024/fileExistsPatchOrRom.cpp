/* NON_MATCHING: 40 lines: the narrow-path open is retail's inlined conversion (fileTryInitializeNarrow, shared with FUN_002cb8d8), but this build's frame is 8 bytes larger (840 against 832) and numbers the loop's saved registers differently (retail: 1 in r8, the file in r7, narrow r6, wide r5, length r4). Needs _ZTT9Obj420c60 rename applied. */
#include <stdio.h>
#include "classes/Obj420c60.h"
#include "AsdSDK/AsdMemUtil.h"

struct MbState {
    u32 a, b;
};

extern "C" {
s32 asdLoadFileIsPatched(const char *name);
u32 refIsNullOrZero(s32 *object);
u32 FUN_002b90c8(const char *text, u32 count, MbState *state);
u32 FUN_002c618c(wchar_t *destination, const char *text, u32 count, MbState *state);
}

/* Opens the named file given as a narrow path, converted to UTF-16 one character at a time (the same
 * inlined conversion as FUN_002cb8d8 / fileExistsPatchOrRom). */
static __inline s32 fileTryInitializeNarrow(Obj420c60File *file, const char *path, s32 mode)
{
    wchar_t widePath[264];
    wchar_t *wide = widePath;
    const char *narrow = path;
    MbState state = {0, 0};
    refIsNullOrZero(reinterpret_cast<s32 *>(&state));
    u32 length;
    while ((length = FUN_002b90c8(narrow, 0x105, &state)) != 0 && FUN_002c618c(wide, narrow, length, &state) != 0) {
        wide++;
        narrow += length;
    }
    *wide = 0;
    return file->TryInitialize(widePath, mode);
}

extern "C" {

/* Tells whether the named file can be opened (patch:/ copy first, else rom:/). */
s32 fileExistsPatchOrRom(void *unused, const char *name)
{
    char path[256];
    memClear(path, sizeof(path));
    if (asdLoadFileIsPatched(name) != 0) {
        sprintf(path, "patch:/%s", name);
    } else {
        sprintf(path, "rom:/%s", name);
    }
    Obj420c60 stream;
    s32 result = fileTryInitializeNarrow(&stream, path, 1);
    stream.Close();
    return result >= 0;
}

}
