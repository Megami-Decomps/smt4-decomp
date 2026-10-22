#include "common.h"

namespace {
struct MapBlockView {
    /* 0x000 */ u8 unk000[0x3a];
    /* 0x03A */ u8 sizeX;
    /* 0x03B */ u8 sizeY;
    /* 0x03C */ u8 unk03c[0x755];
    /* 0x791 */ s8 layer;
    /* 0x792 */ u8 option;
};

struct GameStateTableView {
    /* 0x00 */ u8 unk00[0xa4];
    /* 0xA4 */ s32 tableKind;
    /* 0xA8 */ u32 recordId;
};

struct MapTableRecord0 {
    /* 0x00 */ u8 unk00[0xa];
    /* 0x0A */ u16 layer;
    /* 0x0C */ u16 sizeX;
    /* 0x0E */ u16 sizeY;
    /* 0x10 */ u16 option;
};

struct MapTableRecord1 {
    /* 0x00 */ u8 unk00[0xa];
    /* 0x0A */ u16 layer;
    /* 0x0C */ u16 sizeX;
    /* 0x0E */ u16 sizeY;
    /* 0x10 */ u8 unk10[6];
    /* 0x16 */ u16 option;
};

struct MapTableRecord2 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 layer;
    /* 0x0A */ u8 unk0a[2];
    /* 0x0C */ u16 sizeX;
    /* 0x0E */ u16 sizeY;
};
}

extern "C" {

extern GameStateTableView g_gameState;
MapBlockView *gameGetMapBlock(void);
MapTableRecord0 *dataTable2fSub0GetRecord(u32 id);
MapTableRecord1 *dataTable2fSub1GetRecord(u32 id);
MapTableRecord2 *dataTable2fSub2GetRecord(u32 id);

/* Copy the current map's size, layer and option from its table record, then clamp the layer (0 becomes -1, at most 15). */
void mapBlockLoadTableRecord(void)
{
    MapBlockView *block = gameGetMapBlock();

    block->option = 0;
    switch (g_gameState.tableKind) {
    case 1: {
        MapTableRecord0 *record = dataTable2fSub0GetRecord(g_gameState.recordId);
        block->sizeX = record->sizeX;
        block->sizeY = record->sizeY;
        block->layer = record->layer;
        block->option = record->option;
        break;
    }
    case 2: {
        MapTableRecord1 *record = dataTable2fSub1GetRecord(g_gameState.recordId);
        block->sizeX = record->sizeX;
        block->sizeY = record->sizeY;
        block->layer = record->layer;
        block->option = record->option;
        break;
    }
    case 3: {
        MapTableRecord2 *record = dataTable2fSub2GetRecord(g_gameState.recordId);
        block->sizeX = record->sizeX;
        block->sizeY = record->sizeY;
        block->layer = record->layer;
        break;
    }
    }
    if (block->layer == 0) {
        block->layer = -1;
    } else if (block->layer > 15) {
        block->layer = 15;
    }
}

} /* extern "C" */
