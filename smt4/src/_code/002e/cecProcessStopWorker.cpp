#include "nn/os/WaitObject.h"
#include "cec/CecProcessGlobal.h"

extern "C" {

void addressSpaceRegionFree(void *queue);
void asdMemFree(void *block);

// Waits for the worker thread to end, then releases the thread, its queue and buffer.
void cecProcessStopWorker(void)
{
    CecProcess *process = g_cecProcess;
    if (process != NULL) {
        nn::os::ThreadJoin(&process->thread);
        /* Joined above: finalize the thread, then close its handle through the handle's destructor. */
        process->thread.finalize();
        process->thread.NnOsHandle::~NnOsHandle();
        addressSpaceRegionFree(process->queue);
        if (process->buffer != NULL) {
            asdMemFree(process->buffer);
            process->buffer = NULL;
        }
        process->state = -1;
    }
}

}
