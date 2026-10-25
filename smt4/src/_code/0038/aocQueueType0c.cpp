#include "addon/aocMain.h"
#include "addon/AocPackage.h"

extern "C" {

extern AocDisplay *g_aocDisplay;

void memClear(void *block, s32 size);
AocPackageFile *FUN_002a6e7c(AocSystem *system, s32 kind, s32 id, char *path);
void aocDisplayQueueRecord(AocDisplay *display, const char *path, const char *destination,
    u32 *output, u32 mode, u32 bytes, void *context);

static __inline void formatAndQueueAocRecord(AocSystem *system, s32 kind, s32 id,
    void **output, const char *destination)
{
    char path[128];
    memClear(path, sizeof(path));
    AocPackageFile *file = FUN_002a6e7c(system, kind, id, path);
    if (file != NULL)
        aocDisplayQueueRecord(g_aocDisplay, path, destination,
            reinterpret_cast<u32 *>(output), 0, sizeof(path), file);
}

/* Fills a request of kind 12 for the add-on content and, when it is accepted, hands it to the display. */
void aocQueueType0c(AocSystem *system, s32 id, void **output, const char *destination)
{
    formatAndQueueAocRecord(system, 12, id, output, destination);
}

} /* extern "C" */
