#include "common.h"

extern "C" {

typedef struct TableRef00389874 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef00389874;

typedef struct Row00389874 {
    /* 0x00 */ s8 kind;         /* '#' marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row00389874;

typedef struct ContentFile00389874 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef00389874 *tables;
} ContentFile00389874;

typedef struct Content00389874 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile00389874 *files;
} Content00389874;

typedef struct Entry00389874 {
    /* 0x00 */ u8 data[0x18];
} Entry00389874;

s32 FUN_002ac12c(ContentFile00389874 *file);
Row00389874 *FUN_002ac0f8(ContentFile00389874 *file);
u32 FUN_002ac0c4(ContentFile00389874 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry00389874 *dataTableGetEntries(void *table);

/* Entry `index` of the 0x18-byte data tables (section 2) of the add-on content's files, counted across all files (NULL past the end). */
Entry00389874 *contentEntryGetFromFiles2(Content00389874 *content, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile00389874 *file = &content->files[fileIndex];

        if (FUN_002ac12c(file) != 0) {
            Row00389874 *rows = FUN_002ac0f8(file);
            u32 rowCount = FUN_002ac0c4(file);
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
