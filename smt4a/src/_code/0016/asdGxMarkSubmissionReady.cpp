#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);

// Mark the latest graphics queue entry ready, or clear the pending state when disabled.
void asdGxMarkSubmissionReady(void)
{
    AsdCmdBuffer *queue = g_asdGfxContext.activeBuffer;
    if (queue == NULL)
        return;
    globalCriticalSectionEnterForward();
    if (g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitEnabled = g_asdGfxContext.submitPending;
    } else {
        queue->entries[queue->unk24 - 1].done.resetState = 1;
        g_asdGfxContext.ready = 1;
    }
    globalCriticalSectionLeaveForward();
}
}
