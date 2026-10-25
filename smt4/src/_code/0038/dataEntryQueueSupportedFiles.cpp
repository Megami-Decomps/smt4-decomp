/* NON_MATCHING: only the stack-pointer adjustment is scheduled before the first load and the null-row register is initialised conditionally instead of unconditionally. */
#include "shard/W4_Match6_DataSet.h"
#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern AocDisplay *g_aocDisplay;
void *dataTableFileGetTable(void *file, u32 index);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void aocQueueFileLoad(AocDisplay *display, const char *path, DataFileRef *file,
                  u32 mode, u32 size, DataFileRef *context);
}

static __inline const DataRow *dataEntryRows(const DataEntry *entry)
{
    if (!entry->source.hasMetadata) {
        return NULL;
    }
    if (entry->source.metadataFile == NULL) {
        return NULL;
    }
    return static_cast<const DataRow *>(dataTableGetEntries(
        dataTableFileGetTable(entry->source.metadataFile, 0)));
}

static __inline u32 dataEntryRowCount(const DataEntry *entry)
{
    if (!entry->source.hasMetadata) {
        return 0;
    }
    if (entry->source.metadataFile == NULL) {
        return 0;
    }
    return dataTableGetCount(dataTableFileGetTable(entry->source.metadataFile, 0));
}

// Queue supported data-row files beneath this entry's directory.
extern "C" void dataEntryQueueSupportedFiles(DataEntry *entry)
{
    if (entry->source.metadataFile == NULL || entry->files == NULL) {
        return;
    }
    const DataRow *rows = dataEntryRows(entry);
    u32 count = dataEntryRowCount(entry);
    {
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
            case 0x2f: {
                char path[0x80];
                memClear(path, sizeof(path));
                textFormatBuffer(path, "%s/%s", entry->source.directory, rows[index].name);
                DataFileRef *file = &entry->files[index];
                aocQueueFileLoad(g_aocDisplay, path, file, 1, sizeof(path), file);
                entry->files[index].status.requested = 1;
                break;
            }
            }
        }
    }
}
