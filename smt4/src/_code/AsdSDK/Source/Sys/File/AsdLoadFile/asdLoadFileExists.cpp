#include "AsdSDK/Source/Sys/File/AsdLoadPath.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"
#include "nn/Result.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {

void rt_aeabi_memclr(void *block, u32 bytes);

/* Tells whether the file can be opened, resolving the name against the patch/rom devices. */
s32 asdLoadFileExists(const char *name)
{
    char path[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(path, sizeof(path));
    asdLoadFileBuildPath(path, name);
    Obj420c60 stream;
    s32 result = fileTryInitializeNarrow(stream, path, 1);
    stream.Close();
    if (!nnResultIsSuccess(result)) {
        return 0;
    }
    return 1;
}

}
