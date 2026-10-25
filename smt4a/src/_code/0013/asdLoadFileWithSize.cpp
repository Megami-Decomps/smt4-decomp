#include "AsdSDK/AsdLoadFileSyncDefault.h"

/* Loads `path` synchronously with the default request alignment (4); returns the buffer. */
extern "C" void *asdLoadFileWithSize(const char *path, u32 *size, u32 flags)
{
    return asdLoadFileSync(NULL, NULL, path, size, flags, 4);
}
