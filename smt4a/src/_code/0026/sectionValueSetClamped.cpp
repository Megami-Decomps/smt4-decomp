#include "common.h"

extern "C" {

typedef struct Section {
    /* 0x0000 */ u8 unk0000[0x15D4];
    /* 0x15D4 */ s32 value;
} Section;

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x3E74];
    /* 0x3E74 */ u8 area[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Table *table;
} GameDataBlocksView;

extern GameDataBlocksView g_gameDataBlocks;

static __inline Section *gameDataSection(void)
{
    return (Section *)g_gameDataBlocks.table->area;
}

/* Stores the value at 0x5448 of the game data table, capped at 99. */
void sectionValueSetClamped(s32 value)
{
    Section *section = gameDataSection();

    if (value > 99) {
        value = 99;
    }
    section->value = value;
}

} /* extern "C" */
