#include "common.h"

extern "C" {

typedef struct MapTable00192564 {
    /* 0x00 */ void *buffer;
    /* 0x04 */ u32 filter;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u32 unk18;
} MapTable00192564;

u32 FUN_002c5c04(const char *path);
void asdTMTexTableLoadTmx(s32 table, s32 slot);

extern MapTable00192564 g_mapTable; /* 0x448c58 */

/* Loads the map filter file and the table's texture set 0x38. */
void mapFilterLoad(void)
{
    g_mapTable.filter = FUN_002c5c04("/map/all/filter.bin");
    g_mapTable.unk18 = 0;
    asdTMTexTableLoadTmx(0x38, 0);
}

} /* extern "C" */
