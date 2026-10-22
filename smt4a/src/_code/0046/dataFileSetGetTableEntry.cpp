#include "common.h"

#define DATA_FILE_CHUNK_TABLE 37 /* chunk kind holding a data table */

/* A chunk descriptor (0x40 bytes): its kind in the first byte. */
struct DataFileChunk {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0x3F];
};

/* A chunk's handle entry (0x10 bytes). */
struct DataFileChunkHandle {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 unk04[0xC];
};

/* A loaded data file (0x50 bytes). */
struct DataFile {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ DataFileChunkHandle *handles;
};

struct DataFileSet {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ DataFile *files;
};

/* A data table entry (0x10 bytes). */
struct DataTableEntry16 {
    /* 0x00 */ u8 unk00[0x10];
};

extern "C" {

s32 FUN_001b315c(DataFile *file);
DataFileChunk *FUN_001b31ac(DataFile *file);
u32 FUN_001b31e0(DataFile *file);
void *dataTableFileGetTable(u32 handle, s32 kind);
s32 dataTableGetCount(void *table);
DataTableEntry16 *dataTableGetEntries(void *table);

/* Returns entry `index` counted across the data tables of every loaded file, or NULL. */
DataTableEntry16 *dataFileSetGetTableEntry(DataFileSet *set, s32 index)
{
    s32 total = 0;
    s32 i;

    for (i = 0; i < set->fileCount; i++) {
        DataFile *file = &set->files[i];
        if (FUN_001b315c(file)) {
            DataFileChunk *chunks = FUN_001b31ac(file);
            u32 chunkCount = FUN_001b31e0(file);
            u32 j;

            for (j = 0; j < chunkCount; j++) {
                if (chunks[j].kind == DATA_FILE_CHUNK_TABLE) {
                    void *table = dataTableFileGetTable(file->handles[j].handle, 4);
                    s32 end = dataTableGetCount(table) + total;
                    if (end >= index) {
                        return &dataTableGetEntries(table)[index - total];
                    }
                    total += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
