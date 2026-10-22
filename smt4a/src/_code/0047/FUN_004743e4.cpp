/* NON_MATCHING: compiler unrolls the slot loop and omits two retail NOP hints. */
#include "gamedata/DataTable.h"
#include "shard/W4_Match6_DataSet.h"

extern "C" void *dataTableFileGetTable(void *, u32);

/* Requested table files must all be present before the entry is ready. */
extern "C" u32 FUN_004743e4(DataEntry *entry)
{
    if (entry->files != NULL) {
        if (entry->source.hasMetadata != 0 && entry->source.metadataFile != NULL) {
            dataTableGetEntries(dataTableFileGetTable(entry->source.metadataFile, 0));
        }
        if (entry->source.hasMetadata != 0 && entry->source.metadataFile != NULL) {
            u32 count = dataTableGetCount(dataTableFileGetTable(entry->source.metadataFile, 0));
            for (u32 i = 0; i < count; ++i) {
                if (entry->files[i].status.requested != 0 && entry->files[i].file == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
