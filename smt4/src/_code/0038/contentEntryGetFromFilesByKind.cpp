#include "common.h"

extern "C" {

typedef struct TableRef00389444 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef00389444;

typedef struct Row00389444 {
    /* 0x00 */ s8 kind;         /* 6 marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row00389444;

typedef struct ContentFile00389444 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef00389444 *tables;
} ContentFile00389444;

typedef struct Content00389444 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile00389444 *files;
} Content00389444;

typedef struct Entry00389444 {
    /* 0x00 */ u8 data[0xd0];
} Entry00389444;

s32 FUN_002ac12c(ContentFile00389444 *file);
Row00389444 *FUN_002ac0f8(ContentFile00389444 *file);
u32 FUN_002ac0c4(ContentFile00389444 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry00389444 *dataTableGetEntries(void *table);

/* Entry `index` of the data tables of kind 6 (section `slot`) of the add-on content's files, counted across all files (NULL past the end). */
Entry00389444 *contentEntryGetFromFilesByKind(Content00389444 *content, s32 slot, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile00389444 *file = &content->files[fileIndex];

        if (FUN_002ac12c(file) != 0) {
            Row00389444 *rows = FUN_002ac0f8(file);
            u32 rowCount = FUN_002ac0c4(file);
            u32 row;

            for (row = 0; row < rowCount; row++) {
                if (rows[row].kind == 6) {
                    void *table = dataTableFileGetTable(file->tables[row].file, slot);
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
