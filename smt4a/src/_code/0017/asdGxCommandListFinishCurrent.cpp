/* NON_MATCHING: register allocation only: retail keeps the callback argument in r7 and the list record in r8 (swapped here) */
/* Finishes the command list the active buffer is executing: advances to the next list, clears the
 * submit flags when the list asks for it, and runs the buffer's callback after unlocking. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

void asdGxCommandListFinishCurrent(void)
{
    AsdGfxContext *gfx = &g_asdGfxContext;
    AsdCmdBuffer *buffer = gfx->activeBuffer;
    AsdCmdRecord *record = &buffer->entries[buffer->listIndex];
    void (*callback)(s32) = NULL;
    s32 callbackArg;

    globalCriticalSectionEnterForward();
    buffer->listIndex++;
    if (buffer->onListAdvance != NULL &&
        (record->done.runCallback != 0 || (buffer->listIndex == buffer->listCount && buffer->callbackAtEnd != 0))) {
        callback = buffer->onListAdvance;
        callbackArg = buffer->listIndex;
    }
    if (record->done.resetState != 0) {
        gfx->submitEnabled = 0;
        gfx->ready = 0;
        gfx->submitPending = 0;
    } else if (buffer->listIndex >= buffer->listCount) {
        gfx->submitPending = 0;
    } else {
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
    if (callback != NULL) {
        callback(callbackArg);
    }
}
}
