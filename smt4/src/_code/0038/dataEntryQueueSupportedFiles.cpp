/* NON_MATCHING: only the stack-pointer adjustment is scheduled before the first load and the null-row register is initialised conditionally instead of unconditionally. */
#include <stdio.h>
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/AsdMemUtil.h"
#include "addon/AocSystem.h"

extern "C" {
extern AocDisplay *g_aocDisplay;
void *dataTableFileGetTable(void *file, u32 index);
void aocQueueFileLoad(AocDisplay *display, const char *path, AocPackageFile *file,
                  u32 mode, u32 size, AocPackageFile *context);
}

static __inline const AocPackageDirectoryEntry *dataEntryRows(const AocPackage *entry)
{
    if (!entry->directoryLoaded) {
        return NULL;
    }
    if (entry->directoryFile == NULL) {
        return NULL;
    }
    return static_cast<const AocPackageDirectoryEntry *>(dataTableGetEntries(
        dataTableFileGetTable(entry->directoryFile, 0)));
}

static __inline u32 dataEntryRowCount(const AocPackage *entry)
{
    if (!entry->directoryLoaded) {
        return 0;
    }
    if (entry->directoryFile == NULL) {
        return 0;
    }
    return dataTableGetCount(dataTableFileGetTable(entry->directoryFile, 0));
}

// Queue supported data-row files beneath this entry's directory.
extern "C" void dataEntryQueueSupportedFiles(AocPackage *entry)
{
    if (entry->directoryFile == NULL || entry->files == NULL) {
        return;
    }
    const AocPackageDirectoryEntry *rows = dataEntryRows(entry);
    u32 count = dataEntryRowCount(entry);
    {
        for (u32 index = 0; index < count; ++index) {
            switch (rows[index].kind) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 0xb:
            case 0x12:
            case 0x13:
            case 0x15:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f: {
                char path[0x80];
                memClear(path, sizeof(path));
                sprintf(path, "%s/%s", entry->mountName, rows[index].name);
                AocPackageFile *file = &entry->files[index];
                aocQueueFileLoad(g_aocDisplay, path, file, 1, sizeof(path), file);
                entry->files[index].available = 1;
                break;
            }
            }
        }
    }
}
