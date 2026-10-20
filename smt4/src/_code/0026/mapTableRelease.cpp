#include "common.h"

extern "C" {

typedef struct MapTable0026ffe0 {
    /* 0x00 */ void *buffer;
    /* 0x04 */ u8 unk04[0x2c];
    /* 0x30 */ s32 nodeActive;
    /* 0x34 */ u32 node;
} MapTable0026ffe0;

void asdTMTexTableReleaseNode(s32 table, u32 node);
void asdMemFree(void);

extern MapTable0026ffe0 g_mapTable; /* 0x448c58 */

/* Frees the map table's buffer and releases its texture node. */
void mapTableRelease(void)
{
    if (g_mapTable.buffer != NULL) {
        asdMemFree();
        g_mapTable.buffer = NULL;
    }
    if (g_mapTable.nodeActive != 0) {
        asdTMTexTableReleaseNode(0x38, g_mapTable.node);
        g_mapTable.node = 0;
        g_mapTable.nodeActive = 0;
    }
}

} /* extern "C" */
