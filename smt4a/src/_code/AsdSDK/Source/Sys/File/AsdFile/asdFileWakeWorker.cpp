#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {
extern u32 g_asdFileEvent; /* nn::os::LightEvent the worker thread sleeps on */

void nn_os_LightEvent_Signal(u32 *event);

/* Wakes the file worker thread. */
void asdFileWakeWorker(void)
{
    nn_os_LightEvent_Signal(&g_asdFileEvent);
}

} /* extern "C" */
