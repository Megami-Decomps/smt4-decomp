#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {
extern u32 g_asdFileEvent; /* nn::os::LightEvent the worker thread sleeps on */
extern u8 LAB_002dc6c0;

void FUN_002c4040(u32 *event);
void FUN_002bb150(void *wait, s32 timeout);

/* Waits until a request has finished (DONE or FAILED), waking the worker thread each round. */
void asdFileWait(AsdFileRequest *request)
{
    for (;;) {
        if (request->state == ASD_FILE_DONE || request->state == ASD_FILE_FAILED) {
            return;
        }
        FUN_002c4040(&g_asdFileEvent);
        FUN_002bb150(&LAB_002dc6c0, 0);
    }
}

} /* extern "C" */
