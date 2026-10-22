#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

/* A file of a loaded archive (0x10 bytes). */
typedef struct DataArchiveFile {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 unk04[0xC];
} DataArchiveFile;

/* A loaded data archive (0x50 bytes). */
typedef struct DataArchive {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ DataArchiveFile *files;
} DataArchive;

/* A file name entry of an archive's directory (0x40 bytes); data tables start with '$'. */
typedef struct DataArchiveName {
    char name[0x40];
} DataArchiveName;

typedef struct DataArchiveSet {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 count;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ DataArchive *archives;
} DataArchiveSet;

/* A 12-byte record of the merged tables. */
typedef struct DataArchiveRecord {
    u8 data[0xC];
} DataArchiveRecord;

s32 FUN_001b315c(DataArchive *archive);
DataArchiveName *FUN_001b31ac(DataArchive *archive);
u32 FUN_001b31e0(DataArchive *archive);
void *dataTableFileGetTable(u32 handle, u32 section);

/* Returns record `index` of the '$' data tables of every loaded archive taken in order (NULL past the end). */
DataArchiveRecord *dataArchiveGetMergedRecord(DataArchiveSet *set, s32 index)
{
    s32 base = 0;
    s32 i;

    for (i = 0; i < set->count; i++) {
        DataArchive *archive = &set->archives[i];

        if (FUN_001b315c(archive)) {
            DataArchiveName *names = FUN_001b31ac(archive);
            u32 fileCount = FUN_001b31e0(archive);
            u32 j;

            for (j = 0; j < fileCount; j++) {
                if (names[j].name[0] == '$') {
                    void *table = dataTableFileGetTable(archive->files[j].handle, 1);
                    s32 end = dataTableGetCount(table) + base;

                    if (end >= index) {
                        return (DataArchiveRecord *)dataTableGetEntries(table) + (index - base);
                    }
                    base += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
