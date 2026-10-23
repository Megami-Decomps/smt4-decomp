#include "addon/AocHandleJob.h"
#include "addon/aocMain.h"
#include "nn/Result.h"

extern "C" {
extern AocMain *g_aocMain;
AocHandleJob *FUN_002a1130(u32 id, u32 flags);
WindowStatusResult FUN_00354608(void *parameters, AocHandleSource *source);
WindowStatusResult archiveFileReplaceHandle(void *destination, void *source);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
void recordClearWideHandle(void *handle);
int jyoucyuGetTableEntry(s32 index);

// Finish the pending add-on handle operation, retaining recoverable errors.
void aocFinishHandleOperation(u32 id, AocHandleSource *source)
{
    AocHandleJob *job = FUN_002a1130(id, 0);
    job->result = FUN_00354608(source->parameters, source);
    if (nnResultIsFailure(legacyResourceIdRemap(&job->result))) {
        job->state = 100;
        if (legacyResourceIdRemap(&job->result) == (s32)0xC8813894 ||
            legacyResourceIdRemap(&job->result) == (s32)0xC8813887 ||
            legacyResourceIdRemap(&job->result) == (s32)0xC9413915) {
            jyoucyuGetTableEntry(0);
            return;
        }
        job->state = 106;
        job->delay = 150;
    } else {
        job->result = archiveFileReplaceHandle((u8 *)g_aocMain + 0x28, (u8 *)g_aocMain + 0x18);
        if (!nnResultIsFailure(legacyResourceIdRemap(&job->result))) {
            recordClearWideHandle((u8 *)g_aocMain + 0x28);
            g_aocMain->flags |= 0x10000;
            return;
        }
        job->state = 100;
    }
}
}
