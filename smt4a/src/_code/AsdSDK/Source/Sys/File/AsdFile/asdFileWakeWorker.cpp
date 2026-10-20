#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {
extern u32 g_asdFileEvent; /* nn::os::LightEvent the worker thread sleeps on */

void FUN_001a08d8(u32 *event);

/* Wakes the file worker thread. */
void asdFileWakeWorker(void)
{
    FUN_001a08d8(&g_asdFileEvent);
}

} /* extern "C" */
