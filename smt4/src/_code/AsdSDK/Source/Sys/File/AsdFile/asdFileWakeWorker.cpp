#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {
extern u32 g_asdFileEvent; /* nn::os::LightEvent the worker thread sleeps on */

void FUN_002c4040(u32 *event);

/* Wakes the file worker thread. */
void asdFileWakeWorker(void)
{
    FUN_002c4040(&g_asdFileEvent);
}

} /* extern "C" */
