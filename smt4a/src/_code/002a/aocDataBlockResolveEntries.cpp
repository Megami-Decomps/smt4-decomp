#include "common.h"

extern "C" {

typedef struct DataBlock {
    /* 0x0000 */ u8 unk0000[0x20B8];
    /* 0x20B8 */ u32 table;
    /* 0x20BC */ u32 file;
    /* 0x20C0 */ u32 entries;
    /* 0x20C4 */ u32 count;
    /* 0x20C8 */ u8 unk20C8[4];
    /* 0x20CC */ u32 loaded;
} DataBlock;

typedef struct GameGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ DataBlock *block;
} GameGlobals;

extern GameGlobals g_gameGlobals; /* 0x588fd0 */

extern u32 dataTableGetCount(u32 table);
extern u32 dataTableGetEntries(void);
extern u32 dataTableFileGetTable(u32 file, u32 index);

/* Makes sure the loaded block's entry list is resolved; returns 0 when the block is missing its data. */
u32 aocDataBlockResolveEntries(u32 unused, u32 table)
{
    DataBlock *block = g_gameGlobals.block;
    u32 resolved;

    if (block != NULL) {
        if (block->loaded == 0) {
            return 0;
        }
        if (block->file != 0) {
            table = block->table;
        }
        if (block->file == 0 || table == 0) {
            return 0;
        }
        if (block->entries == 0) {
            resolved = dataTableFileGetTable(block->file, 0);
            block->entries = dataTableGetEntries();
            block->count = dataTableGetCount(resolved);
        }
    }
    return 1;
}

} /* extern "C" */
