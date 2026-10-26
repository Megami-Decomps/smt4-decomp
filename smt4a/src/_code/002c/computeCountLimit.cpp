#include "common.h"
#include "util/BitsAndBytes.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0xF2];
    /* 0xF2 */ u16 base;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 id);

/* Computes a count limit: starts from the base value at 0xF2 of the game-data table, adds an amount for each of the items gameDataFlagTestBit reports (ids 0x25..0x28, 1, 2, 3; the last one found wins), caps it at 99 (999 when flag 0x534 is set), and returns 999 when item 0x29 is present. */
u16 computeCountLimit(void)
{
    u16 limit;
    s32 present;
    u16 result;
    u16 max;

    result = g_gameDataBlocks.table->base;
    present = gameDataFlagTestBit(0x25);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 1;
    }
    present = gameDataFlagTestBit(0x26);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 2;
    }
    present = gameDataFlagTestBit(0x27);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 4;
    }
    present = gameDataFlagTestBit(0x28);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 6;
    }
    present = gameDataFlagTestBit(1);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 9;
    }
    present = gameDataFlagTestBit(2);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 0xC;
    }
    present = gameDataFlagTestBit(3);
    if (present != 0) {
        result = g_gameDataBlocks.table->base + 0xF;
    }
    present = gameFlagIsSet(0x534);
    max = 999;
    limit = (present != 0) ? max : 99;
    if (limit < result) {
        present = gameFlagIsSet(0x534);
        result = (present != 0) ? max : 99;
    }
    present = gameDataFlagTestBit(0x29);
    if (present != 0) {
        result = max;
    }
    return result;
}

} /* extern "C" */
