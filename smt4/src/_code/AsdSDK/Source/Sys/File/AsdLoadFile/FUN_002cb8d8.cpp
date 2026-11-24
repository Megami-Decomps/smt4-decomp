/* NON_MATCHING: retail frame order is wide path at 0, stream at 0x210, path at 0x228 (here path first); the narrow-path conversion is the inlined fileTryInitializeNarrow its twin fileExistsPatchOrRom also uses. Needs _ZTT9Obj420c60 rename applied. */
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */
extern const char DAT_00409800[];   /* "patch:/%s" */
extern const char DAT_0040980c[];   /* "rom:/%s" */

void rt_aeabi_memclr(void *block, u32 bytes);
s32 asdLoadFileIsPatched(const char *name);

/* Tells whether the file can be opened, resolving the name against the patch/rom devices. */
s32 FUN_002cb8d8(const char *name)
{
    char path[256];
    rt_aeabi_memclr(path, sizeof(path));
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(name) != 0) {
        __2sprintf(path, name);
    } else if (asdLoadFileIsPatched(name) != 0) {
        __2sprintf(path, DAT_00409800, name);
    } else {
        __2sprintf(path, DAT_0040980c, name);
    }
    Obj420c60 stream;
    s32 result = fileTryInitializeNarrow(stream, path, 1);
    stream.Close();
    if (result < 0) {
        return 0;
    }
    return 1;
}

}
