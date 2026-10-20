#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {
extern u32 g_asdFileEvent; /* nn::os::LightEvent the worker thread sleeps on */
extern u8 LAB_002dc6c0;

void FUN_001a08d8(u32 *event);
void FUN_001bcd48(void *wait, s32 timeout);

/* Waits until a request has finished (DONE or FAILED), waking the worker thread each round. */
void asdFileWait(AsdFileRequest *request)
{
    for (;;) {
        if (request->state == ASD_FILE_DONE || request->state == ASD_FILE_FAILED) {
            return;
        }
        FUN_001a08d8(&g_asdFileEvent);
        FUN_001bcd48(&LAB_002dc6c0, 0);
    }
}

} /* extern "C" */
