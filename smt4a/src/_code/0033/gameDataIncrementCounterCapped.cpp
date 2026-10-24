#include "common.h"

struct DataBlock003332a4 {
    /* 0x00 */ u8 unk00[0x66];
    /* 0x66 */ u16 count;
};

struct DataBlocks003332a4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ DataBlock003332a4 *block;
};

extern "C" {

extern DataBlocks003332a4 g_gameDataBlocks;

/* Adds one to the counter at 0x66 of the data block, capped at 9998. */
void gameDataIncrementCounterCapped(void)
{
    DataBlock003332a4 *block = g_gameDataBlocks.block;
    if (block->count < 9998)
        block->count++;
    if (block->count >= 9998)
        block->count = 9998;
}

} /* extern "C" */
