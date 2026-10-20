#include "common.h"

extern "C" {

typedef struct TableRef00385d88 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef00385d88;

typedef struct Row00385d88 {
    /* 0x00 */ s8 kind;         /* '%' marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row00385d88;

typedef struct ContentFile00385d88 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef00385d88 *tables;
} ContentFile00385d88;

typedef struct Content00385d88 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile00385d88 *files;
} Content00385d88;

typedef struct Entry00385d88 {
    /* 0x00 */ u8 data[0x18];
} Entry00385d88;

s32 FUN_002ac12c(ContentFile00385d88 *file);
Row00385d88 *FUN_002ac0f8(ContentFile00385d88 *file);
u32 FUN_002ac0c4(ContentFile00385d88 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry00385d88 *dataTableGetEntries(void *table);

/* Entry `index` of the 0x18-byte data tables (section 3) of the add-on content's files, counted across all files (NULL past the end). */
Entry00385d88 *contentEntryGetFromFiles3(Content00385d88 *content, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile00385d88 *file = &content->files[fileIndex];

        if (FUN_002ac12c(file) != 0) {
            Row00385d88 *rows = FUN_002ac0f8(file);
            u32 rowCount = FUN_002ac0c4(file);
            u32 row;

            for (row = 0; row < rowCount; row++) {
                if (rows[row].kind == '%') {
                    void *table = dataTableFileGetTable(file->tables[row].file, 3);
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
