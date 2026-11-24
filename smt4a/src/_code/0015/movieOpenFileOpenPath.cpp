#include "AsdSDK/Source/Sys/File/AsdFilePath.h"

/* Opens a multibyte path using the file's UTF-16 stream. */
extern "C" s32 movieOpenFileOpenPath(Obj55813cFile *file, const char *path, u32 mode)
{
    return fileTryInitializeNarrow(*file, path, mode);
}
