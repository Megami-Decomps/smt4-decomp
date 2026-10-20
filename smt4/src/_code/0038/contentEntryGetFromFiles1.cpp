#include "common.h"

extern "C" {

typedef struct TableRef003897a4 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef003897a4;

typedef struct Row003897a4 {
    /* 0x00 */ s8 kind;         /* '#' marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row003897a4;

typedef struct ContentFile003897a4 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef003897a4 *tables;
} ContentFile003897a4;

typedef struct Content003897a4 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile003897a4 *files;
} Content003897a4;

typedef struct Entry003897a4 {
    /* 0x00 */ u8 data[0x8];
} Entry003897a4;

s32 FUN_002ac12c(ContentFile003897a4 *file);
Row003897a4 *FUN_002ac0f8(ContentFile003897a4 *file);
u32 FUN_002ac0c4(ContentFile003897a4 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry003897a4 *dataTableGetEntries(void *table);

/* Entry `index` of the 0x8-byte data tables (section 1) of the add-on content's files, counted across all files (NULL past the end). */
Entry003897a4 *contentEntryGetFromFiles1(Content003897a4 *content, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile003897a4 *file = &content->files[fileIndex];

        if (FUN_002ac12c(file) != 0) {
            Row003897a4 *rows = FUN_002ac0f8(file);
            u32 rowCount = FUN_002ac0c4(file);
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
