#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "nn/fnd/TimeSpan.h"

extern "C" {
extern u32 g_asdFileEvent; /* nn::os::LightEvent the worker thread sleeps on */

void nn_os_LightEvent_Signal(u32 *event);
void svcSleepThread(nn::fnd::TimeSpan delay);

/* Waits until a request has finished (DONE or FAILED), waking the worker thread and
 * sleeping 3 ms each round. */
void asdFileWait(AsdFileRequest *request)
{
    for (;;) {
        if (request->state == ASD_FILE_DONE || request->state == ASD_FILE_FAILED) {
            return;
        }
        nn_os_LightEvent_Signal(&g_asdFileEvent);
        svcSleepThread(nn::fnd::TimeSpan::FromMilliSeconds(3));
    }
}

} /* extern "C" */
