#include "cec/CecProcessGlobal.h"

extern "C" {

/* Inbox batch `index` (0..0x1F) of the cec process, or NULL. */
AsdCecInboxBatch *cecProcessGetEntry(u32 index)
{
    AsdCecInboxBatch *entry = NULL;
    if (index < 0x20 && g_cecProcess != NULL) {
        entry = &g_cecProcess->batches[index];
    }
    return entry;
}

} /* extern "C" */
