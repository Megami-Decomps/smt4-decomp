/* NON_MATCHING: 40 lines: the narrow-path open is retail's inlined conversion (fileTryInitializeNarrow, shared with FUN_002cb8d8), but this build's frame is 8 bytes larger (840 against 832) and numbers the loop's saved registers differently (retail: 1 in r8, the file in r7, narrow r6, wide r5, length r4). Needs _ZTT9Obj420c60 rename applied. */
#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
s32 asdLoadFileIsPatched(const char *name);

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
    s32 result = fileTryInitializeNarrow(stream, path, 1);
    stream.Close();
    return result >= 0;
}

}
