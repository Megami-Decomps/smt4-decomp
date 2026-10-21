#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s16 value;
} Record;

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x27E88];
    /* 0x27E88 */ Record record;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the halfword at 0xC of the record at 0x27E88 of the game-data table. */
s32 gameDataGetRecordValue(void)
{
    Record *record = &g_gameDataBlocks.table->record;
    return record->value;
}

} /* extern "C" */
