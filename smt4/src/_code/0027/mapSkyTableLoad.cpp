#include "common.h"

extern "C" {

typedef struct MapTable {
    /* 0x0 */ u32 sky;      /* loaded sky table */
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} MapTable;

extern MapTable g_mapTable;

s32 textFormatBuffer(char *path, const char *format, ...);
u32 FUN_002c5c04(const char *path);

/* Loads the sky table of map `map` (maps 100 and up use the L directory with the map number minus 100). */
void mapSkyTableLoad(s32 map)
{
    char path[64];

    g_mapTable.unk8 = 0x80;
    if (map >= 100) {
        textFormatBuffer(path, "/map/L%03d/SKY%03d.TBL", map - 100, map);
        g_mapTable.sky = FUN_002c5c04(path);
        return;
    }
    textFormatBuffer(path, "/map/m%03d/SKY%03d.TBL", map, map);
    g_mapTable.sky = FUN_002c5c04(path);
}

} /* extern "C" */
