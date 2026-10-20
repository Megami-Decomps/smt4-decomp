/* The game data table of g_gameDataBlocks (IV): 0x501 entries of 0x34 bytes at 0xc1f8. */
#ifndef SHARD_W4_MATCH1B_GAMEDATATABLE_H
#define SHARD_W4_MATCH1B_GAMEDATATABLE_H

#include "common.h"

typedef struct GameDataEntry {
    /* 0x00 */ u8 unk00[0x2E];
    /* 0x2E */ u16 flags;      /* bits 2..7: a 6-bit value */
    /* 0x30 */ u8 unk30[4];
} GameDataEntry; /* 0x34 */

typedef struct GameDataTable {
    /* 0x0000 */ u8 unk0000[0xC1F8];
    /* 0xC1F8 */ GameDataEntry entries[0x501];
} GameDataTable;

typedef struct GameDataBlocksTable {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ GameDataTable *table;
} GameDataBlocksTable;

#endif
