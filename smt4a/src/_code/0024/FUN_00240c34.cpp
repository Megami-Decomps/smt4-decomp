#include "AsdSDK/AsdMemUtil.h"

extern "C" {
u32 asdLoadFileExists(const char *path);

/* Reports whether the file at the path exists. */
s32 FUN_00240c34(const char *path)
{
    // Retail clears a 256-byte path buffer on entry that nothing reads (a stripped debug-text buffer).
    char scratch[256];
    sysMemClear(scratch, sizeof(scratch));
    return asdLoadFileExists(path) != 0;
}
}
