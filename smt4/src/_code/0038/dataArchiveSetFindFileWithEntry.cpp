#include "shard/W8_X20_DataSet.h"
#include "addon/AocSystem.h"

extern "C" {

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
DataFileHeader *dataArchiveSetFindFileWithEntry(AocSystem *system, s32 index)
{
    for (s32 i = 0; i < system->packageCount; i++) {
        AocPackage *package = &system->packages[i];
        if (packageEntryIsLoaded(package) != 0) {
            AocPackageDirectoryEntry *records = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            for (u32 j = 0; j < count; j++) {
                if (records[j].kind == 0x13 && package->files[j].available) {
                    if (dataFileEntryData((DataFileHeader *)package->files[j].data, index) != NULL) {
                        return (DataFileHeader *)package->files[j].data;
                    }
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
