#include "common.h"

extern "C" {

typedef struct TableRef0046de0c {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef0046de0c;

typedef struct Row0046de0c {
    /* 0x00 */ s8 kind;         /* '%' marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row0046de0c;

typedef struct ContentFile0046de0c {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef0046de0c *tables;
} ContentFile0046de0c;

typedef struct Content0046de0c {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile0046de0c *files;
} Content0046de0c;

typedef struct Entry0046de0c {
    /* 0x00 */ u8 data[0x10];
} Entry0046de0c;

s32 FUN_001b315c(ContentFile0046de0c *file);
Row0046de0c *FUN_001b31ac(ContentFile0046de0c *file);
u32 FUN_001b31e0(ContentFile0046de0c *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry0046de0c *dataTableGetEntries(void *table);

/* Entry `index` of the 0x10-byte data tables (section 2) of the add-on content's files, counted across all files (NULL past the end). */
Entry0046de0c *contentEntryGetFromFiles4(Content0046de0c *content, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile0046de0c *file = &content->files[fileIndex];

        if (FUN_001b315c(file) != 0) {
            Row0046de0c *rows = FUN_001b31ac(file);
            u32 rowCount = FUN_001b31e0(file);
            u32 row;

            for (row = 0; row < rowCount; row++) {
                if (rows[row].kind == '%') {
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
