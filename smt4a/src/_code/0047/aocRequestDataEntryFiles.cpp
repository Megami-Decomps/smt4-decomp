/* NON_MATCHING: retail retains an empty metadata path and two NOPs before GetCount; pointer/constant scheduling differs by three rows, possibly under alternate optimization. */
#include "shard/W4_Match6_DataSet.h"
#include "gamedata/DataTable.h"

extern "C" {
extern void *g_aocDisplay;
void *dataTableFileGetTable(void *, s32);
void sysMemClear(void *, u32);
s32 textFormatBuffer(char *, const char *, ...);
void aocQueueFileLoad(void *, const char *, DataFileRef *, u32, u32, DataFileRef *);

void aocRequestDataEntryFiles(DataEntry *entry)
{
    if (entry->source.metadataFile == NULL || entry->files == NULL) {
        return;
    }
    DataRow *rows = NULL;
    if (entry->source.hasMetadata) {
        void *table = dataTableFileGetTable(entry->source.metadataFile, 0);
        rows = (DataRow *)dataTableGetEntries(table);
    }
    if (entry->source.hasMetadata && entry->source.metadataFile != NULL) {
        void *table = dataTableFileGetTable(entry->source.metadataFile, 0);
        u32 count = dataTableGetCount(table);
        for (u32 index = 0; index < count; ++index) {
            switch (rows[index].opcode) {
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
                textFormatBuffer(path, "%s/%s", entry->source.directory, rows[index].name);
                DataFileRef *file = &entry->files[index];
                aocQueueFileLoad(g_aocDisplay, path, file, 1, 0x80, file);
                entry->files[index].status.requested = 1;
                break;
            }
            }
        }
    }
}
}
