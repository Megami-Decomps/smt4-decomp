#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" s32 libc_strlen(const char *text);

// A device prefix ends with a colon within the first eight path characters.
extern "C" u32 asdLoadFileHasDevice(const char *path)
{
    s32 length = libc_strlen(path);
    if (length > 8)
        length = 8;
    for (s32 index = 0; index < length; ++index) {
        if (path[index] == ':')
            return 1;
    }
    return 0;
}
