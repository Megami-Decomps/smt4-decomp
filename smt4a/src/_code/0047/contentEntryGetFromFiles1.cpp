#include "common.h"

extern "C" {

typedef struct TableRef004707d0 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef004707d0;

typedef struct Row004707d0 {
    /* 0x00 */ s8 kind;         /* '#' marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row004707d0;

typedef struct ContentFile004707d0 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef004707d0 *tables;
} ContentFile004707d0;

typedef struct Content004707d0 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile004707d0 *files;
} Content004707d0;

typedef struct Entry004707d0 {
    /* 0x00 */ u8 data[0x8];
} Entry004707d0;

s32 FUN_001b315c(ContentFile004707d0 *file);
Row004707d0 *FUN_001b31ac(ContentFile004707d0 *file);
u32 FUN_001b31e0(ContentFile004707d0 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry004707d0 *dataTableGetEntries(void *table);

/* Entry `index` of the 0x8-byte data tables (section 1) of the add-on content's files, counted across all files (NULL past the end). */
Entry004707d0 *contentEntryGetFromFiles1(Content004707d0 *content, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile004707d0 *file = &content->files[fileIndex];

        if (FUN_001b315c(file) != 0) {
            Row004707d0 *rows = FUN_001b31ac(file);
            u32 rowCount = FUN_001b31e0(file);
            u32 row;

            for (row = 0; row < rowCount; row++) {
                if (rows[row].kind == '#') {
                    void *table = dataTableFileGetTable(file->tables[row].file, 1);
                    s32 count = dataTableGetCount(table);

                    if (index <= count + base) {
                        return &dataTableGetEntries(table)[index - base];
                    }
                    base = base + (count + base);
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
