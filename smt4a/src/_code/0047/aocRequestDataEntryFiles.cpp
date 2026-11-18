/* NON_MATCHING: stack-pointer adjustment is scheduled before the first entry load and available=1 swaps r0/r1. */
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {
extern void *g_aocDisplay;
void *dataTableFileGetTable(void *, s32);
void sysMemClear(void *, u32);
s32 textFormatBuffer(char *, const char *, ...);
void aocQueueFileLoad(void *, const char *, AocPackageFile *, u32, u32, AocPackageFile *);

void aocRequestDataEntryFiles(AocPackage *entry)
{
    if (entry->directoryFile == NULL || entry->files == NULL) {
        return;
    }
    AocPackageDirectoryEntry *rows = NULL;
    if (entry->directoryLoaded) {
        void *table = dataTableFileGetTable(entry->directoryFile, 0);
        rows = (AocPackageDirectoryEntry *)dataTableGetEntries(table);
    }
    u32 count = 0;
    if (entry->directoryLoaded && entry->directoryFile != NULL) {
        void *table = dataTableFileGetTable(entry->directoryFile, 0);
        count = dataTableGetCount(table);
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
            textFormatBuffer(path, "%s/%s", entry->mountName, rows[index].name);
            AocPackageFile *file = &entry->files[index];
            aocQueueFileLoad(g_aocDisplay, path, file, 1, 0x80, file);
            entry->files[index].available = 1;
            break;
        }
        }
    }
}
}
