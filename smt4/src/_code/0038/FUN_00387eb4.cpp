#include "common.h"

/* A table header inside a loaded data file. */
struct DataFileTableHeader {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0x3F];
};

struct DataFileTableRef {
    /* 0x00 */ u32 table;
    /* 0x04 */ u8 unk04[0xC];
};

struct DataFile {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ DataFileTableRef *tables;
};

struct DataFileSet {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 count;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ DataFile *files;
};

/* One record of the kind-0x27 tables. */
struct DataRecord27 {
    /* 0x00 */ u8 unk00[0x28];
};

extern "C" {

s32 FUN_002ac12c(DataFile *file);
DataFileTableHeader *FUN_002ac0f8(DataFile *file);
u32 FUN_002ac0c4(DataFile *file);
u32 dataTableFileGetTable(u32 table, s32 sub);
u32 dataTableGetCount(u32 table);
DataRecord27 *dataTableGetEntries(u32 table);

/* Returns record `index` counted across every loaded kind-0x27 table of the file set, or NULL. */
DataRecord27 *FUN_00387eb4(DataFileSet *set, s32 index)
{
    s32 base = 0;
    s32 i;

    for (i = 0; i < set->count; i++) {
        DataFile *file = &set->files[i];
        if (FUN_002ac12c(file) != 0) {
            DataFileTableHeader *headers = FUN_002ac0f8(file);
            u32 tableCount = FUN_002ac0c4(file);
            u32 j;
            for (j = 0; j < tableCount; j++) {
                if (headers[j].kind == 0x27) {
                    u32 table = dataTableFileGetTable(file->tables[j].table, 0);
                    s32 end = dataTableGetCount(table) + base;
                    if (end >= index) {
                        return &dataTableGetEntries(table)[index - base];
                    }
                    base += end;
                }
            }
        }
    }
    return NULL;
}

} /* extern "C" */
