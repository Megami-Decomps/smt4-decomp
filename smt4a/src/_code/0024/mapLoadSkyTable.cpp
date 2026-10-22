#include "common.h"

extern "C" {

typedef struct MapTableState {
    /* 0x00 */ void *table;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 unk08;
} MapTableState;

s32 textFormatBuffer(char *output, const char *format, ...);
void *asdLoadFileSyncDefault(const char *path);

extern MapTableState g_mapTable; /* 0x5821c4 */

/* Loads the sky table for a map: 300 is Tokyo, 200 the fountain, 100+ the L maps, below 100 the m maps. */
void mapLoadSkyTable(s32 map)
{
    char path[64];

    g_mapTable.unk08 = 0x80;
    if (map == 300) {
        g_mapTable.table = asdLoadFileSyncDefault("/map/tokyo/SKY300.TBL");
    } else if (map == 200) {
        g_mapTable.table = asdLoadFileSyncDefault("/fountain/SKY200.TBL");
    } else if (map >= 100) {
        textFormatBuffer(path, "/map/L%03d/SKY%03d.TBL", map - 100, map);
        g_mapTable.table = asdLoadFileSyncDefault(path);
    } else {
        textFormatBuffer(path, "/map/m%03d/SKY%03d.TBL", map, map);
        g_mapTable.table = asdLoadFileSyncDefault(path);
    }
}

} /* extern "C" */
