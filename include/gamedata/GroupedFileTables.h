#ifndef GAMEDATA_GROUPEDFILETABLES_H
#define GAMEDATA_GROUPEDFILETABLES_H
#include "common.h"
#include <stddef.h>

struct FileTableKindRecord {
    s8 kind; // 0x00
    u8 unk01[0x3F]; // 0x01
};
struct FileTableSlot {
    void *file; // 0x00
    u8 unk04[8]; // 0x04
    u8 enabled; // 0x0C
    u8 unk0D[3]; // 0x0D
};
struct FileTableGroup {
    u8 unk00[0x4C]; // 0x00
    FileTableSlot *slots; // 0x4C
};
struct GroupedFileTables {
    u8 unk000[0x310]; // 0x000
    s32 count; // 0x310
    u32 unk314; // 0x314
    FileTableGroup *groups; // 0x318
};
typedef char FileTableRecordSizesCheck[sizeof(FileTableKindRecord) == 0x40 &&
    sizeof(FileTableSlot) == 0x10 && sizeof(FileTableGroup) == 0x50 ? 1 : -1];
typedef char GroupedFileTablesOffsetsCheck[offsetof(GroupedFileTables, count) == 0x310 &&
    offsetof(GroupedFileTables, groups) == 0x318 ? 1 : -1];
#endif
