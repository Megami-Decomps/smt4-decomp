#include "common.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {

typedef struct TableRef00470080 {
    /* 0x00 */ u32 file;
    /* 0x04 */ u8 unk04[0xc];
} TableRef00470080;

typedef struct Row00470080 {
    /* 0x00 */ s8 kind;         /* 6 marks a data-table row */
    /* 0x01 */ u8 unk01[0x3f];
} Row00470080;

typedef struct ContentFile00470080 {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ TableRef00470080 *tables;
} ContentFile00470080;

typedef struct Content00470080 {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 fileCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ ContentFile00470080 *files;
} Content00470080;

typedef struct Entry00470080 {
    /* 0x00 */ u8 data[0xd0];
} Entry00470080;

s32 FUN_001b315c(ContentFile00470080 *file);
Row00470080 *FUN_001b31ac(ContentFile00470080 *file);
u32 FUN_001b31e0(ContentFile00470080 *file);
void *dataTableFileGetTable(u32 file, s32 slot);
s32 dataTableGetCount(void *table);
Entry00470080 *dataTableGetEntries(void *table);

/* Entry `index` of the data tables of kind 6 (section `slot`) of the add-on content's files, counted across all files (NULL past the end). */
Entry00470080 *contentEntryGetFromFilesByKind(Content00470080 *content, s32 slot, s32 index)
{
    s32 base = 0;
    s32 fileIndex;

    for (fileIndex = 0; fileIndex < content->fileCount; fileIndex++) {
        ContentFile00470080 *file = &content->files[fileIndex];

        if (FUN_001b315c(file) != 0) {
            Row00470080 *rows = FUN_001b31ac(file);
            u32 rowCount = FUN_001b31e0(file);
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
