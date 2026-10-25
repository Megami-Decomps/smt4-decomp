#include "AsdSDK/FileLoadSync.h"

extern "C" {

void *fileLoadSync(const char *path, u32 *size, u32 flags)
{
    return asdLoadFileSync(path, size, flags, 4);
}

}
