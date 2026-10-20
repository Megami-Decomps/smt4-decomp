#include "common.h"

extern "C" {

typedef struct TableRef004708a0 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef004708a0;

typedef struct Row004708a0 {
    /* 0x00 */ s8 kind;         /* '#' marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row004708a0;

typedef struct ContentFile004708a0 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef004708a0 *tables;
} ContentFile004708a0;

typedef struct Content004708a0 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile004708a0 *files;
} Content004708a0;

typedef struct Entry004708a0 {
    /* 0x00 */ u8 data[0x1c];
} Entry004708a0;

s32 FUN_001b315c(ContentFile004708a0 *file);
Row004708a0 *FUN_001b31ac(ContentFile004708a0 *file);
u32 FUN_001b31e0(ContentFile004708a0 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry004708a0 *dataTableGetEntries(void *table);

/* Entry `index` of the 0x1c-byte data tables (section 2) of the add-on content's files, counted across all files (NULL past the end). */
Entry004708a0 *contentEntryGetFromFiles2(Content004708a0 *content, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile004708a0 *file = &content->files[fileIndex];

        if (FUN_001b315c(file) != 0) {
            Row004708a0 *rows = FUN_001b31ac(file);
            u32 rowCount = FUN_001b31e0(file);
            u32 row;

            for (row = 0; row < rowCount; row++) {
                if (rows[row].kind == '#') {
                    void *table = dataTableFileGetTable(file->tables[row].file, 2);
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
