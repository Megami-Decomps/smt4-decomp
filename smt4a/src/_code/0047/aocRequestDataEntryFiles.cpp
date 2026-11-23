/* NON_MATCHING: written as IV's twin dataEntryQueueSupportedFiles (IDENTICAL); only the final `available = 1` store
 * swaps r0/r1 (retail keeps the file table in r0 and the 1 in r1, the build the reverse). */
#include <stdio.h>
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {
extern void *g_aocDisplay;
void *dataTableFileGetTable(void *, s32);
void sysMemClear(void *, u32);
void aocQueueFileLoad(void *, const char *, AocPackageFile *, u32, u32, AocPackageFile *);

void aocRequestDataEntryFiles(AocPackage *entry)
{
    if (entry->directoryFile == NULL || entry->files == NULL) {
        return;
    }
    const AocPackageDirectoryEntry *rows = NULL;
    if (entry->directoryLoaded != 0 && entry->directoryFile != NULL) {
        rows = (const AocPackageDirectoryEntry *)dataTableGetEntries(dataTableFileGetTable(entry->directoryFile, 0));
    }
    u32 count = 0;
    if (entry->directoryLoaded != 0 && entry->directoryFile != NULL) {
        count = dataTableGetCount(dataTableFileGetTable(entry->directoryFile, 0));
    }
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
        case 0x2f:
        case 0x3b: {
            char path[0x80];
            sysMemClear(path, sizeof(path));
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
