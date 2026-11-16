#include "shard/W8_X20_DataSet.h"

extern "C" {

s32 FUN_001b315c(DataArchive *archive);
DataArchiveRecord *FUN_001b31ac(DataArchive *archive);
u32 FUN_001b31e0(DataArchive *archive);

/* Entry `index` of a packed file, or NULL when the file has no such entry or it is empty. */
static __inline void *dataFileEntryData(DataFileHeader *header, s32 index)
{
    if (index < header->count) {
        DataFileEntry *entry = (DataFileEntry *)((u8 *)header + index * sizeof(DataFileEntry) + header->entryOffset);
        if (entry->size != 0) {
            return (u8 *)header + entry->offset;
        }
    }
    return NULL;
}

// Find the first loaded kind-0x13 file of any archive whose entry `index` has data, or NULL.
DataFileHeader *dataArchiveSetFindFileWithEntry(DataArchiveSet *set, s32 index)
{
    for (s32 i = 0; i < set->archiveCount; i++) {
        DataArchive *archive = &set->archives[i];
        if (FUN_001b315c(archive) != 0) {
            DataArchiveRecord *records = FUN_001b31ac(archive);
            u32 count = FUN_001b31e0(archive);
            for (u32 j = 0; j < count; j++) {
                if (records[j].kind == 0x13 && archive->files[j].loaded) {
                    if (dataFileEntryData(archive->files[j].header, index) != NULL) {
                        return archive->files[j].header;
                    }
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
