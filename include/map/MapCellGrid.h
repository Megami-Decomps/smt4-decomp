#ifndef MAP_MAPCELLGRID_H
#define MAP_MAPCELLGRID_H

#include "common.h"
#include <stddef.h>

struct MapCell {
    /* 0x00 */ u8 state;
    union {
        /* 0x01 */ u8 unk01[5];
        struct {
            u8 unk01[3];
            u8 variant; // 0x04
            u8 neighbors; // 0x05
        } autoTile;
        struct {
            u8 unk01;
            u8 first; // 0x02
            u8 second; // 0x03
        } markers;
    };
    /* 0x06 */ u8 marked;
    union {
        /* 0x07 */ u8 unk07;
        /* 0x07 */ u8 specialKind;
    };
};

struct MapCellGrid {
    /* 0x000 */ MapCell cells[15][15];
};

typedef char MapCellSizeCheck[sizeof(MapCell) == 8 ? 1 : -1];
typedef char MapCellGridSizeCheck[sizeof(MapCellGrid) == 0x708 ? 1 : -1];
typedef char MapCellAutoTileOffsetsCheck[offsetof(MapCell, autoTile.variant) == 4 &&
    offsetof(MapCell, autoTile.neighbors) == 5 ? 1 : -1];
typedef char MapCellMarkerOffsetsCheck[offsetof(MapCell, markers.first) == 2 &&
    offsetof(MapCell, markers.second) == 3 && offsetof(MapCell, specialKind) == 7 &&
    sizeof(MapCell) == 8 ? 1 : -1];

#endif
