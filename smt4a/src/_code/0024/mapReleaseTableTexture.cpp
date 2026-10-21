#include "common.h"

struct MapTextureResources {
    void* table;       // 0x00
    u8 unk04[0x2c];    // 0x04
    u32 textureLoaded; // 0x30
    u32 texture;       // 0x34
};

extern "C" {
extern MapTextureResources g_mapTable;
void asdMemFree(void* allocation);
void asdTMTexTableReleaseNode(u32 table, u32 node);

// Frees the map table and releases its loaded texture.
void mapReleaseTableTexture(void)
{
    if (g_mapTable.table != NULL) {
        asdMemFree(g_mapTable.table);
        g_mapTable.table = NULL;
    }
    if (g_mapTable.textureLoaded != 0) {
        asdTMTexTableReleaseNode(0x2d, g_mapTable.texture);
        g_mapTable.texture = 0;
        g_mapTable.textureLoaded = 0;
    }
}
}
