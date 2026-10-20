#include "common.h"

extern "C" {

void FUN_0022838c(void);
void clearTwoWords(u8 *settings);
void sysMemClear(void *block, s32 size);

typedef struct Table {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u8 settings[5];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Resets the five settings bytes at 0x80 of the game-data table to their defaults (2, 2, 2, 1, 1), then clears the table's first 0x80 bytes. */
void FUN_00213b10(void)
{
    Table *table;
    u8 *settings;

    table = g_gameDataBlocks.table;
    settings = g_gameDataBlocks.table->settings;
    clearTwoWords(settings);
    settings[0] = 2;
    settings[1] = 2;
    settings[2] = 2;
    settings[3] = 1;
    settings[4] = 1;
    FUN_0022838c();
    sysMemClear(g_gameDataBlocks.table, 0x80);
}

} /* extern "C" */
