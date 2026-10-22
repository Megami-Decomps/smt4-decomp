#include "shard/W4_Match3_AocMainA.h"

#define AOC_FLAG_CONTENT_READY 0x10000

/* One downloadable-content table file. */
struct AocTableFile {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ u8 unk04[0xc];
};

/* The downloadable-content table files of one data kind. */
struct AocTableFiles {
    /* 0x000 */ u8 unk000[0x444];
    /* 0x444 */ s32 count;
    /* 0x448 */ u8 unk448[4];
    /* 0x44c */ AocTableFile *files;
};

extern "C" {
s32 asdFsIsSdCardDetected(void);
u32 objGetFlagBit16(AocMainA *aoc);
void *dataTableFileGetTable(u32 fileId, u32 flags);
void *dataTableGetEntries(void *table);
s32 dataTableGetCount(void *table);

/* Counts the records of the downloadable-content tables; without an SD card it clears the
 * content-ready flag and counts none. */
s32 aocCountTableRecords(AocTableFiles *tables)
{
    if (tables->files == NULL) {
        return 0;
    }
    if (!asdFsIsSdCardDetected()) {
        g_aocMain->flags &= ~AOC_FLAG_CONTENT_READY;
        return 0;
    }
    if (!objGetFlagBit16(g_aocMain)) {
        return 0;
    }
    s32 total = 0;
    for (s32 i = 0; i < tables->count; i++) {
        u32 fileId = tables->files[i].fileId;
        if (fileId != 0) {
            void *table = dataTableFileGetTable(fileId, 0);
            if (table != NULL) {
                dataTableGetEntries(table);
                total += dataTableGetCount(table);
            }
        }
    }
    return total;
}
}
