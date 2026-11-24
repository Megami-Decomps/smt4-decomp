#include "runtime/Stdio.h"
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
        __2sprintf(path, "patch:/%s", name);
    } else {
        __2sprintf(path, "rom:/%s", name);
    }
    Obj420c60 stream;
    s32 result = fileTryInitializeNarrow(stream, path, 1);
    stream.Close();
    return result >= 0;
}

}
