#ifndef MAP_MAPCELLGRID_H
#define MAP_MAPCELLGRID_H

#include "common.h"

struct MapCell {
    /* 0x00 */ u8 state;
    /* 0x01 */ u8 unk01[5];
    /* 0x06 */ u8 marked;
    /* 0x07 */ u8 unk07;
};

struct MapCellGrid {
    /* 0x000 */ MapCell cells[15][15];
};

typedef char MapCellSizeCheck[sizeof(MapCell) == 8 ? 1 : -1];
typedef char MapCellGridSizeCheck[sizeof(MapCellGrid) == 0x708 ? 1 : -1];

#endif
