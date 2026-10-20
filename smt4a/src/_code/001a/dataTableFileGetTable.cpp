#include "common.h"

extern "C" {

#define DATA_FILE_MAGIC 0x52434254  /* "TBCR" */
#define DATA_TABLE_MAGIC 0x314C4254 /* "TBL1" */

typedef struct DataTable {
    /* 0x00 */ u32 magic;
} DataTable;

typedef struct DataTableFile {
    /* 0x00 */ u32 magic;
    /* 0x04 */ u32 dataOffset;      /* the table offsets are relative to this */
    /* 0x08 */ u32 tableCount;
    /* 0x0C */ u32 tableOffsets[1];
} DataTableFile;

/* Returns table `index` of a table file, or NULL if the file or the table header is invalid. */
DataTable *dataTableFileGetTable(DataTableFile *file, u32 index)
{
    DataTable *table;
    u32 *offsets;

    if (file == NULL || file->magic != DATA_FILE_MAGIC || file->tableCount <= index) {
        return NULL;
    }
    offsets = file->tableOffsets;
    table = (DataTable *)((u8 *)file + offsets[index] + file->dataOffset);
    if (table == NULL || table->magic != DATA_TABLE_MAGIC) {
        return NULL;
    }
    return table;
}

} /* extern "C" */
