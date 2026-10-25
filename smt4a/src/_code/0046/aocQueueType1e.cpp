#include "common.h"

struct AocDisplay;

extern "C" {

void sysMemClear(void *buffer, s32 size);
s32 FUN_001b2bd8(u32 id, u32 kind, u32 variant, char *path);
void aocDisplayQueueRecord(AocDisplay *display, const char *path, const char *secondPath, u32 *completion,
                           u32 mode, u32 bytes, void *context);
extern AocDisplay *g_aocDisplay; /* 0x57027c */

// Resolve the file path for the request and queue its load on the add-on display.
void aocQueueType1e(u32 id, u32 variant, u32 *completion, const char *secondPath)
{
    char path[128];
    sysMemClear(path, 0x80);
    if (FUN_001b2bd8(id, 0x1e, variant, path) != 0) {
        aocDisplayQueueRecord(g_aocDisplay, path, secondPath, completion, 0, 4, NULL);
    }
}

} /* extern "C" */
