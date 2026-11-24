#include "sys/TitleContentFileSystem.h"
#include "protos__code.h"

extern "C" TitleContentFileSystemState g_titleContentFileSystem;

/* Initializes the access delay and enables it for debug mode or a nonzero configured duration. */
extern "C" void fsInitializeAccessDelay(void)
{
    enum { ACCESS_DELAY_UNIT_MILLISECONDS = 10 };
    s32 delay = FUN_00158ef4() * ACCESS_DELAY_UNIT_MILLISECONDS;
    TitleContentFileSystemState *fileSystem = &g_titleContentFileSystem;
    fileSystem->accessDelayMilliseconds = delay;
    if (nn_cfg_CTR_IsDebugMode()) {
        fileSystem->debugDelay = 1;
    }
    if (fileSystem->debugDelay || fileSystem->accessDelayMilliseconds != 0) {
        fileSystem->delayEnabled = true;
    }
}
