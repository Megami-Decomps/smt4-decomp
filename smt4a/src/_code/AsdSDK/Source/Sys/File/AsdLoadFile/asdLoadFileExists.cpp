#include "AsdSDK/Source/Sys/File/AsdLoadPath.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/asdFileHashPackIsOpen.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"

extern "C" {
void rt_aeabi_memclr(void *, u32);
u32 asdFileHashPackContains(const char *);
} /* extern "C" */

/* Tells whether the file can be opened: a path the hash pack holds counts even when the open fails. */
extern "C" u32 asdLoadFileExists(const char *path)
{
    char fullPath[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(fullPath, sizeof(fullPath));
    asdLoadFileBuildPath(fullPath, path);
    bool inHashPack = false;
    if (asdFileHashPackIsOpen() && asdFileHashPackContains(fullPath)) {
        inHashPack = true;
    }
    Obj55813c stream;
    s32 result = fileTryInitializeNarrow(stream, fullPath, 1);
    stream.Close();
    if ((s32)(result & 0x80000000) < 0 && !inHashPack) {
        return 0;
    }
    return 1;
}
