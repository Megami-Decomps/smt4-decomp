#include "shard/Shard0033.h"

extern "C" {

extern CecProcess *g_cecProcess;

/* Entry `index` (0..0x1F) of the cec process table, or NULL. */
CecEntry *cecProcessGetEntry(u32 index)
{
    CecEntry *entry = NULL;

    if (index < 0x20 && g_cecProcess != NULL) {
        entry = &g_cecProcess->entries[index];
    }
    return entry;
}

} /* extern "C" */
